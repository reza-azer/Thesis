#include "Arduino.h"
#include "dataset.h"

// Senang

dataset::Senang1 ()
{
   baris = 31 ;
   kolom = 61 ;

//baris 0
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 5 ;i<= 14 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 15 ;i<= 37 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 38 ;i<= 47 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 52 ;i<= 54 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 18 ;i<= 35 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 36 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 5 ;i<= 22 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 23 ;i<= 32 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 33 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 52 ;i<= 56 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 47 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 48 ;i<= 59 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 8 ;i<= 44 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 45 ;i<= 59 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 8 ;i<= 43 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 44 ;i<= 60 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 9 ;i<= 43 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 44 ;i<= 60 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 10 ;i<= 43 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 44 ;i<= 60 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 10 ;i<= 33 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 34 ;i<= 34 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 35 ;i<= 43 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 44 ;i<= 60 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 12 ;i<= 43 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 54 ;i<= 60 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 3 ;i<= 10 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 11 ;i<= 51 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 55 ;i<= 60 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 4 ;i<= 26 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 31 ;i<= 54 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 55 ;i<= 60 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 31 ;i<= 56 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 26 ;i<= 31 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 32 ;i<= 56 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 8 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 26 ;i<= 32 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 33 ;i<= 43 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 45 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 54 ;i<= 60 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 8 ;i<= 24 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 25 ;i<= 33 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 34 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 60 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 1 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 9 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 25 ;i<= 33 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 34 ;i<= 52 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 53 ;i<= 60 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 24 ;i<= 34 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 48 ;i<= 49 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 23 ;i<= 35 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 40 ;i<= 60 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 12 ;i<= 18 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 22 ;i<= 37 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 41 ;i<= 60 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 21 ;i<= 38 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 42 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 20 ][i]= 0 ; }

//baris 21
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 20 ;i<= 38 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 39 ;i<= 58 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 59 ;i<= 60 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 19 ;i<= 39 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 40 ;i<= 56 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 4 ;i<= 17 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 18 ;i<= 41 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 48 ;i<= 60 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 12 ;i<= 60 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 60 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 60 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 60 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 13 ;i<= 14 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 15 ;i<= 25 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 27 ;i<= 33 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 34 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 45 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 48 ;i<= 60 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 15 ;i<= 22 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 49 ;i<= 60 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 11 ;i<= 13 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 14 ;i<= 20 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 21 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 51 ;i<= 60 ;i++) {
wajah[ 30 ][i]= 1 ; }

}

dataset::Senang2 ()
{
   baris = 33 ;
   kolom = 63 ;

//baris 0
for (byte i= 0 ;i<= 44 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 61 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 2 ;i<= 18 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 19 ;i<= 40 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 41 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 61 ;i<= 62 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 22 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 57 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 58 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 61 ;i<= 62 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 5 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 35 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 36 ;i<= 62 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 9 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 33 ;i<= 52 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 60 ;i<= 62 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 10 ;i<= 47 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 48 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 62 ;i<= 62 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 11 ;i<= 45 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 46 ;i<= 61 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 62 ;i<= 62 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 12 ;i<= 45 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 46 ;i<= 61 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 62 ;i<= 62 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 12 ;i<= 46 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 47 ;i<= 62 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 9 ;i<= 11 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 12 ;i<= 47 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 48 ;i<= 62 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 1 ;i<= 5 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 6 ;i<= 13 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 14 ;i<= 45 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 46 ;i<= 53 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 56 ;i<= 62 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 7 ;i<= 53 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 55 ;i<= 56 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 57 ;i<= 62 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 33 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 58 ;i<= 62 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 28 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 34 ;i<= 57 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 58 ;i<= 62 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 10 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 58 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 59 ;i<= 62 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 10 ;i<= 27 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 35 ;i<= 44 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 47 ;i<= 58 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 59 ;i<= 62 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 1 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 6 ;i<= 10 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 11 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 35 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 36 ;i<= 54 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 55 ;i<= 62 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 4 ;i<= 8 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 9 ;i<= 9 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 12 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 55 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 56 ;i<= 62 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 1 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 44 ;i<= 54 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 55 ;i<= 62 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 8 ;i<= 16 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 62 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 62 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 24 ;i<= 40 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 44 ;i<= 62 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 23 ;i<= 40 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 45 ;i<= 59 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 60 ;i<= 62 ;i++) {
wajah[ 22 ][i]= 0 ; }

//baris 23
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 22 ;i<= 41 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 42 ;i<= 59 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 60 ;i<= 62 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 20 ;i<= 42 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 43 ;i<= 55 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 56 ;i<= 62 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 44 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 49 ;i<= 62 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 62 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 62 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 17 ;i<= 62 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 15 ;i<= 16 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 17 ;i<= 35 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 62 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 14 ;i<= 16 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 17 ;i<= 24 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 25 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 62 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 13 ;i<= 15 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 16 ;i<= 22 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 23 ;i<= 45 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 48 ;i<= 50 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 12 ;i<= 15 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 16 ;i<= 17 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 18 ;i<= 45 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 52 ;i<= 62 ;i++) {
wajah[ 32 ][i]= 1 ; }

}

dataset::Senang3 ()
{
   baris = 34 ;
   kolom = 64 ;

//baris 0
for (byte i= 0 ;i<= 38 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 39 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 7 ;i<= 16 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 17 ;i<= 37 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 42 ;i<= 53 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 1 ;i<= 21 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 22 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 46 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 52 ;i<= 62 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 29 ;i<= 43 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 48 ;i<= 63 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 28 ;i<= 45 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 46 ;i<= 63 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 14 ;i<= 15 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 16 ;i<= 24 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 45 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 46 ;i<= 63 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 3 ;i<= 9 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 14 ;i<= 15 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 16 ;i<= 25 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 27 ;i<= 45 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 46 ;i<= 63 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 12 ;i<= 45 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 46 ;i<= 63 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 13 ;i<= 34 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 36 ;i<= 45 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 46 ;i<= 54 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 11 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 14 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 5 ;i<= 10 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 11 ;i<= 28 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 32 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 1 ;i<= 1 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 2 ;i<= 6 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 7 ;i<= 27 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 33 ;i<= 45 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 48 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 1 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 4 ;i<= 27 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 33 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 49 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 1 ;i<= 1 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 11 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 27 ;i<= 33 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 34 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 10 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 11 ;i<= 26 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 27 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 35 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 12 ;i<= 25 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 26 ;i<= 35 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 42 ;i<= 55 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 4 ;i<= 12 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 13 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 25 ;i<= 35 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 40 ;i<= 46 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 3 ;i<= 18 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 25 ;i<= 36 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 41 ;i<= 63 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 3 ;i<= 16 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 24 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 19 ][i]= 0 ; }

//baris 20
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 23 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 55 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 22 ;i<= 40 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 41 ;i<= 60 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 61 ;i<= 63 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 21 ;i<= 41 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 42 ;i<= 54 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 16 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 20 ;i<= 43 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 47 ;i<= 63 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 10 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 63 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 13 ;i<= 63 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 63 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 34 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 37 ;i<= 63 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 31 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 32 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 63 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 24 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 13 ;i<= 14 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 15 ;i<= 21 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 22 ;i<= 45 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 15 ;i<= 20 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 21 ;i<= 44 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 50 ;i<= 52 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 53 ;i<= 63 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 11 ;i<= 14 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 15 ;i<= 17 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 18 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 44 ;i<= 49 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 11 ;i<= 14 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 15 ;i<= 17 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 18 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 50 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 33 ][i]= 1 ; }

}

dataset::Senang4 ()
{
   baris = 38 ;
   kolom = 68 ;

//baris 0
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 2 ;i<= 67 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 2 ;i<= 40 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 41 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 39 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 40 ;i<= 58 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 5 ;i<= 18 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 19 ;i<= 36 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 37 ;i<= 62 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 1 ;i<= 22 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 23 ;i<= 36 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 37 ;i<= 54 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 55 ;i<= 62 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 30 ;i<= 51 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 29 ;i<= 48 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 49 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 7 ;i<= 15 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 17 ;i<= 25 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 29 ;i<= 47 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 48 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 11 ;i<= 25 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 28 ;i<= 48 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 49 ;i<= 66 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 13 ;i<= 36 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 38 ;i<= 48 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 60 ;i<= 66 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 12 ;i<= 36 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 38 ;i<= 48 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 13 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 62 ;i<= 66 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 11 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 62 ;i<= 66 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 1 ;i<= 2 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 3 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 8 ;i<= 29 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 30 ;i<= 32 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 33 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 49 ;i<= 62 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 63 ;i<= 66 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 10 ;i<= 10 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 11 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 34 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 64 ;i<= 66 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 3 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 11 ;i<= 28 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 34 ;i<= 45 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 50 ;i<= 54 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 12 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 35 ;i<= 46 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 47 ;i<= 66 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 12 ;i<= 27 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 28 ;i<= 35 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 36 ;i<= 50 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 51 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 7 ;i<= 13 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 14 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 42 ;i<= 56 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 4 ;i<= 11 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 12 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 41 ;i<= 45 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 46 ;i<= 52 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 53 ;i<= 65 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 3 ;i<= 19 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 6 ;i<= 16 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 17 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 42 ;i<= 64 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 12 ;i<= 13 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 24 ;i<= 39 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 44 ;i<= 60 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 61 ;i<= 63 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 40 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 41 ;i<= 61 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 62 ;i<= 67 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 22 ;i<= 41 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 42 ;i<= 58 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 17 ;i<= 20 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 21 ;i<= 42 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 43 ;i<= 50 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 51 ;i<= 67 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 11 ;i<= 19 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 20 ;i<= 44 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 16 ;i<= 67 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 33 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 38 ;i<= 67 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 31 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 32 ;i<= 40 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 41 ;i<= 67 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 14 ;i<= 14 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 15 ;i<= 23 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 24 ;i<= 44 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 52 ;i<= 67 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 13 ;i<= 14 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 15 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 22 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 50 ;i<= 52 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 53 ;i<= 67 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 20 ;i<= 45 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 54 ;i<= 67 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 11 ;i<= 14 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 19 ;i<= 44 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 45 ;i<= 50 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 54 ;i<= 67 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 10 ;i<= 14 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 19 ;i<= 43 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 52 ;i<= 54 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 55 ;i<= 67 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 9 ;i<= 13 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 14 ;i<= 20 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 22 ;i<= 28 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 34 ;i<= 51 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 52 ;i<= 55 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 56 ;i<= 67 ;i++) {
wajah[ 37 ][i]= 1 ; }

}

