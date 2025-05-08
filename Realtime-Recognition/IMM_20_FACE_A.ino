#include "ds.h"
dataset ds;
byte wajahmasuk[40][70]; 
float count, StartTime, EndTime, waktu = 0;
float mytime;
int data_baris, data_kolom;
float persentase_tertinggi = 0;
String ekspresi_terdeteksi = "";
int kolom_masuk, baris_masuk;
String TipeUji = "";

void setup() {
  Serial.begin (115200);  
  Serial.println(F("Sistem Pengenalan Ekspresi Netral, Senang, Terkejut"));
  Serial.println(F(" __   __  ___  _____  ___    _____  ___       -      _______    _______         __      "));
  Serial.println(F("|  | /  \\|   |(\\    \\|    \\ (\\    \\|   \\            /       |  /       \\       /  \\     "));
  Serial.println(F("|   /    \\:  ||.\\\\   \\    | |.\\\\   \\    |          (: ______) |:        |     /    \\    "));
  Serial.println(F("|: /         ||: \\.   \\\\  | |: \\.   \\\\  |           \\/    |   |_____/   )    /  /\\  \\   "));
  Serial.println(F(" \\//  /\\     ||.  \\    \\. | |.  \\    \\. |           // ___)    //      /    //  __   \\  "));
  Serial.println(F(" /   /  \\\\   ||    \\    \\ | |    \\    \\ |          (:  (      |:  __   \\   /   /  \\\\  \\ "));
  Serial.println(F("|___/    \\___| \\___|\\____\\)  \\___|\\____\\)           \\__/      |__|  \\___) (___/    \\___)"));
  Serial.println(F("   ___         _      _     ___                 "));
  Serial.println(F("  / _ \\  _  _ (_) __ | |__ / __| __  __ _  _ _  "));
  Serial.println(F(" | (_) || || || |/ _|| / / \\__ \\/ _|/ _` || ' \\ "));
  Serial.println(F("  \\__\\_\\ \\_,_||_|\\__||_\\_\\ |___/\\__|\\__,_||_||_|"));
  Serial.println(F("> Sketch uses 219768 bytes (96%) of program storage space. Maximum is 253952 bytes. \n> Global variables use 6574 bytes (80%) of dynamic memory, leaving 1624 bytes for local variables. Maximum is 8192 bytes."));
  Serial.println(F(""));
  Serial.println(F("Ekspresi,Baris,Kolom,WaktuScan,WinnerClass,Persentase,Dikenali"));
}


void loop() {
  if (Serial.available() >= 4) {
    // Serial.println(F("Menerima data..."));
    // TipeUji = Serial.readStringUntil(' ');
    // TipeUji.replace(",","");
    // TipeUji.trim();
    baris_masuk = Serial.parseInt();
    kolom_masuk = Serial.parseInt();
    for (int i = 0; i < baris_masuk; i++) {
      for (int j = 0; j < kolom_masuk; j++) {
        wajahmasuk[i][j] = Serial.parseInt();
      }
    }

    analyze();
    TipeUji = ekspresi_terdeteksi;
    // Serial.print("Jenis Data Ekspresi : "),Serial.println(TipeUji);

    // Serial.print("Jumlah Baris : "),Serial.println(baris_masuk),Serial.print("Jumlah Kolom : "),Serial.println(kolom_masuk);

    // Serial.println(F("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ Data yang Diterima //////////////////////////////"));
    // Serial.println(F(" "));
    // for (int i = 0; i < baris_masuk; i++) {
    //   for (int j = 0; j < kolom_masuk; j++) {
    //     Serial.print(wajahmasuk[i][j]);
    //   }
    //   Serial.println();
    // }
    // Serial.println(" ");

    StartTime = millis(); // Record the start time
    persentase_tertinggi = 0;
    if (TipeUji == "senang"){
      senang();
    } else if (TipeUji == "netral"){
      netral();
    } else if (TipeUji == "terkejut"){
      terkejut();}

    EndTime = millis(); // record end time
    status();
    // Serial.println(F(" "));
    // Serial.println(F(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> RESULT <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"));
    // Serial.print("Total waktu Scan: "), Serial.print((EndTime - StartTime) / 1000), Serial.println(" detik");
    // Serial.print(F("Dataset Ekspresi/Winner Class: ")), Serial.println(ekspresi_terdeteksi);
    // Serial.print(F("Persentase: ")), Serial.print(persentase_tertinggi), Serial.println(" %");

    // if (persentase_tertinggi >= 80){
    //   Serial.println(F("Wajah dikenali"));
    //   Serial.print(F("Persentase: ")), Serial.println(persentase_tertinggi);
    // }
    // else{
    //   Serial.println(F("Wajah tidak dikenali"));
    //   Serial.print(F("Persentase: ")), Serial.println(persentase_tertinggi);
    // }
    // Serial.println(F("====================================================================================="));
    TipeUji = "";
    ekspresi_terdeteksi = "";
  }
}

