#include "DS_20_FACE.h"
dataset daset;
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
  Serial.println(F("> Sketch uses 219768 bytes (86%) of program storage space. Maximum is 253952 bytes. \n> Global variables use 6574 bytes (80%) of dynamic memory, leaving 1618 bytes for local variables. Maximum is 8192 bytes."));


}


void loop() {
  if (Serial.available() >= 4) {
    Serial.println(F("Menerima data..."));
    TipeUji = Serial.readStringUntil(' ');
    TipeUji.replace(",","");
    TipeUji.trim();
    baris_masuk = Serial.parseInt();
    kolom_masuk = Serial.parseInt();
    for (int i = 0; i < baris_masuk; i++) {
      for (int j = 0; j < kolom_masuk; j++) {
        wajahmasuk[i][j] = Serial.parseInt();
      }
    }

    Serial.print("Jenis Data Ekspresi : "),Serial.println(TipeUji);

    Serial.print("Jumlah Baris : "),Serial.println(baris_masuk),Serial.print("Jumlah Kolom : "),Serial.println(kolom_masuk);

    Serial.println(F("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ Data yang Diterima //////////////////////////////"));
    Serial.println(F(" "));
    for (int i = 0; i < baris_masuk; i++) {
      for (int j = 0; j < kolom_masuk; j++) {
        Serial.print(wajahmasuk[i][j]);
      }
      Serial.println();
    }
    Serial.println(" ");

    StartTime = millis(); // Record the start time
    persentase_tertinggi = 0;
    if (TipeUji == "senang"){
      senang();
    } else if (TipeUji == "netral"){
      netral();
    } else if (TipeUji == "terkejut"){
      terkejut();}

    EndTime = millis(); // record end time
    Serial.println(F(" "));
    Serial.println(F(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> RESULT <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"));
    Serial.print("Total waktu Scan: "), Serial.print((EndTime - StartTime) / 1000), Serial.println(" detik");
    Serial.print(F("Dataset Ekspresi/Winner Class: ")), Serial.println(ekspresi_terdeteksi);
    Serial.print(F("Persentase: ")), Serial.print(persentase_tertinggi), Serial.println(" %");

    if (persentase_tertinggi >= 80){
      Serial.println(F("Wajah dikenali"));
      Serial.print(F("Persentase: ")), Serial.println(persentase_tertinggi);
    }
    else{
      Serial.println(F("Wajah tidak dikenali"));
      Serial.print(F("Persentase: ")), Serial.println(persentase_tertinggi);
    }
    Serial.println(F("====================================================================================="));
  }
}

void cek(String ekspresi)
{
  // Serial.print(baris_data_masuk),Serial.print("  ||  "),Serial.println(baris);
  // Serial.print(kolom_data_masuk),Serial.print("  ||  "),Serial.println(kolom);
  // Serial.println("");
  mytime = millis();
  waktu = mytime;
  data_baris = min(baris_masuk , daset.baris);
  data_kolom = min(kolom_masuk , daset.kolom);
  for (int i = 0; i < data_baris; i++) {
    Serial.print(F(">"));
    for (int j = 0; j < data_kolom; j++) {
      if (daset.wajah[i][j] == wajahmasuk[i][j]) {
        count = count + 1;
        // delay(1);
      }
    }
  }
  float sama = (count / (data_baris * data_kolom)) * 100;
  float tidaksama = 100 - sama;
  mytime = millis();
  Serial.print(ekspresi),Serial.print(" || Kemiripan= "), Serial.print(sama), Serial.print(" %  ||  waktu scan= "), Serial.print((mytime - waktu) / 1000), Serial.println(" detik");
  Serial.print(" count = "), Serial.print(count), Serial.print(" dari "), Serial.println(data_baris*data_kolom);
  
  if (sama > persentase_tertinggi) {
    persentase_tertinggi = sama;
    ekspresi_terdeteksi = ekspresi;
  }
  
  count = 0;
  tidaksama = 0;
}

void senang(){
  daset.senang1 ();
  cek("senang1");
  daset.senang2 ();
  cek("senang2");
  daset.senang3 ();
  cek("senang3");
  daset.senang4 ();
  cek("senang4");
  daset.senang5 ();
  cek("senang5");
  daset.senang6 ();
  cek("senang6");
  daset.senang7 ();
  cek("senang7");
  daset.senang8 ();
  cek("senang8");
  daset.senang9 ();
  cek("senang9");
  daset.senang10 ();
  cek("senang10");
  daset.senang11 ();
  cek("senang11");
  daset.senang12 ();
  cek("senang12");
  daset.senang13 ();
  cek("senang13");
  daset.senang14 ();
  cek("senang14");
  daset.senang15 ();
  cek("senang15");
  daset.senang16 ();
  cek("senang16");
  daset.senang17 ();
  cek("senang17");
  daset.senang18 ();
  cek("senang18");
  daset.senang19 ();
  cek("senang19");
  daset.senang20 ();
  cek("senang20");
}

void netral(){
  daset.netral1 ();
  cek("netral1");
  daset.netral2 ();
  cek("netral2");
  daset.netral3 ();
  cek("netral3");
  daset.netral4 ();
  cek("netral4");
  daset.netral5 ();
  cek("netral5");
  daset.netral6 ();
  cek("netral6");
  daset.netral7 ();
  cek("netral7");
  daset.netral8 ();
  cek("netral8");
  daset.netral9 ();
  cek("netral9");
  daset.netral10 ();
  cek("netral10");
  daset.netral11 ();
  cek("netral11");
  daset.netral12 ();
  cek("netral12");
  daset.netral13 ();
  cek("netral13");
  daset.netral14 ();
  cek("netral14");
  daset.netral15 ();
  cek("netral15");
  daset.netral16 ();
  cek("netral16");
  daset.netral17 ();
  cek("netral17");
  daset.netral18 ();
  cek("netral18");
  daset.netral19 ();
  cek("netral19");
  daset.netral20 ();
  cek("netral20");
}

void terkejut(){
  daset.terkejut1 ();
  cek("terkejut1");
  daset.terkejut2 ();
  cek("terkejut2");
  daset.terkejut3 ();
  cek("terkejut3");
  daset.terkejut4 ();
  cek("terkejut4");
  daset.terkejut5 ();
  cek("terkejut5");
  daset.terkejut6 ();
  cek("terkejut6");
  daset.terkejut7 ();
  cek("terkejut7");
  daset.terkejut8 ();
  cek("terkejut8");
  daset.terkejut9 ();
  cek("terkejut9");
  daset.terkejut10 ();
  cek("terkejut10");
  daset.terkejut11 ();
  cek("terkejut11");
  daset.terkejut12 ();
  cek("terkejut12");
  daset.terkejut13 ();
  cek("terkejut13");
  daset.terkejut14 ();
  cek("terkejut14");
  daset.terkejut15 ();
  cek("terkejut15");
  daset.terkejut16 ();
  cek("terkejut16");
  daset.terkejut17 ();
  cek("terkejut17");
  daset.terkejut18 ();
  cek("terkejut18");
  daset.terkejut19 ();
  cek("terkejut19");
  daset.terkejut20 ();
  cek("terkejut20");
}