dataset::Senang5 ()
{
   baris = 39 ;
   kolom = 69 ;

//baris 0
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 2 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 2 ;i<= 48 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 49 ;i<= 61 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 3 ;i<= 19 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 20 ;i<= 43 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 1 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 40 ;i<= 62 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 64 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 28 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 38 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 38 ;i<= 68 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 31 ;i<= 33 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 38 ;i<= 58 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 59 ;i<= 66 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 12 ;i<= 53 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 54 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 10 ;i<= 51 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 9 ;i<= 54 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 4 ;i<= 6 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 7 ;i<= 54 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 58 ;i<= 64 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 5 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 64 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 14 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 13 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 14 ;i<= 32 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 9 ;i<= 13 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 14 ;i<= 31 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 32 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 14 ;i<= 31 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 60 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 2 ;i<= 30 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 31 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 61 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 3 ;i<= 30 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 31 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 60 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 4 ;i<= 29 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 30 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 44 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 46 ;i<= 57 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 9 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 40 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 50 ;i<= 54 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 55 ;i<= 68 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 29 ;i<= 40 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 41 ;i<= 45 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 28 ;i<= 41 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 23 ][i]= 0 ; }

//baris 24
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 27 ;i<= 42 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 47 ;i<= 65 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 58 ;i<= 65 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 1 ;i<= 19 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 25 ;i<= 44 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 24 ;i<= 45 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 46 ;i<= 59 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 8 ;i<= 22 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 23 ;i<= 46 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 47 ;i<= 53 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 54 ;i<= 68 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 21 ;i<= 48 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 51 ;i<= 68 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 21 ;i<= 48 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 51 ;i<= 68 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 20 ;i<= 49 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 52 ;i<= 68 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 20 ;i<= 49 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 50 ;i<= 52 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 53 ;i<= 68 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 16 ;i<= 19 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 20 ;i<= 37 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 49 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 54 ;i<= 68 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 20 ;i<= 28 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 34 ;i<= 45 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 50 ;i<= 55 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 56 ;i<= 68 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 13 ;i<= 20 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 21 ;i<= 25 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 26 ;i<= 49 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 51 ;i<= 56 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 57 ;i<= 68 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 12 ;i<= 18 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 21 ;i<= 48 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 11 ;i<= 17 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 22 ;i<= 47 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 38 ][i]= 1 ; }
for (byte i= 10 ;i<= 16 ;i++) {
wajah[ 38 ][i]= 0 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 38 ][i]= 1 ; }
for (byte i= 22 ;i<= 47 ;i++) {
wajah[ 38 ][i]= 0 ; }
for (byte i= 48 ;i<= 52 ;i++) {
wajah[ 38 ][i]= 1 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 38 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 38 ][i]= 1 ; }

}

dataset::Senang6 ()
{
   baris = 37 ;
   kolom = 67 ;

//baris 0
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 8 ;i<= 66 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 6 ;i<= 19 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 20 ;i<= 50 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 51 ;i<= 54 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 55 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 59 ;i<= 66 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 2 ;i<= 24 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 25 ;i<= 43 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 64 ;i<= 66 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 1 ;i<= 28 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 29 ;i<= 42 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 31 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 32 ;i<= 39 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 40 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 36 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 40 ;i<= 66 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 15 ;i<= 33 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 34 ;i<= 34 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 41 ;i<= 59 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 60 ;i<= 62 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 63 ;i<= 66 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 2 ;i<= 14 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 15 ;i<= 55 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 56 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 1 ;i<= 8 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 9 ;i<= 52 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 53 ;i<= 66 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 7 ;i<= 53 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 54 ;i<= 66 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 3 ;i<= 4 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 5 ;i<= 55 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 58 ;i<= 64 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 12 ;i<= 15 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 16 ;i<= 66 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 16 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 16 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 39 ;i<= 66 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 2 ;i<= 10 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 11 ;i<= 15 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 16 ;i<= 33 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 34 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 39 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 4 ;i<= 8 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 9 ;i<= 10 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 11 ;i<= 13 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 14 ;i<= 14 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 15 ;i<= 33 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 34 ;i<= 39 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 40 ;i<= 61 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 62 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 5 ;i<= 32 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 33 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 41 ;i<= 60 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 6 ;i<= 31 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 32 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 62 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 63 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 11 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 32 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 60 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 12 ;i<= 19 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 20 ;i<= 26 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 31 ;i<= 41 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 50 ;i<= 56 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 57 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 1 ;i<= 25 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 30 ;i<= 42 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 47 ;i<= 66 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 1 ;i<= 25 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 29 ;i<= 43 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 48 ;i<= 66 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 2 ;i<= 23 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 49 ;i<= 66 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 4 ;i<= 22 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 27 ;i<= 45 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 46 ;i<= 51 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 25 ][i]= 0 ; }

//baris 26
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 2 ;i<= 25 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 26 ;i<= 46 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 47 ;i<= 66 ;i++) {
wajah[ 26 ][i]= 0 ; }

//baris 27
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 10 ;i<= 24 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 25 ;i<= 46 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 47 ;i<= 64 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 24 ;i<= 48 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 49 ;i<= 56 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 57 ;i<= 66 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 49 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 50 ;i<= 52 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 53 ;i<= 66 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 22 ;i<= 50 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 51 ;i<= 51 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 52 ;i<= 66 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 22 ;i<= 51 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 53 ;i<= 66 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 22 ;i<= 51 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 54 ;i<= 66 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 22 ;i<= 39 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 40 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 51 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 52 ;i<= 54 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 55 ;i<= 66 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 16 ;i<= 20 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 23 ;i<= 28 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 29 ;i<= 47 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 52 ;i<= 56 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 57 ;i<= 66 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 14 ;i<= 20 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 26 ;i<= 50 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 53 ;i<= 57 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 58 ;i<= 66 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 13 ;i<= 19 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 23 ;i<= 49 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 50 ;i<= 52 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 53 ;i<= 58 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 59 ;i<= 66 ;i++) {
wajah[ 36 ][i]= 1 ; }

}

dataset::Senang7 ()
{
   baris = 35 ;
   kolom = 65 ;

//baris 0
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 3 ;i<= 19 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 20 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 24 ;i<= 43 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 44 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 27 ;i<= 40 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 41 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 61 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 29 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 38 ;i<= 61 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 34 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 62 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 2 ;i<= 12 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 13 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 39 ;i<= 64 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 10 ;i<= 56 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 57 ;i<= 62 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 6 ;i<= 50 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 49 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 50 ;i<= 64 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 60 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 61 ;i<= 64 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 60 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 61 ;i<= 64 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 9 ;i<= 10 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 11 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 11 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 12 ;i<= 31 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 55 ;i<= 61 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 31 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 55 ;i<= 62 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 2 ;i<= 10 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 11 ;i<= 11 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 12 ;i<= 30 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 52 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 60 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 29 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 51 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 54 ;i<= 56 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 57 ;i<= 64 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 4 ;i<= 29 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 58 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 7 ;i<= 19 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 59 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 60 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 10 ;i<= 16 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 17 ;i<= 23 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 46 ;i<= 56 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 57 ;i<= 64 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 49 ;i<= 53 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 54 ;i<= 64 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 27 ;i<= 40 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 45 ;i<= 64 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 26 ;i<= 41 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 46 ;i<= 64 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 7 ;i<= 19 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 25 ;i<= 42 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 47 ;i<= 64 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 2 ;i<= 23 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 24 ;i<= 43 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 11 ;i<= 21 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 22 ;i<= 43 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 44 ;i<= 62 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 44 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 45 ;i<= 58 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 47 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 49 ;i<= 64 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 48 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 50 ;i<= 64 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 18 ;i<= 48 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 19 ;i<= 30 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 38 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 14 ;i<= 17 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 18 ;i<= 18 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 20 ;i<= 25 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 26 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 49 ;i<= 52 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 53 ;i<= 64 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 13 ;i<= 17 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 24 ;i<= 53 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 54 ;i<= 64 ;i++) {
wajah[ 34 ][i]= 1 ; }

}

dataset::Senang8 ()
{
   baris = 32 ;
   kolom = 62 ;

//baris 0
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 27 ;i<= 44 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 45 ;i<= 51 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 28 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 40 ;i<= 57 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 30 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 31 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 59 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 1 ;i<= 12 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 13 ;i<= 33 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 36 ;i<= 60 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 12 ;i<= 34 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 61 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 1 ;i<= 1 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 3 ;i<= 7 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 8 ;i<= 57 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 51 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 48 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 49 ;i<= 61 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 51 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 11 ;i<= 11 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 12 ;i<= 56 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 9 ;i<= 10 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 11 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 11 ;i<= 59 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 11 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 2 ;i<= 5 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 6 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 31 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 60 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 30 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 52 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 54 ;i<= 60 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 4 ;i<= 30 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 5 ;i<= 29 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 50 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 53 ;i<= 56 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 8 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 56 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 11 ;i<= 15 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 16 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 57 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 45 ;i<= 55 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 40 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 48 ;i<= 53 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 54 ;i<= 61 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 3 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 41 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 45 ;i<= 61 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 41 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 46 ;i<= 61 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 7 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 42 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 47 ;i<= 61 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 22 ;i<= 43 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 44 ;i<= 61 ;i++) {
wajah[ 24 ][i]= 0 ; }

//baris 25
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 21 ;i<= 44 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 45 ;i<= 61 ;i++) {
wajah[ 25 ][i]= 0 ; }

//baris 26
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 20 ;i<= 45 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 46 ;i<= 57 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 18 ;i<= 18 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 19 ;i<= 46 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 50 ;i<= 61 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 17 ;i<= 18 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 19 ;i<= 47 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 49 ;i<= 61 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 20 ;i<= 61 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 20 ;i<= 30 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 33 ;i<= 38 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 48 ;i<= 50 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 51 ;i<= 61 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 12 ;i<= 20 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 21 ;i<= 26 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 27 ;i<= 44 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 48 ;i<= 50 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 51 ;i<= 61 ;i++) {
wajah[ 31 ][i]= 1 ; }

}