void initiate(String ekspresi){
  data_baris = min(baris_masuk , ds.baris);
  data_kolom = min(kolom_masuk , ds.kolom);
  for (int i = 0; i < data_baris; i++) {
    for (int j = 0; j < data_kolom; j++) {
      if (ds.wajah[i][j] == wajahmasuk[i][j]) {
        count = count + 1;
      }
    }
  }
  float sama = (count / (data_baris * data_kolom)) * 100;
  float tidaksama = 100 - sama;
  if (sama > persentase_tertinggi) {
    persentase_tertinggi = sama;
    ekspresi_terdeteksi = ekspresi;
  }
  
  count = 0;
  tidaksama = 0;
}

void cek(String ekspresi)
{
  // Serial.print(baris_data_masuk),Serial.print("  ||  "),Serial.println(baris);
  // Serial.print(kolom_data_masuk),Serial.print("  ||  "),Serial.println(kolom);
  // Serial.println("");
  mytime = millis();
  waktu = mytime;
  data_baris = min(baris_masuk , ds.baris);
  data_kolom = min(kolom_masuk , ds.kolom);
  for (int i = 0; i < data_baris; i++) {
    // Serial.print(F(">"));
    for (int j = 0; j < data_kolom; j++) {
      if (ds.wajah[i][j] == wajahmasuk[i][j]) {
        count = count + 1;
        // delay(1);
      }
    }
  }
  float sama = (count / (data_baris * data_kolom)) * 100;
  float tidaksama = 100 - sama;
  mytime = millis();
  // Serial.print(ekspresi),Serial.print(" || Kemiripan= "), Serial.print(sama), Serial.print(" %  ||  waktu scan= "), Serial.print((mytime - waktu) / 1000), Serial.println(" detik");
  // Serial.print(" count = "), Serial.print(count), Serial.print(" dari "), Serial.println(data_baris*data_kolom);
  
  if (sama > persentase_tertinggi) {
    persentase_tertinggi = sama;
    ekspresi_terdeteksi = ekspresi;
  }
  
  count = 0;
  tidaksama = 0;
}
void status() {
  Serial.print(TipeUji),Serial.print(","), Serial.print(baris_masuk),Serial.print(","), Serial.print(kolom_masuk),Serial.print(","), Serial.print((EndTime - StartTime)/1000),Serial.print(","), Serial.print(ekspresi_terdeteksi),Serial.print(","), Serial.print(persentase_tertinggi),Serial.print(","), rec();
}
void rec() {
    if (persentase_tertinggi >= 86){
      Serial.println(F("Ya"));

    }
    else{
      Serial.println(F("Tidak"));
    }
}
void analyze(){
  persentase_tertinggi = 0;
  ds.senang1();
  initiate("senang");
  ds.netral1();
  initiate("netral");
  ds.terkejut1();
  initiate("terkejut");
  ds.senang19();
  initiate("senang");
  ds.netral19();
  initiate("netral");
  ds.terkejut19();
  initiate("terkejut");
  ds.senang12();
  initiate("senang");
  ds.netral12();
  initiate("netral");
  ds.terkejut12();
  initiate("terkejut");
  ds.senang20();
  initiate("senang");
  ds.netral7();
  initiate("netral");
  ds.terkejut15();
  initiate("terkejut");
  ds.netral18();
  initiate("netral");
  ds.senang8();
  initiate("senang");
  ds.terkejut18();
  initiate("terkejut");
  ds.terkejut14();
  initiate("terkejut");
  ds.netral14();
  initiate("netral");
  ds.terkejut11();
  initiate("terkejut");
  ds.senang10();
  initiate("senang");  
  ds.terkejut20();
  initiate("terkejut");
  ds.terkejut25();
  initiate("terkejut");
}

