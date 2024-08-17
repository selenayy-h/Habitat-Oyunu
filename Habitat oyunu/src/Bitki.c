/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/


#include "Bitki.h"
#include <stdlib.h>
#include <stdio.h>


Bitki* bitki_olustur(int deger) {
    Bitki* yeni_bitki = (Bitki*)malloc(sizeof(Bitki));
    if (yeni_bitki == NULL) {
        printf("Hafiza yetersiz.\n");
        exit(EXIT_FAILURE);
    }
    return yeni_bitki;
}

    
    // bitki->super.deger = deger;
    // bitki->super.gorunum = (char* (*)(Canli*))bitki_gorunum;
    // bitki->super.super = NULL;

   // return bitki;