dataset::Senang9 ()
{
   baris = 30 ;
   kolom = 60 ;

//baris 0
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 27 ;i<= 46 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 47 ;i<= 47 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 48 ;i<= 56 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 2 ;i<= 6 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 7 ;i<= 28 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 39 ;i<= 52 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 53 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 30 ;i<= 32 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 33 ;i<= 36 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 37 ;i<= 55 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 12 ;i<= 32 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 40 ;i<= 59 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 1 ;i<= 6 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 7 ;i<= 59 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 51 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 52 ;i<= 56 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 56 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 47 ;i<= 57 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 8 ;i<= 9 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 10 ;i<= 50 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 51 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 7 ;i<= 10 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 11 ;i<= 49 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 54 ;i<= 57 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 2 ;i<= 6 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 7 ;i<= 10 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 11 ;i<= 55 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 1 ;i<= 5 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 6 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 11 ;i<= 30 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 31 ;i<= 33 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 34 ;i<= 56 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 57 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 3 ;i<= 29 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 35 ;i<= 56 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 4 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 6 ;i<= 28 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 55 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 9 ;i<= 17 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 22 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 54 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 52 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 52 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 2 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 51 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 52 ;i<= 59 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 7 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 50 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 5 ;i<= 23 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 24 ;i<= 39 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 43 ;i<= 59 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 11 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 23 ;i<= 40 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 44 ;i<= 59 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 41 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 47 ;i<= 59 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 18 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 41 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 42 ;i<= 54 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 17 ;i<= 18 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 19 ;i<= 43 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 44 ;i<= 57 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 16 ;i<= 17 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 18 ;i<= 44 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 45 ;i<= 55 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 14 ;i<= 18 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 19 ;i<= 45 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 46 ;i<= 46 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 47 ;i<= 59 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 13 ;i<= 18 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 19 ;i<= 59 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 12 ;i<= 18 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 19 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 59 ;i++) {
wajah[ 29 ][i]= 1 ; }

}

dataset::Senang10 ()
{
   baris = 36 ;
   kolom = 66 ;

//baris 0
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 2 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 63 ;i<= 65 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 1 ;i<= 14 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 15 ;i<= 17 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 18 ;i<= 62 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 63 ;i<= 65 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 9 ;i<= 20 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 21 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 42 ;i<= 50 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 64 ;i<= 65 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 40 ;i<= 50 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 64 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 1 ;i<= 2 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 3 ;i<= 6 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 37 ;i<= 50 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 51 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 3 ;i<= 14 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 36 ;i<= 41 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 43 ;i<= 50 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 51 ;i<= 65 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 16 ;i<= 23 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 49 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 16 ;i<= 22 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 27 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 64 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 17 ;i<= 22 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 47 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 17 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 17 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 18 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 34 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 44 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 30 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 31 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 47 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 48 ;i<= 65 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 7 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 55 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 56 ;i<= 58 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 60 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 5 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 41 ;i<= 58 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 59 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 49 ;i<= 60 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 49 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 62 ;i<= 65 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 16 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 48 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 13 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 45 ;i<= 52 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 53 ;i<= 55 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 57 ;i<= 65 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 8 ;i<= 18 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 27 ;i<= 39 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 47 ;i<= 57 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 58 ;i<= 65 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 26 ;i<= 40 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 25 ;i<= 41 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 47 ;i<= 62 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 18 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 48 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 49 ;i<= 58 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 59 ;i<= 65 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 20 ;i<= 65 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 36 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 41 ;i<= 65 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 28 ;i<= 42 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 43 ;i<= 65 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 24 ;i<= 46 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 47 ;i<= 65 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 20 ;i<= 46 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 47 ;i<= 65 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 14 ;i<= 15 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 16 ;i<= 20 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 21 ;i<= 46 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 51 ;i<= 51 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 13 ;i<= 15 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 16 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 31 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 53 ;i<= 65 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 12 ;i<= 15 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 16 ;i<= 65 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 15 ;i<= 65 ;i++) {
wajah[ 35 ][i]= 1 ; }

}


// Netral

dataset::Netral1 ()
{
   baris = 39 ;
   kolom = 69 ;

//baris 0
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 1 ;i<= 63 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 7 ;i<= 20 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 21 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 43 ;i<= 55 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 6 ;i<= 23 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 42 ;i<= 49 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 50 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 1 ;i<= 2 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 3 ;i<= 12 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 13 ;i<= 26 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 27 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 39 ;i<= 50 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 2 ;i<= 15 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 38 ;i<= 50 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 51 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 4 ;i<= 15 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 43 ;i<= 49 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 50 ;i<= 68 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 1 ;i<= 16 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 17 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 48 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 16 ;i<= 23 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 17 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 47 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 17 ;i<= 26 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 40 ;i<= 47 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 48 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 6 ;i<= 8 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 9 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 27 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 54 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 55 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 4 ;i<= 6 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 7 ;i<= 25 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 41 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 25 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 41 ;i<= 47 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 49 ;i<= 58 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 59 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 12 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 13 ;i<= 24 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 23 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 38 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 6 ;i<= 13 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 14 ;i<= 23 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 49 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 52 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 0 ; }

//baris 19
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 0 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 45 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 45 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 46 ;i<= 53 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 22 ;i<= 68 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 3 ;i<= 9 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 10 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 18 ;i<= 68 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 36 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 68 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 27 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 68 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 26 ;i<= 44 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 25 ;i<= 44 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 33 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 47 ;i<= 68 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 27 ;i<= 42 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 38 ][i]= 1 ; }

}

dataset::Netral2 ()
{
   baris = 38 ;
   kolom = 68 ;

//baris 0
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 1 ;i<= 63 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 7 ;i<= 21 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 22 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 43 ;i<= 54 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 6 ;i<= 24 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 25 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 42 ;i<= 49 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 50 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 65 ;i<= 67 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 3 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 38 ;i<= 51 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 2 ;i<= 15 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 38 ;i<= 50 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 51 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 4 ;i<= 15 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 43 ;i<= 49 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 50 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 1 ;i<= 16 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 17 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 48 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 38 ;i<= 43 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 18 ;i<= 24 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 40 ;i<= 46 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 10 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 54 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 55 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 4 ;i<= 6 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 7 ;i<= 25 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 41 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 58 ;i<= 67 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 42 ;i<= 58 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 12 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 13 ;i<= 24 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 60 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 24 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 38 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 49 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 7 ;i<= 13 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 14 ;i<= 23 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 39 ;i<= 46 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 62 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 49 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 13 ;i<= 18 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 19 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 53 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 46 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 0 ; }

//baris 21
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 47 ;i<= 64 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 46 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 47 ;i<= 61 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 62 ;i<= 67 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 67 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 17 ;i<= 67 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 39 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 41 ;i<= 67 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 29 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 35 ;i<= 42 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 43 ;i<= 67 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 27 ;i<= 44 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 45 ;i<= 67 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 26 ;i<= 44 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 45 ;i<= 67 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 25 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 37 ][i]= 1 ; }

}

dataset::Netral3 ()
{
   baris = 40 ;
   kolom = 70 ;

//baris 0
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 2 ;i<= 64 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 65 ;i<= 69 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 8 ;i<= 21 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 22 ;i<= 43 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 44 ;i<= 55 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 56 ;i<= 64 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 65 ;i<= 69 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 7 ;i<= 24 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 25 ;i<= 42 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 43 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 6 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 40 ;i<= 52 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 53 ;i<= 55 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 57 ;i<= 66 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 1 ;i<= 2 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 3 ;i<= 16 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 17 ;i<= 28 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 34 ;i<= 34 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 39 ;i<= 52 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 53 ;i<= 69 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 6 ;i<= 16 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 17 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 44 ;i<= 50 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 51 ;i<= 69 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 3 ;i<= 17 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 18 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 49 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 19 ;i<= 24 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 30 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 39 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 19 ;i<= 24 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 30 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 47 ;i<= 69 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 18 ;i<= 24 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 48 ;i<= 69 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 19 ;i<= 25 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 29 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 41 ;i<= 47 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 48 ;i<= 69 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 13 ;i<= 26 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 37 ;i<= 52 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 53 ;i<= 69 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 8 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 33 ;i<= 36 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 42 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 69 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 2 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 6 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 12 ;i<= 13 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 14 ;i<= 31 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 38 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 60 ;i<= 69 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 10 ;i<= 14 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 15 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 51 ;i<= 60 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 61 ;i<= 69 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 2 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 14 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 15 ;i<= 25 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 31 ;i<= 38 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 39 ;i<= 48 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 63 ;i<= 69 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 2 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 26 ;i<= 30 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 31 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 40 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 50 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 63 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 30 ;i<= 39 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 52 ;i<= 54 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 55 ;i<= 56 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 59 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 16 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 21 ;i<= 25 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 29 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 47 ;i<= 55 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 56 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 18 ][i]= 0 ; }

//baris 19
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 15 ;i<= 16 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 17 ;i<= 24 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 29 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 19 ][i]= 0 ; }

//baris 20
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 28 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 27 ;i<= 45 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 48 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 26 ;i<= 47 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 48 ;i<= 63 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 69 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 1 ;i<= 5 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 8 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 18 ;i<= 69 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 30 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 33 ;i<= 36 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 37 ;i<= 42 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 28 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 29 ;i<= 44 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 45 ;i<= 69 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 45 ;i<= 69 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 27 ;i<= 45 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 26 ;i<= 45 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 35 ;i<= 39 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 47 ;i<= 47 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 48 ;i<= 69 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 29 ;i<= 44 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 48 ;i<= 69 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 47 ;i<= 69 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 38 ][i]= 1 ; }

//baris 39
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 39 ][i]= 1 ; }

}

dataset::Netral4 ()
{
   baris = 39 ;
   kolom = 69 ;

//baris 0
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 6 ;i<= 21 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 22 ;i<= 40 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 41 ;i<= 53 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 54 ;i<= 65 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 3 ;i<= 24 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 42 ;i<= 53 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 54 ;i<= 66 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 1 ;i<= 2 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 3 ;i<= 3 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 8 ;i<= 20 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 21 ;i<= 26 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 37 ;i<= 43 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 44 ;i<= 52 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 53 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 9 ;i<= 17 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 18 ;i<= 25 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 30 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 49 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 5 ;i<= 18 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 19 ;i<= 26 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 27 ;i<= 29 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 30 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 39 ;i<= 46 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 47 ;i<= 47 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 48 ;i<= 68 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 1 ;i<= 18 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 19 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 39 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 19 ;i<= 26 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 17 ;i<= 25 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 39 ;i<= 43 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 18 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 39 ;i<= 46 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 17 ;i<= 31 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 35 ;i<= 53 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 54 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 10 ;i<= 30 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 31 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 35 ;i<= 56 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 8 ;i<= 29 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 41 ;i<= 46 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 4 ;i<= 8 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 37 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 50 ;i<= 54 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 38 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 54 ;i<= 56 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 59 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 3 ;i<= 5 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 6 ;i<= 13 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 14 ;i<= 27 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 45 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 55 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 46 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 54 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 12 ;i<= 16 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 17 ;i<= 22 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 27 ;i<= 39 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 45 ;i<= 62 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 25 ;i<= 45 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 46 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 22 ;i<= 68 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 20 ;i<= 68 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 15 ;i<= 68 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 36 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 40 ;i<= 68 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 32 ;i<= 41 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 26 ;i<= 42 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 25 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 68 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 24 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 68 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 32 ;i<= 41 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 27 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 27 ;i<= 41 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 23 ;i<= 24 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 25 ;i<= 68 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 38 ][i]= 1 ; }

}