void senang(){
  ds.senang1 ();
  cek("senang1");
  ds.senang2 ();
  cek("senang2");
  ds.senang3 ();
  cek("senang3");
  ds.senang4 ();
  cek("senang4");
  ds.senang5 ();
  cek("senang5");
  ds.senang6 ();
  cek("senang6");
  ds.senang7 ();
  cek("senang7");
  ds.senang8 ();
  cek("senang8");
  ds.senang9 ();
  cek("senang9");
  ds.senang10 ();
  cek("senang10");
  ds.senang11 ();
  cek("senang11");
  ds.senang12 ();
  cek("senang12");
  ds.senang13 ();
  cek("senang13");
  ds.senang14 ();
  cek("senang14");
  ds.senang15 ();
  cek("senang15");
  ds.senang16 ();
  cek("senang16");
  ds.senang17 ();
  cek("senang17");
  ds.senang18 ();
  cek("senang18");
  ds.senang19 ();
  cek("senang19");
  ds.senang20 ();
  cek("senang20");
  ds.senang21 ();
  cek("senang21");
  ds.senang22 ();
  cek("senang22");
  ds.senang23 ();
  cek("senang23");
  ds.senang24 ();
  cek("senang24");
  ds.senang25 ();
  cek("senang25");
}

void netral(){
  ds.netral1 ();
  cek("netral1");
  ds.netral2 ();
  cek("netral2");
  ds.netral3 ();
  cek("netral3");
  ds.netral4 ();
  cek("netral4");
  ds.netral5 ();
  cek("netral5");
  ds.netral6 ();
  cek("netral6");
  ds.netral7 ();
  cek("netral7");
  ds.netral8 ();
  cek("netral8");
  ds.netral9 ();
  cek("netral9");
  ds.netral10 ();
  cek("netral10");
  ds.netral11 ();
  cek("netral11");
  ds.netral12 ();
  cek("netral12");
  ds.netral13 ();
  cek("netral13");
  ds.netral14 ();
  cek("netral14");
  ds.netral15 ();
  cek("netral15");
  ds.netral16 ();
  cek("netral16");
  ds.netral17 ();
  cek("netral17");
  ds.netral18 ();
  cek("netral18");
  ds.netral19 ();
  cek("netral19");
  ds.netral20 ();
  cek("netral20");
  ds.netral21 ();
  cek("netral21");
  ds.netral22 ();
  cek("netral22");
  ds.netral23 ();
  cek("netral23");
  ds.netral24 ();
  cek("netral24");
  ds.netral25 ();
  cek("netral25");
}

void terkejut(){
  ds.terkejut1 ();
  cek("terkejut1");
  ds.terkejut2 ();
  cek("terkejut2");
  ds.terkejut3 ();
  cek("terkejut3");
  ds.terkejut4 ();
  cek("terkejut4");
  ds.terkejut5 ();
  cek("terkejut5");
  ds.terkejut6 ();
  cek("terkejut6");
  ds.terkejut7 ();
  cek("terkejut7");
  ds.terkejut8 ();
  cek("terkejut8");
  ds.terkejut9 ();
  cek("terkejut9");
  ds.terkejut10 ();
  cek("terkejut10");
  ds.terkejut11 ();
  cek("terkejut11");
  ds.terkejut12 ();
  cek("terkejut12");
  ds.terkejut13 ();
  cek("terkejut13");
  ds.terkejut14 ();
  cek("terkejut14");
  ds.terkejut15 ();
  cek("terkejut15");
  ds.terkejut16 ();
  cek("terkejut16");
  ds.terkejut17 ();
  cek("terkejut17");
  ds.terkejut18 ();
  cek("terkejut18");
  ds.terkejut19 ();
  cek("terkejut19");
  ds.terkejut20 ();
  cek("terkejut20");
  ds.terkejut21 ();
  cek("terkejut21");
  ds.terkejut22 ();
  cek("terkejut22");
  ds.terkejut23 ();
  cek("terkejut23");
  ds.terkejut24 ();
  cek("terkejut24");
  ds.terkejut25 ();
  cek("terkejut25");
}
