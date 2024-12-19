#include <dataset.h>
dataset ds;
byte wajahmasuk[40][80];

float count, tot_waktu, waktu = 0;
float mytime;
int data_baris, data_kolom;
int kolom_data_masuk, baris_data_masuk;
float persentase_tertinggi = 0;
String ekspresi_terdeteksi = "";

void setup() {
  Serial.begin(115200);
  mytime = millis();
  kolom_data_masuk = sizeof(wajahmasuk[0]);
  baris_data_masuk = sizeof(wajahmasuk) / kolom_data_masuk;
  Serial.println(F("Scan Ekspresi: Netral, Senang, Marah, Antusias"));
}

void loop() {
  if (Serial.available() > 0) {
    String received_data = Serial.readStringUntil('\n');
    updateWajahMasuk(received_data);
    Serial.println(F("Data wajahmasuk diperbarui"));
    
    // Lakukan pemindaian ulang setelah data diperbarui
    persentase_tertinggi = 0; // Reset persentase tertinggi
    Serial.println(F("Dataset 1"));
    ds.Netral1();
    cek("Netral");
    ds.Senang1();
    cek("Senang");
    ds.Antusias1();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 2"));
    ds.Netral2();
    cek("Netral");
    ds.Senang2();
    cek("Senang");
    ds.Antusias2();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 3"));
    ds.Netral3();
    cek("Netral");
    ds.Senang3();
    cek("Senang");
    ds.Antusias3();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 4"));
    ds.Netral4();
    cek("Netral");
    ds.Senang4();
    cek("Senang");
    ds.Antusias4();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 5"));
    ds.Netral5();
    cek("Netral");
    ds.Senang5();
    cek("Senang");
    ds.Antusias5();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 6"));
    ds.Netral6();
    cek("Netral");
    ds.Senang6();
    cek("Senang");
    ds.Antusias6();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 7"));
    ds.Netral7();
    cek("Netral");
    ds.Senang7();
    cek("Senang");
    ds.Antusias7();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 8"));
    ds.Netral8();
    cek("Netral");
    ds.Senang8();
    cek("Senang");
    ds.Antusias8();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 9"));
    ds.Netral9();
    cek("Netral");
    ds.Senang9();
    cek("Senang");
    ds.Antusias9();
    cek("Antusias");
    Serial.println(F(" "));
    Serial.println(F("Dataset 10"));
    ds.Netral10();
    cek("Netral");
    ds.Senang10();
    cek("Senang");
    ds.Antusias10();
    cek("Antusias");
    Serial.print(F("Total waktu Scan= ")), Serial.print(tot_waktu), Serial.println(F(" detik"));
    Serial.print(F("Ekspresi yang terdeteksi: ")), Serial.println(ekspresi_terdeteksi);
    Serial.print(F("Persentase: ")), Serial.println(persentase_tertinggi);

    if (persentase_tertinggi > 90) {
      Serial.print(F("Wajah dikenali"));
    } else {
      Serial.print(F("Wajah tidak dikenali"));
    }
  }
}

void updateWajahMasuk(String data) {
  int index = 0;
  int row = 0;
  int col = 0;

  for (int i = 0; i < data.length(); i++) {
    char c = data.charAt(i);
    if (c == ',' || c == '\n') {
      wajahmasuk[row][col] = index;
      index = 0;
      col++;
      if (col == 60) {
        col = 0;
        row++;
        if (row == 30) break;
      }
    } else if (c >= '0' && c <= '1') {
      index = c - '0';
    }
  }
}

void cek(String ekspresi) {
  mytime = millis();
  waktu = mytime;
  data_baris = min(baris_data_masuk, ds.baris);
  data_kolom = min(kolom_data_masuk, ds.kolom);
  for (int i = 0; i < data_baris; i++) {
    Serial.print("_");
    for (int j = 0; j < data_kolom; j++) {
      if (ds.wajah[i][j] == wajahmasuk[i][j]) {
        count = count + 1;
      }
    }
  }
  float sama = (count / (data_baris * data_kolom)) * 100;
  float tidaksama = 100 - sama;
  mytime = millis();
  tot_waktu = tot_waktu + ((mytime - waktu) / 1000);
  Serial.print(F(" Kemiripan= ")), Serial.print(sama), Serial.print(" %  ||  waktu scan= "), Serial.print((mytime - waktu) / 1000), Serial.println(F(" detik"));
  Serial.print(F(" Count= ")), Serial.print(count), Serial.print(" dari "), Serial.println(data_baris * data_kolom);
  
  if (sama > persentase_tertinggi) {
    persentase_tertinggi = sama;
    ekspresi_terdeteksi = ekspresi;
  }

  count = 0;
  tidaksama = 0;
}