dataset::Netral5 ()
{
   baris = 38 ;
   kolom = 68 ;

//baris 0
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 4 ;i<= 41 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 42 ;i<= 60 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 3 ;i<= 8 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 9 ;i<= 19 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 20 ;i<= 39 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 43 ;i<= 50 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 4 ;i<= 22 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 23 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 54 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 26 ;i<= 31 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 38 ;i<= 45 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 37 ;i<= 46 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 47 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 11 ;i<= 11 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 12 ;i<= 26 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 30 ;i<= 45 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 5 ;i<= 15 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 16 ;i<= 17 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 20 ;i<= 26 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 28 ;i<= 45 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 2 ;i<= 16 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 21 ;i<= 26 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 28 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 22 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 38 ;i<= 47 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 48 ;i<= 57 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 60 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 16 ;i<= 19 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 22 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 59 ;i<= 60 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 16 ;i<= 31 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 35 ;i<= 58 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 59 ;i<= 60 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 62 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 12 ;i<= 24 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 26 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 31 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 48 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 51 ;i<= 60 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 11 ;i<= 12 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 13 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 40 ;i<= 47 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 48 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 10 ;i<= 12 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 13 ;i<= 29 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 40 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 7 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 9 ;i<= 13 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 14 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 60 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 13 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 14 ;i<= 28 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 45 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 8 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 18 ;i<= 26 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 48 ;i<= 52 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 53 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 66 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 0 ; }

//baris 19
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 25 ;i<= 43 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 44 ;i<= 57 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 58 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 23 ;i<= 67 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 67 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 67 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 16 ;i<= 67 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 9 ;i<= 67 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 33 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 38 ;i<= 67 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 28 ;i<= 30 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 31 ;i<= 39 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 25 ;i<= 40 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 41 ;i<= 67 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 42 ;i<= 67 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 42 ;i<= 67 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 23 ;i<= 39 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 45 ;i<= 67 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 26 ;i<= 41 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 45 ;i<= 67 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 21 ;i<= 25 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 26 ;i<= 40 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 25 ;i<= 67 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 37 ][i]= 1 ; }

}

dataset::Netral6 ()
{
   baris = 40 ;
   kolom = 70 ;

//baris 0
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 7 ;i<= 48 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 49 ;i<= 55 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 56 ;i<= 69 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 6 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 43 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 60 ;i<= 69 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 5 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 46 ;i<= 54 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 6 ;i<= 21 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 22 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 39 ;i<= 47 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 48 ;i<= 55 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 25 ;i<= 37 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 38 ;i<= 48 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 49 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 48 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 49 ;i<= 66 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 31 ;i<= 48 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 49 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 9 ;i<= 14 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 31 ;i<= 47 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 48 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 5 ;i<= 16 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 17 ;i<= 20 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 28 ;i<= 47 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 48 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 2 ;i<= 17 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 38 ;i<= 48 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 49 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 15 ;i<= 21 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 22 ;i<= 27 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 40 ;i<= 48 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 49 ;i<= 52 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 53 ;i<= 56 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 18 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 43 ;i<= 62 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 63 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 17 ;i<= 31 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 43 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 11 ;i<= 14 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 15 ;i<= 15 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 16 ;i<= 24 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 26 ;i<= 31 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 65 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 12 ;i<= 15 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 16 ;i<= 24 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 14 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 15 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 48 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 53 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 9 ;i<= 15 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 16 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 54 ;i<= 56 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 9 ;i<= 15 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 16 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 49 ;i<= 55 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 58 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 9 ;i<= 17 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 18 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 41 ;i<= 46 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 47 ;i<= 53 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 54 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 5 ;i<= 17 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 49 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 52 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 15 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 38 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 26 ;i<= 40 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 45 ;i<= 58 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 59 ;i<= 62 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 63 ;i<= 69 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 25 ;i<= 44 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 45 ;i<= 56 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 57 ;i<= 69 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 23 ;i<= 69 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 21 ;i<= 69 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 19 ;i<= 69 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 2 ;i<= 7 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 15 ;i<= 69 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 33 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 38 ;i<= 69 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 31 ;i<= 39 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 40 ;i<= 69 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 24 ;i<= 40 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 41 ;i<= 69 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 42 ;i<= 69 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 23 ;i<= 42 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 22 ;i<= 27 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 30 ;i<= 39 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 45 ;i<= 69 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 45 ;i<= 69 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 37 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 37 ][i]= 0 ; }
for (byte i= 44 ;i<= 69 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 38 ][i]= 1 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 38 ][i]= 0 ; }
for (byte i= 24 ;i<= 69 ;i++) {
wajah[ 38 ][i]= 1 ; }

//baris 39
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 39 ][i]= 1 ; }

}

dataset::Netral7 ()
{
   baris = 40 ;
   kolom = 70 ;

//baris 0
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 3 ;i<= 4 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 5 ;i<= 19 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 20 ;i<= 43 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 44 ;i<= 56 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 57 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 4 ;i<= 22 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 23 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 43 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 61 ;i<= 69 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 2 ;i<= 25 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 40 ;i<= 58 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 59 ;i<= 69 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 1 ;i<= 10 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 11 ;i<= 15 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 39 ;i<= 46 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 47 ;i<= 60 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 61 ;i<= 69 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 14 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 32 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 4 ;i<= 18 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 19 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 32 ;i<= 44 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 50 ;i<= 66 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 19 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 31 ;i<= 45 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 20 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 30 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 9 ;i<= 9 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 16 ;i<= 17 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 18 ;i<= 18 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 19 ;i<= 50 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 51 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 15 ;i<= 49 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 50 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 60 ;i<= 69 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 10 ;i<= 62 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 63 ;i<= 69 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 15 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 63 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 10 ;i<= 13 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 14 ;i<= 31 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 48 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 9 ;i<= 13 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 14 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 2 ;i<= 5 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 15 ;i<= 30 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 47 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 56 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 57 ;i<= 57 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 58 ;i<= 64 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 2 ;i<= 5 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 6 ;i<= 14 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 15 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 38 ;i<= 47 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 18 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 46 ;i<= 46 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 47 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 58 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 15 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 45 ;i<= 52 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 53 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 48 ;i<= 53 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 54 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 18 ][i]= 0 ; }

//baris 19
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 27 ;i<= 39 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 42 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 45 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 44 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 50 ;i<= 62 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 63 ;i<= 65 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 22 ;i<= 47 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 48 ;i<= 58 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 59 ;i<= 69 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 1 ;i<= 11 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 12 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 69 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 35 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 40 ;i<= 69 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 27 ;i<= 40 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 41 ;i<= 69 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 25 ;i<= 41 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 42 ;i<= 69 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 23 ;i<= 43 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 44 ;i<= 69 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 28 ;i<= 30 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 31 ;i<= 41 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 27 ;i<= 38 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 26 ;i<= 40 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 45 ;i<= 69 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 38 ][i]= 1 ; }

//baris 39
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 39 ][i]= 1 ; }

}

dataset::Netral8 ()
{
   baris = 35 ;
   kolom = 65 ;

//baris 0
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 7 ;i<= 10 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 11 ;i<= 26 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 27 ;i<= 38 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 39 ;i<= 56 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 13 ;i<= 27 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 28 ;i<= 30 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 36 ;i<= 50 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 51 ;i<= 51 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 52 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 59 ;i<= 61 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 14 ;i<= 18 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 20 ;i<= 47 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 49 ;i<= 56 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 57 ;i<= 62 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 21 ;i<= 46 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 47 ;i<= 48 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 12 ;i<= 46 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 47 ;i<= 60 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 61 ;i<= 64 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 4 ;i<= 5 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 6 ;i<= 13 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 14 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 46 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 1 ;i<= 4 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 7 ;i<= 44 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 45 ;i<= 62 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 1 ;i<= 47 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 48 ;i<= 62 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 8 ;i<= 9 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 10 ;i<= 47 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 48 ;i<= 62 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 10 ;i<= 29 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 30 ;i<= 33 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 34 ;i<= 52 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 10 ;i<= 29 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 30 ;i<= 33 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 34 ;i<= 58 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 5 ;i<= 10 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 11 ;i<= 22 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 57 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 22 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 44 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 46 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 10 ;i<= 10 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 11 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 20 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 28 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 44 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 46 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 53 ;i<= 57 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 58 ;i<= 64 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 9 ;i<= 18 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 44 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 53 ;i<= 58 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 11 ;i<= 14 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 15 ;i<= 16 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 18 ;i<= 22 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 46 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 53 ;i<= 58 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 43 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 54 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 25 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 45 ;i<= 51 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 24 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 23 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 1 ;i<= 18 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 64 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 43 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 48 ;i<= 62 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 47 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 48 ;i<= 59 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 60 ;i<= 64 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 64 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 64 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 64 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 64 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 40 ;i<= 64 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 25 ;i<= 40 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 41 ;i<= 64 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 24 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 64 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 42 ;i<= 64 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 22 ;i<= 42 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 21 ;i<= 25 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 26 ;i<= 30 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 31 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 44 ;i<= 64 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 25 ;i<= 36 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 37 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 38 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 34 ][i]= 1 ; }

}

dataset::Netral9 ()
{
   baris = 32 ;
   kolom = 62 ;

//baris 0
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 15 ;i<= 16 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 18 ;i<= 56 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 10 ;i<= 16 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 18 ;i<= 57 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 58 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 13 ;i<= 44 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 60 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 1 ;i<= 4 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 8 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 26 ;i<= 50 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 51 ;i<= 58 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 59 ;i<= 61 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 45 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 46 ;i<= 58 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 59 ;i<= 61 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 9 ;i<= 44 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 45 ;i<= 59 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 6 ;i<= 8 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 9 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 38 ;i<= 46 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 47 ;i<= 60 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 10 ;i<= 30 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 32 ;i<= 36 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 38 ;i<= 47 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 48 ;i<= 60 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 4 ;i<= 9 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 10 ;i<= 29 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 30 ;i<= 32 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 33 ;i<= 51 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 54 ;i<= 60 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 11 ;i<= 22 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 34 ;i<= 57 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 14 ;i<= 21 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 35 ;i<= 57 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 10 ;i<= 19 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 43 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 45 ;i<= 50 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 51 ;i<= 51 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 8 ;i<= 18 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 43 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 11 ;i<= 12 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 13 ;i<= 13 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 14 ;i<= 14 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 15 ;i<= 22 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 26 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 42 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 52 ;i<= 56 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 57 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 25 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 43 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 24 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 3 ;i<= 18 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 23 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 50 ;i<= 61 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 4 ;i<= 18 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 22 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 61 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 47 ;i<= 61 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 47 ;i<= 56 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 21 ][i]= 0 ; }

