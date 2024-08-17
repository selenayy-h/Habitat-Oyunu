/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#include <stdio.h>
#include "Pire.h"
#include <stdlib.h>

char* gorunum(struct CANLI* this) {
    return "P";
}

Pire* pire_olustur(int deger) {
    Pire* yeni_pire = (Pire*)malloc(sizeof(Pire));
    if (yeni_pire == NULL) {
        printf("Hafiza yetersiz.\n");
        exit(EXIT_FAILURE);
    }
    return yeni_pire;
}