//baris 22
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 27 ;i<= 28 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 38 ;i<= 61 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 39 ;i<= 61 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 23 ;i<= 39 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 40 ;i<= 61 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 22 ;i<= 40 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 41 ;i<= 61 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 21 ;i<= 41 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 20 ;i<= 25 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 29 ;i<= 42 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 25 ;i<= 34 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 35 ;i<= 42 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 31 ][i]= 1 ; }

}

dataset::Netral10 ()
{
   baris = 30 ;
   kolom = 60 ;

//baris 0
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 7 ;i<= 13 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 14 ;i<= 14 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 15 ;i<= 54 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 3 ;i<= 5 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 6 ;i<= 11 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 12 ;i<= 22 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 43 ;i<= 55 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 8 ;i<= 21 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 52 ;i<= 59 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 47 ;i<= 56 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 42 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 43 ;i<= 56 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 8 ;i<= 43 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 44 ;i<= 56 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 3 ;i<= 7 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 8 ;i<= 44 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 45 ;i<= 57 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 3 ;i<= 7 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 8 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 31 ;i<= 46 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 47 ;i<= 57 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 9 ;i<= 21 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 32 ;i<= 51 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 11 ;i<= 20 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 27 ;i<= 32 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 33 ;i<= 54 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 9 ;i<= 19 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 27 ;i<= 33 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 34 ;i<= 55 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 56 ;i<= 58 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 7 ;i<= 17 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 26 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 34 ;i<= 48 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 50 ;i<= 55 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 56 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 13 ;i<= 21 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 25 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 47 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 48 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 50 ;i<= 54 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 25 ;i<= 34 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 50 ;i<= 54 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 24 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 43 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 44 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 23 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 41 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 52 ;i<= 58 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 2 ;i<= 17 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 22 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 49 ;i<= 58 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 18 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 58 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 59 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 59 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 48 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 46 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 47 ;i<= 59 ;i++) {
wajah[ 21 ][i]= 0 ; }

//baris 22
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 24 ;i<= 37 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 38 ;i<= 59 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 23 ;i<= 38 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 39 ;i<= 59 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 21 ;i<= 39 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 40 ;i<= 59 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 20 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 59 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 19 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 59 ;i++) {
wajah[ 29 ][i]= 1 ; }

}


// Antusias

dataset::Antusias1 ()
{
   baris = 37 ;
   kolom = 67 ;

//baris 0
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 39 ;i<= 48 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 49 ;i<= 56 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 57 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 58 ;i<= 60 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 5 ;i<= 12 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 13 ;i<= 25 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 37 ;i<= 46 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 47 ;i<= 57 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 59 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 61 ;i<= 66 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 3 ;i<= 13 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 14 ;i<= 25 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 37 ;i<= 46 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 47 ;i<= 62 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 63 ;i<= 66 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 2 ;i<= 13 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 14 ;i<= 27 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 28 ;i<= 30 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 36 ;i<= 45 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 46 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 16 ;i<= 45 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 46 ;i<= 61 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 4 ;i<= 15 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 16 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 39 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 64 ;i<= 66 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 2 ;i<= 17 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 24 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 38 ;i<= 62 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 24 ;i<= 36 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 39 ;i<= 62 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 18 ;i<= 21 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 24 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 43 ;i<= 62 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 16 ;i<= 29 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 39 ;i<= 53 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 54 ;i<= 65 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 9 ;i<= 29 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 54 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 55 ;i<= 65 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 12 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 31 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 44 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 47 ;i<= 56 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 57 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 4 ;i<= 8 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 13 ;i<= 24 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 35 ;i<= 44 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 54 ;i<= 57 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 58 ;i<= 65 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 23 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 44 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 54 ;i<= 57 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 58 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 12 ;i<= 22 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 44 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 52 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 56 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 22 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 23 ;i<= 24 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 7 ;i<= 17 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 44 ;i<= 50 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 51 ;i<= 64 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 65 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 11 ;i<= 16 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 17 ;i<= 23 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 66 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 27 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 45 ;i<= 62 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 64 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 45 ;i<= 58 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 60 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 25 ;i<= 66 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 22 ;i<= 66 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 1 ;i<= 12 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 13 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 19 ;i<= 66 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 66 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 66 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 66 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 30 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 36 ;i<= 41 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 42 ;i<= 66 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 44 ;i<= 66 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 27 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 66 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 26 ;i<= 44 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 45 ;i<= 66 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 44 ;i<= 66 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 25 ;i<= 29 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 30 ;i<= 66 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 28 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 66 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 27 ;i<= 43 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 45 ;i<= 66 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 66 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 66 ;i++) {
wajah[ 36 ][i]= 1 ; }

}

dataset::Antusias2 ()
{
   baris = 40 ;
   kolom = 70 ;

//baris 0
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 23 ;i<= 38 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 39 ;i<= 50 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 51 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 63 ;i<= 69 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 25 ;i<= 37 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 38 ;i<= 49 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 50 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 8 ;i<= 13 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 14 ;i<= 25 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 50 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 64 ;i<= 69 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 4 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 37 ;i<= 47 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 48 ;i<= 66 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 3 ;i<= 16 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 17 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 41 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 42 ;i<= 43 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 47 ;i<= 64 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 4 ][i]= 0 ; }

//baris 5
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 2 ;i<= 17 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 18 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 39 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 6 ;i<= 17 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 18 ;i<= 34 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 38 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 3 ;i<= 18 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 19 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 38 ;i<= 66 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 25 ;i<= 26 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 19 ;i<= 24 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 25 ;i<= 26 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 27 ;i<= 31 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 34 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 46 ;i<= 66 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 18 ;i<= 25 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 26 ;i<= 26 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 27 ;i<= 29 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 55 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 56 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 12 ;i<= 29 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 46 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 47 ;i<= 47 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 48 ;i<= 56 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 57 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 8 ;i<= 30 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 45 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 48 ;i<= 53 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 59 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 10 ;i<= 12 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 13 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 41 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 46 ;i<= 47 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 48 ;i<= 52 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 3 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 13 ;i<= 23 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 49 ;i<= 52 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 69 ;i<= 69 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 2 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 13 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 14 ;i<= 23 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 38 ;i<= 44 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 51 ;i<= 66 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 67 ;i<= 69 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 2 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 22 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 23 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 49 ;i<= 65 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 66 ;i<= 69 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 6 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 46 ;i<= 52 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 53 ;i<= 65 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 68 ;i<= 69 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 15 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 12 ;i<= 16 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 17 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 65 ;i<= 69 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 45 ;i<= 60 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 61 ;i<= 62 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 63 ;i<= 69 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 45 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 46 ;i<= 55 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 56 ;i<= 69 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 24 ;i<= 69 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 22 ;i<= 69 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 1 ;i<= 13 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 14 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 69 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 8 ;i<= 69 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 37 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 41 ;i<= 69 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 29 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 35 ;i<= 42 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 44 ;i<= 69 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 27 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 69 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 26 ;i<= 43 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 44 ;i<= 69 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 26 ;i<= 30 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 32 ;i<= 42 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 43 ;i<= 69 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 28 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 28 ;i<= 42 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 46 ;i<= 69 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 27 ;i<= 69 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 38 ][i]= 1 ; }

//baris 39
for (byte i= 0 ;i<= 69 ;i++) {
wajah[ 39 ][i]= 1 ; }

}

dataset::Antusias3 ()
{
   baris = 34 ;
   kolom = 64 ;

//baris 0
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 24 ;i<= 34 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 35 ;i<= 55 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 11 ;i<= 24 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 25 ;i<= 33 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 34 ;i<= 54 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 4 ;i<= 12 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 13 ;i<= 25 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 26 ;i<= 32 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 33 ;i<= 54 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 55 ;i<= 62 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 2 ;i<= 11 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 12 ;i<= 27 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 30 ;i<= 46 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 53 ;i<= 55 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 8 ;i<= 44 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 45 ;i<= 53 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 54 ;i<= 56 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 57 ;i<= 63 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 5 ;i<= 26 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 43 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 44 ;i<= 54 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 55 ;i<= 57 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 8 ;i<= 13 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 14 ;i<= 26 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 28 ;i<= 52 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 53 ;i<= 55 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 3 ;i<= 14 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 15 ;i<= 55 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 56 ;i<= 63 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 13 ;i<= 57 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 58 ;i<= 63 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 8 ;i<= 44 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 6 ;i<= 32 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 34 ;i<= 44 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 60 ;i<= 63 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 13 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 31 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 34 ;i<= 44 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 1 ;i<= 1 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 2 ;i<= 4 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 8 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 33 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 34 ;i<= 44 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 49 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 51 ;i<= 63 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 2 ;i<= 2 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 3 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 28 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 34 ;i<= 43 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 7 ;i<= 12 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 13 ;i<= 27 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 28 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 28 ;i<= 35 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 8 ;i<= 10 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 11 ;i<= 26 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 27 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 63 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 3 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 62 ;i<= 62 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 6 ;i<= 18 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 56 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 15 ;i<= 16 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 54 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 55 ;i<= 63 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 25 ;i<= 63 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 24 ;i<= 63 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 63 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 15 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 23 ;i<= 63 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 1 ;i<= 4 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 5 ;i<= 14 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 15 ;i<= 20 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 22 ;i<= 63 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 63 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 63 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 35 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 63 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 26 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 34 ;i<= 41 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 42 ;i<= 63 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 26 ;i<= 42 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 43 ;i<= 63 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 24 ;i<= 43 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 44 ;i<= 63 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 24 ;i<= 44 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 45 ;i<= 63 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 23 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 45 ;i<= 63 ;i++) {
wajah[ 33 ][i]= 1 ; }

}

dataset::Antusias4 ()
{
   baris = 32 ;
   kolom = 62 ;

//baris 0
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 11 ;i<= 24 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 25 ;i<= 33 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 34 ;i<= 49 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 50 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 60 ;i<= 61 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 9 ;i<= 25 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 34 ;i<= 54 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 55 ;i<= 55 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 1 ][i]= 0 ; }

//baris 2
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 2 ;i<= 6 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 8 ;i<= 31 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 33 ;i<= 46 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 50 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 52 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 61 ;i<= 61 ;i++) {
wajah[ 2 ][i]= 0 ; }

//baris 3
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 6 ;i<= 13 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 14 ;i<= 43 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 53 ;i<= 61 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 14 ;i<= 42 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 43 ;i<= 52 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 55 ;i<= 61 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 15 ;i<= 41 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 12 ;i<= 41 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 8 ;i<= 9 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 10 ;i<= 51 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 4 ;i<= 53 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 54 ;i<= 61 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 1 ;i<= 7 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 8 ;i<= 9 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 10 ;i<= 55 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 56 ;i<= 61 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 10 ;i<= 29 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 30 ;i<= 32 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 33 ;i<= 56 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 57 ;i<= 61 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 10 ;i<= 28 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 33 ;i<= 50 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 53 ;i<= 57 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 58 ;i<= 61 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 10 ;i<= 27 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 34 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 53 ;i<= 54 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 55 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 5 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 10 ;i<= 27 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 35 ;i<= 43 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 44 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 50 ;i<= 53 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 55 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 5 ;i<= 11 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 12 ;i<= 20 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 27 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 51 ;i<= 52 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 53 ;i<= 61 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 1 ;i<= 4 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 8 ;i<= 19 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 53 ;i<= 61 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 2 ;i<= 18 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 43 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 6 ;i<= 16 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 61 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 25 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 24 ;i<= 40 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 48 ;i<= 54 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 55 ;i<= 58 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 59 ;i<= 61 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 18 ;i<= 22 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 23 ;i<= 61 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 1 ;i<= 9 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 10 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 22 ;i<= 61 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 4 ;i<= 9 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 10 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 61 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 61 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 34 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 35 ;i<= 39 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 40 ;i<= 61 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 25 ;i<= 41 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 23 ;i<= 43 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 44 ;i<= 61 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 22 ;i<= 43 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 44 ;i<= 61 ;i++) {
wajah[ 31 ][i]= 1 ; }

}

dataset::Antusias5 ()
{
   baris = 30 ;
   kolom = 60 ;

//baris 0
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 6 ;i<= 25 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 26 ;i<= 34 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 35 ;i<= 45 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 46 ;i<= 55 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 4 ;i<= 12 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 13 ;i<= 28 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 31 ;i<= 33 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 34 ;i<= 50 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 51 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 13 ;i<= 16 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 18 ;i<= 55 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 56 ;i<= 56 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 57 ;i<= 58 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 15 ;i<= 50 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 51 ;i<= 56 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 57 ;i<= 59 ;i++) {
wajah[ 3 ][i]= 0 ; }

//baris 4
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 13 ;i<= 13 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 14 ;i<= 43 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 44 ;i<= 49 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 51 ;i<= 59 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 5 ;i<= 42 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 43 ;i<= 51 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 52 ;i<= 52 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 3 ;i<= 41 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 42 ;i<= 51 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 10 ;i<= 45 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 46 ;i<= 53 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 9 ;i<= 51 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 54 ;i<= 55 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 9 ;i<= 52 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 4 ;i<= 9 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 10 ;i<= 28 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 32 ;i<= 42 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 45 ;i<= 54 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 4 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 10 ;i<= 21 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 33 ;i<= 42 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 43 ;i<= 43 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 44 ;i<= 49 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 51 ;i<= 54 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 4 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 21 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 34 ;i<= 42 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 43 ;i<= 43 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 44 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 50 ;i<= 50 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 51 ;i<= 55 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 2 ;i<= 3 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 4 ;i<= 7 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 8 ;i<= 19 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 27 ;i<= 33 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 34 ;i<= 42 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 45 ;i<= 48 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 52 ;i<= 55 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 6 ;i<= 18 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 27 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 42 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 43 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 53 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 54 ;i<= 59 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 7 ;i<= 16 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 26 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 35 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 25 ;i<= 35 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 42 ;i<= 51 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 52 ;i<= 59 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 24 ;i<= 36 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 43 ;i<= 50 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 51 ;i<= 59 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 23 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 41 ;i<= 47 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 49 ;i<= 59 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 19 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 23 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 59 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 22 ;i<= 40 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 59 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 8 ;i<= 13 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 14 ;i<= 42 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 49 ;i<= 59 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 48 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 49 ;i<= 52 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 53 ;i<= 59 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 59 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 33 ;i<= 38 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 39 ;i<= 59 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 23 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 59 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 22 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 59 ;i++) {
wajah[ 29 ][i]= 1 ; }

}

dataset::Antusias6 ()
{
   baris = 39 ;
   kolom = 69 ;

//baris 0
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 24 ;i<= 39 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 40 ;i<= 52 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 53 ;i<= 61 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 62 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 63 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 24 ;i<= 38 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 39 ;i<= 49 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 50 ;i<= 62 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 11 ;i<= 16 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 17 ;i<= 17 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 24 ;i<= 38 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 39 ;i<= 43 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 44 ;i<= 51 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 52 ;i<= 58 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 59 ;i<= 68 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 7 ;i<= 19 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 24 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 41 ;i<= 68 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 6 ;i<= 20 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 21 ;i<= 26 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 27 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 39 ;i<= 43 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 5 ;i<= 8 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 9 ;i<= 17 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 43 ;i<= 66 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 9 ;i<= 19 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 20 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 42 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 5 ;i<= 22 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 41 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 3 ;i<= 22 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 43 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 23 ;i<= 35 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 38 ;i<= 43 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 24 ;i<= 36 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 45 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 46 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 16 ;i<= 21 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 24 ;i<= 29 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 39 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 17 ;i<= 31 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 41 ;i<= 48 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 52 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 12 ;i<= 16 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 17 ;i<= 30 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 52 ;i<= 62 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 0 ; }

//baris 14
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 9 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 10 ;i<= 15 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 16 ;i<= 29 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 47 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 0 ; }

//baris 15
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 15 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 16 ;i<= 29 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 43 ;i<= 47 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 52 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 60 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 0 ; }

//baris 16
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 15 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 16 ;i<= 28 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 45 ;i<= 46 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 53 ;i<= 56 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 57 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 7 ;i<= 15 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 41 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 46 ;i<= 48 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 49 ;i<= 66 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 19 ;i<= 27 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 42 ;i<= 47 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 48 ;i<= 54 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 55 ;i<= 66 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 16 ;i<= 20 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 27 ;i<= 38 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 43 ;i<= 65 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 14 ;i<= 17 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 18 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 26 ;i<= 39 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 64 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 66 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 42 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 45 ;i<= 57 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 58 ;i<= 62 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 63 ;i<= 68 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 44 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 45 ;i<= 56 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 57 ;i<= 68 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 68 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 21 ;i<= 68 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 18 ;i<= 68 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 1 ;i<= 3 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 5 ;i<= 10 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 11 ;i<= 68 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 33 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 34 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 68 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 30 ;i<= 40 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 41 ;i<= 68 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 22 ;i<= 41 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 27 ;i<= 30 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 31 ;i<= 35 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 36 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 43 ;i<= 44 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 24 ;i<= 41 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 25 ;i<= 40 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 44 ;i<= 68 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 38 ][i]= 1 ; }

}

dataset::Antusias7 ()
{
   baris = 39 ;
   kolom = 69 ;

//baris 0
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 25 ;i<= 40 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 41 ;i<= 52 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 53 ;i<= 62 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 40 ;i<= 49 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 50 ;i<= 63 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 11 ;i<= 20 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 44 ;i<= 52 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 53 ;i<= 60 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 8 ;i<= 21 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 45 ;i<= 45 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 7 ;i<= 22 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 34 ;i<= 34 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 35 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 36 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 45 ;i<= 66 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 6 ;i<= 9 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 10 ;i<= 19 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 39 ;i<= 43 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 44 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 11 ;i<= 20 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 21 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 32 ;i<= 36 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 6 ;i<= 22 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 23 ;i<= 28 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 30 ;i<= 36 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 4 ;i<= 23 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 29 ;i<= 29 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 30 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 43 ;i<= 43 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 44 ;i<= 44 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 2 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 24 ;i<= 36 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 25 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 47 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 48 ;i<= 49 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 50 ;i<= 57 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 16 ;i<= 22 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 23 ;i<= 24 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 25 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 50 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 51 ;i<= 51 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 52 ;i<= 60 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 61 ;i<= 68 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 11 ;i<= 13 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 14 ;i<= 15 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 16 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 33 ;i<= 36 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 42 ;i<= 48 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 52 ;i<= 61 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 62 ;i<= 68 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 10 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 11 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 18 ;i<= 31 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 32 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 52 ;i<= 63 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 9 ;i<= 9 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 10 ;i<= 10 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 11 ;i<= 15 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 16 ;i<= 30 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 52 ;i<= 64 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 65 ;i<= 68 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 7 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 15 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 16 ;i<= 30 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 31 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 44 ;i<= 47 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 48 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 53 ;i<= 57 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 58 ;i<= 58 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 59 ;i<= 59 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 60 ;i<= 68 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 7 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 9 ;i<= 15 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 16 ;i<= 29 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 30 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 42 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 16 ][i]= 0 ; }

//baris 17
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 8 ;i<= 16 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 17 ;i<= 28 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 46 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 47 ;i<= 50 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 51 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 17 ][i]= 0 ; }

//baris 18
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 49 ;i<= 56 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 18 ][i]= 0 ; }

//baris 19
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 66 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 67 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 68 ;i<= 68 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 14 ;i<= 18 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 19 ;i<= 23 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 27 ;i<= 40 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 66 ;i<= 66 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 67 ;i<= 68 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 26 ;i<= 41 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 46 ;i<= 58 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 59 ;i<= 63 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 64 ;i<= 68 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 25 ;i<= 45 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 46 ;i<= 57 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 58 ;i<= 68 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 21 ;i<= 22 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 23 ;i<= 68 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 22 ;i<= 68 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 14 ;i<= 18 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 19 ;i<= 68 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 1 ;i<= 11 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 12 ;i<= 68 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 34 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 35 ;i<= 39 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 40 ;i<= 68 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 25 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 29 ;i<= 31 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 32 ;i<= 41 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 42 ;i<= 68 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 25 ;i<= 42 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 23 ;i<= 42 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 43 ;i<= 68 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 23 ;i<= 27 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 32 ;i<= 36 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 37 ;i<= 43 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 43 ;i<= 45 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 46 ;i<= 68 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 26 ;i<= 41 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 42 ;i<= 44 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 45 ;i<= 68 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 36 ][i]= 1 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 36 ][i]= 0 ; }
for (byte i= 24 ;i<= 68 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 37 ][i]= 1 ; }

//baris 38
for (byte i= 0 ;i<= 68 ;i++) {
wajah[ 38 ][i]= 1 ; }

}

dataset::Antusias8 ()
{
   baris = 38 ;
   kolom = 68 ;

//baris 0
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 20 ;i<= 37 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 38 ;i<= 46 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 47 ;i<= 67 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 21 ;i<= 37 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 38 ;i<= 42 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 43 ;i<= 55 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 56 ;i<= 62 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 63 ;i<= 67 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 22 ;i<= 36 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 40 ;i<= 40 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 42 ;i<= 61 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 65 ;i<= 67 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 22 ;i<= 36 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 37 ;i<= 42 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 43 ;i<= 67 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 10 ;i<= 14 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 15 ;i<= 23 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 24 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 41 ;i<= 67 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 7 ;i<= 13 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 14 ;i<= 19 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 25 ;i<= 29 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 39 ;i<= 65 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 6 ;i<= 8 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 9 ;i<= 29 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 30 ;i<= 31 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 32 ;i<= 33 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 34 ;i<= 34 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 38 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 10 ;i<= 21 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 22 ;i<= 33 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 39 ;i<= 67 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 6 ;i<= 22 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 23 ;i<= 33 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 3 ;i<= 24 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 25 ;i<= 34 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 2 ;i<= 24 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 25 ;i<= 31 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 32 ;i<= 32 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 38 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 40 ;i<= 45 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 46 ;i<= 56 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 57 ;i<= 67 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 1 ;i<= 24 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 25 ;i<= 30 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 31 ;i<= 33 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 47 ;i<= 49 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 50 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 59 ;i<= 67 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 1 ;i<= 16 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 17 ;i<= 22 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 23 ;i<= 24 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 25 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 33 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 23 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 29 ;i<= 33 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 37 ;i<= 41 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 50 ;i<= 61 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 62 ;i<= 64 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 8 ;i<= 8 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 9 ;i<= 16 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 17 ;i<= 22 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 34 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 50 ;i<= 56 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 57 ;i<= 64 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 7 ;i<= 8 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 9 ;i<= 15 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 16 ;i<= 27 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 28 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 46 ;i<= 50 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 51 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 6 ;i<= 8 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 9 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 39 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 66 ;i<= 67 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 6 ;i<= 7 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 15 ;i<= 15 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 17 ;i<= 26 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 27 ;i<= 35 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 40 ;i<= 46 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 47 ;i<= 53 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 65 ;i<= 67 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 5 ;i<= 7 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 8 ;i<= 16 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 26 ;i<= 36 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 41 ;i<= 62 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 64 ;i<= 67 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 57 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 58 ;i<= 60 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 61 ;i<= 67 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 25 ;i<= 38 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 43 ;i<= 49 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 50 ;i<= 55 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 56 ;i<= 67 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 24 ;i<= 67 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 23 ;i<= 67 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 21 ;i<= 67 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 18 ;i<= 19 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 20 ;i<= 67 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 14 ;i<= 16 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 17 ;i<= 67 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 8 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 9 ;i<= 12 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 13 ;i<= 33 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 36 ;i<= 67 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 4 ;i<= 31 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 32 ;i<= 37 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 38 ;i<= 67 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 39 ;i<= 67 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 23 ;i<= 39 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 22 ;i<= 39 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 40 ;i<= 67 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 21 ;i<= 38 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 39 ;i<= 67 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 26 ;i<= 40 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 43 ;i<= 67 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 39 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 40 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 67 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 22 ;i<= 67 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 35 ][i]= 1 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 35 ][i]= 0 ; }
for (byte i= 22 ;i<= 67 ;i++) {
wajah[ 35 ][i]= 1 ; }

//baris 36
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 36 ][i]= 1 ; }

//baris 37
for (byte i= 0 ;i<= 67 ;i++) {
wajah[ 37 ][i]= 1 ; }

}

dataset::Antusias9 ()
{
   baris = 36 ;
   kolom = 66 ;

//baris 0
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 20 ;i<= 36 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 37 ;i<= 44 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 45 ;i<= 65 ;i++) {
wajah[ 0 ][i]= 1 ; }

//baris 1
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 21 ;i<= 35 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 41 ;i<= 56 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 57 ;i<= 60 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 23 ;i<= 35 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 41 ;i<= 42 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 43 ;i<= 61 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 62 ;i<= 63 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 64 ;i<= 65 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 10 ;i<= 12 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 13 ;i<= 22 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 23 ;i<= 35 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 18 ;i<= 24 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 39 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 16 ;i<= 16 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 17 ;i<= 21 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 22 ;i<= 23 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 29 ;i<= 30 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 38 ;i<= 64 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 5 ][i]= 0 ; }

//baris 6
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 8 ;i<= 19 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 20 ;i<= 32 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 38 ;i<= 64 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 0 ; }

//baris 7
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 4 ;i<= 20 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 21 ;i<= 32 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 39 ;i<= 64 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 7 ][i]= 0 ; }

//baris 8
for (byte i= 0 ;i<= 1 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 2 ;i<= 21 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 22 ;i<= 33 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 40 ;i<= 64 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 0 ; }

//baris 9
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 1 ;i<= 23 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 24 ;i<= 33 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 34 ;i<= 35 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 40 ;i<= 64 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 9 ][i]= 0 ; }

//baris 10
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 24 ;i<= 30 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 44 ;i<= 56 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 57 ;i<= 64 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 10 ][i]= 0 ; }

//baris 11
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 17 ;i<= 20 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 24 ;i<= 28 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 33 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 35 ;i<= 36 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 41 ;i<= 45 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 46 ;i<= 49 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 50 ;i<= 58 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 59 ;i<= 64 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 0 ; }

//baris 12
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 13 ;i<= 22 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 28 ;i<= 32 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 36 ;i<= 40 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 61 ;i<= 64 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 12 ][i]= 0 ; }

//baris 13
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 12 ;i<= 14 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 15 ;i<= 27 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 28 ;i<= 33 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 50 ;i<= 60 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 14 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 27 ;i<= 33 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 45 ;i<= 49 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 50 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 56 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 5 ;i<= 5 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 15 ;i<= 26 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 27 ;i<= 34 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 38 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 53 ;i<= 53 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 54 ;i<= 63 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 4 ;i<= 4 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 5 ;i<= 6 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 7 ;i<= 7 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 8 ;i<= 14 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 15 ;i<= 25 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 26 ;i<= 34 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 48 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 49 ;i<= 49 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 50 ;i<= 63 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 2 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 3 ;i<= 4 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 5 ;i<= 14 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 15 ;i<= 20 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 21 ;i<= 21 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 22 ;i<= 24 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 25 ;i<= 35 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 39 ;i<= 47 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 48 ;i<= 51 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 52 ;i<= 62 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 63 ;i<= 63 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 64 ;i<= 65 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 20 ;i<= 20 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 25 ;i<= 36 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 40 ;i<= 60 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 61 ;i<= 62 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 63 ;i<= 65 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 14 ;i<= 17 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 24 ;i<= 37 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 42 ;i<= 55 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 56 ;i<= 59 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 60 ;i<= 65 ;i++) {
wajah[ 19 ][i]= 1 ; }

//baris 20
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 20 ;i<= 22 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 42 ;i<= 53 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 54 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 19 ;i<= 21 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 22 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 17 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 18 ;i<= 20 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 21 ;i<= 65 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 16 ;i++) {
wajah[ 23 ][i]= 1 ; }
for (byte i= 17 ;i<= 18 ;i++) {
wajah[ 23 ][i]= 0 ; }
for (byte i= 19 ;i<= 65 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 12 ;i++) {
wajah[ 24 ][i]= 1 ; }
for (byte i= 13 ;i<= 15 ;i++) {
wajah[ 24 ][i]= 0 ; }
for (byte i= 16 ;i<= 65 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 12 ;i<= 65 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 31 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 32 ;i<= 35 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 36 ;i<= 65 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 29 ;i<= 37 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 38 ;i<= 65 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 22 ;i<= 26 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 28 ;i<= 38 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 39 ;i<= 65 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 21 ;i<= 39 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 20 ;i<= 27 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 28 ;i<= 28 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 29 ;i<= 38 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 39 ;i<= 65 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 20 ;i<= 25 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 26 ;i<= 28 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 29 ;i<= 32 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 33 ;i<= 40 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 41 ;i<= 41 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 22 ;i<= 38 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 22 ;i<= 39 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 34 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 34 ][i]= 0 ; }
for (byte i= 22 ;i<= 65 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 35 ][i]= 1 ; }

}

dataset::Antusias10 ()
{
   baris = 36 ;
   kolom = 66 ;

//baris 0
for (byte i= 0 ;i<= 9 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 10 ;i<= 14 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 15 ;i<= 23 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 24 ;i<= 39 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 40 ;i<= 55 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 56 ;i<= 57 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 58 ;i<= 59 ;i++) {
wajah[ 0 ][i]= 0 ; }
for (byte i= 60 ;i<= 64 ;i++) {
wajah[ 0 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 0 ][i]= 0 ; }

//baris 1
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 6 ;i<= 16 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 17 ;i<= 25 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 26 ;i<= 38 ;i++) {
wajah[ 1 ][i]= 1 ; }
for (byte i= 39 ;i<= 53 ;i++) {
wajah[ 1 ][i]= 0 ; }
for (byte i= 54 ;i<= 65 ;i++) {
wajah[ 1 ][i]= 1 ; }

//baris 2
for (byte i= 0 ;i<= 4 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 5 ;i<= 21 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 22 ;i<= 22 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 23 ;i<= 23 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 39 ;i<= 44 ;i++) {
wajah[ 2 ][i]= 1 ; }
for (byte i= 45 ;i<= 54 ;i++) {
wajah[ 2 ][i]= 0 ; }
for (byte i= 55 ;i<= 65 ;i++) {
wajah[ 2 ][i]= 1 ; }

//baris 3
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 8 ;i<= 29 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 3 ][i]= 1 ; }
for (byte i= 33 ;i<= 33 ;i++) {
wajah[ 3 ][i]= 0 ; }
for (byte i= 34 ;i<= 65 ;i++) {
wajah[ 3 ][i]= 1 ; }

//baris 4
for (byte i= 0 ;i<= 3 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 4 ;i<= 21 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 31 ;i<= 32 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 33 ;i<= 35 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 39 ;i<= 63 ;i++) {
wajah[ 4 ][i]= 1 ; }
for (byte i= 64 ;i<= 64 ;i++) {
wajah[ 4 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 4 ][i]= 1 ; }

//baris 5
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 1 ;i<= 22 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 23 ;i<= 26 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 27 ;i<= 27 ;i++) {
wajah[ 5 ][i]= 1 ; }
for (byte i= 28 ;i<= 39 ;i++) {
wajah[ 5 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 5 ][i]= 1 ; }

//baris 6
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 28 ;i<= 37 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 6 ][i]= 1 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 6 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 6 ][i]= 1 ; }

//baris 7
for (byte i= 0 ;i<= 27 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 7 ][i]= 1 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 7 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 7 ][i]= 1 ; }

//baris 8
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 26 ;i<= 27 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 30 ;i<= 33 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 34 ;i<= 36 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 37 ;i<= 38 ;i++) {
wajah[ 8 ][i]= 1 ; }
for (byte i= 39 ;i<= 40 ;i++) {
wajah[ 8 ][i]= 0 ; }
for (byte i= 41 ;i<= 65 ;i++) {
wajah[ 8 ][i]= 1 ; }

//baris 9
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 14 ;i<= 16 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 17 ;i<= 19 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 20 ;i<= 24 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 28 ;i<= 29 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 31 ;i<= 31 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 32 ;i<= 34 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 35 ;i<= 37 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 9 ][i]= 1 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 9 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 9 ][i]= 1 ; }

//baris 10
for (byte i= 0 ;i<= 7 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 8 ;i<= 24 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 25 ;i<= 26 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 27 ;i<= 29 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 36 ;i<= 37 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 38 ;i<= 38 ;i++) {
wajah[ 10 ][i]= 1 ; }
for (byte i= 39 ;i<= 52 ;i++) {
wajah[ 10 ][i]= 0 ; }
for (byte i= 53 ;i<= 65 ;i++) {
wajah[ 10 ][i]= 1 ; }

//baris 11
for (byte i= 0 ;i<= 6 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 7 ;i<= 9 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 10 ;i<= 11 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 12 ;i<= 24 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 25 ;i<= 25 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 30 ;i<= 34 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 35 ;i<= 38 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 39 ;i<= 39 ;i++) {
wajah[ 11 ][i]= 1 ; }
for (byte i= 40 ;i<= 56 ;i++) {
wajah[ 11 ][i]= 0 ; }
for (byte i= 57 ;i<= 65 ;i++) {
wajah[ 11 ][i]= 1 ; }

//baris 12
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 6 ;i<= 8 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 9 ;i<= 11 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 12 ;i<= 23 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 24 ;i<= 25 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 26 ;i<= 29 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 30 ;i<= 35 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 36 ;i<= 38 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 39 ;i<= 41 ;i++) {
wajah[ 12 ][i]= 1 ; }
for (byte i= 42 ;i<= 58 ;i++) {
wajah[ 12 ][i]= 0 ; }
for (byte i= 59 ;i<= 65 ;i++) {
wajah[ 12 ][i]= 1 ; }

//baris 13
for (byte i= 0 ;i<= 5 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 6 ;i<= 6 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 7 ;i<= 11 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 12 ;i<= 23 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 29 ;i<= 35 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 36 ;i<= 39 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 46 ;i<= 46 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 47 ;i<= 53 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 54 ;i<= 54 ;i++) {
wajah[ 13 ][i]= 1 ; }
for (byte i= 55 ;i<= 59 ;i++) {
wajah[ 13 ][i]= 0 ; }
for (byte i= 60 ;i<= 65 ;i++) {
wajah[ 13 ][i]= 1 ; }

//baris 14
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 12 ;i<= 23 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 24 ;i<= 24 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 25 ;i<= 28 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 29 ;i<= 36 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 37 ;i<= 39 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 40 ;i<= 41 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 46 ;i<= 46 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 53 ;i<= 55 ;i++) {
wajah[ 14 ][i]= 1 ; }
for (byte i= 56 ;i<= 60 ;i++) {
wajah[ 14 ][i]= 0 ; }
for (byte i= 61 ;i<= 65 ;i++) {
wajah[ 14 ][i]= 1 ; }

//baris 15
for (byte i= 0 ;i<= 13 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 14 ;i<= 15 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 16 ;i<= 18 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 19 ;i<= 20 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 24 ;i<= 27 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 28 ;i<= 36 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 37 ;i<= 40 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 41 ;i<= 43 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 44 ;i<= 45 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 46 ;i<= 46 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 47 ;i<= 52 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 53 ;i<= 56 ;i++) {
wajah[ 15 ][i]= 1 ; }
for (byte i= 57 ;i<= 57 ;i++) {
wajah[ 15 ][i]= 0 ; }
for (byte i= 58 ;i<= 65 ;i++) {
wajah[ 15 ][i]= 1 ; }

//baris 16
for (byte i= 0 ;i<= 15 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 16 ;i<= 19 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 20 ;i<= 23 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 24 ;i<= 26 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 27 ;i<= 37 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 38 ;i<= 40 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 41 ;i<= 44 ;i++) {
wajah[ 16 ][i]= 1 ; }
for (byte i= 45 ;i<= 47 ;i++) {
wajah[ 16 ][i]= 0 ; }
for (byte i= 48 ;i<= 65 ;i++) {
wajah[ 16 ][i]= 1 ; }

//baris 17
for (byte i= 0 ;i<= 11 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 12 ;i<= 17 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 18 ;i<= 22 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 23 ;i<= 25 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 26 ;i<= 37 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 38 ;i<= 41 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 42 ;i<= 45 ;i++) {
wajah[ 17 ][i]= 1 ; }
for (byte i= 46 ;i<= 51 ;i++) {
wajah[ 17 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 17 ][i]= 1 ; }

//baris 18
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 26 ;i<= 38 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 39 ;i<= 42 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 43 ;i<= 48 ;i++) {
wajah[ 18 ][i]= 1 ; }
for (byte i= 49 ;i<= 51 ;i++) {
wajah[ 18 ][i]= 0 ; }
for (byte i= 52 ;i<= 65 ;i++) {
wajah[ 18 ][i]= 1 ; }

//baris 19
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 21 ;i<= 24 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 25 ;i<= 39 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 19 ][i]= 0 ; }
for (byte i= 44 ;i<= 64 ;i++) {
wajah[ 19 ][i]= 1 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 19 ][i]= 0 ; }

//baris 20
for (byte i= 0 ;i<= 19 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 20 ;i<= 21 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 22 ;i<= 42 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 43 ;i<= 46 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 47 ;i<= 62 ;i++) {
wajah[ 20 ][i]= 1 ; }
for (byte i= 63 ;i<= 64 ;i++) {
wajah[ 20 ][i]= 0 ; }
for (byte i= 65 ;i<= 65 ;i++) {
wajah[ 20 ][i]= 1 ; }

//baris 21
for (byte i= 0 ;i<= 18 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 19 ;i<= 19 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 20 ;i<= 48 ;i++) {
wajah[ 21 ][i]= 1 ; }
for (byte i= 49 ;i<= 56 ;i++) {
wajah[ 21 ][i]= 0 ; }
for (byte i= 57 ;i<= 65 ;i++) {
wajah[ 21 ][i]= 1 ; }

//baris 22
for (byte i= 0 ;i<= 0 ;i++) {
wajah[ 22 ][i]= 1 ; }
for (byte i= 1 ;i<= 15 ;i++) {
wajah[ 22 ][i]= 0 ; }
for (byte i= 16 ;i<= 65 ;i++) {
wajah[ 22 ][i]= 1 ; }

//baris 23
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 23 ][i]= 1 ; }

//baris 24
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 24 ][i]= 1 ; }

//baris 25
for (byte i= 0 ;i<= 36 ;i++) {
wajah[ 25 ][i]= 1 ; }
for (byte i= 37 ;i<= 37 ;i++) {
wajah[ 25 ][i]= 0 ; }
for (byte i= 38 ;i<= 65 ;i++) {
wajah[ 25 ][i]= 1 ; }

//baris 26
for (byte i= 0 ;i<= 24 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 25 ;i<= 27 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 28 ;i<= 31 ;i++) {
wajah[ 26 ][i]= 1 ; }
for (byte i= 32 ;i<= 39 ;i++) {
wajah[ 26 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 26 ][i]= 1 ; }

//baris 27
for (byte i= 0 ;i<= 23 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 24 ;i<= 29 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 30 ;i<= 30 ;i++) {
wajah[ 27 ][i]= 1 ; }
for (byte i= 31 ;i<= 40 ;i++) {
wajah[ 27 ][i]= 0 ; }
for (byte i= 41 ;i<= 65 ;i++) {
wajah[ 27 ][i]= 1 ; }

//baris 28
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 28 ][i]= 1 ; }
for (byte i= 23 ;i<= 40 ;i++) {
wajah[ 28 ][i]= 0 ; }
for (byte i= 41 ;i<= 65 ;i++) {
wajah[ 28 ][i]= 1 ; }

//baris 29
for (byte i= 0 ;i<= 22 ;i++) {
wajah[ 29 ][i]= 1 ; }
for (byte i= 23 ;i<= 41 ;i++) {
wajah[ 29 ][i]= 0 ; }
for (byte i= 42 ;i<= 65 ;i++) {
wajah[ 29 ][i]= 1 ; }

//baris 30
for (byte i= 0 ;i<= 21 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 22 ;i<= 25 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 26 ;i<= 30 ;i++) {
wajah[ 30 ][i]= 1 ; }
for (byte i= 31 ;i<= 39 ;i++) {
wajah[ 30 ][i]= 0 ; }
for (byte i= 40 ;i<= 65 ;i++) {
wajah[ 30 ][i]= 1 ; }

//baris 31
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 24 ;i<= 42 ;i++) {
wajah[ 31 ][i]= 1 ; }
for (byte i= 43 ;i<= 43 ;i++) {
wajah[ 31 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 31 ][i]= 1 ; }

//baris 32
for (byte i= 0 ;i<= 20 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 21 ;i<= 23 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 24 ;i<= 39 ;i++) {
wajah[ 32 ][i]= 1 ; }
for (byte i= 40 ;i<= 43 ;i++) {
wajah[ 32 ][i]= 0 ; }
for (byte i= 44 ;i<= 65 ;i++) {
wajah[ 32 ][i]= 1 ; }

//baris 33
for (byte i= 0 ;i<= 41 ;i++) {
wajah[ 33 ][i]= 1 ; }
for (byte i= 42 ;i<= 42 ;i++) {
wajah[ 33 ][i]= 0 ; }
for (byte i= 43 ;i<= 65 ;i++) {
wajah[ 33 ][i]= 1 ; }

//baris 34
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 34 ][i]= 1 ; }

//baris 35
for (byte i= 0 ;i<= 65 ;i++) {
wajah[ 35 ][i]= 1 ; }

}

