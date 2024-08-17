/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#include "Sinek.h"
#include <stdlib.h>
#include <stdio.h>


char* gorunum(struct CANLI* this) {
    return "S";
}

Sinek* sinek_olustur() {
    Sinek* yeni_sinek = (Sinek*)malloc(sizeof(Sinek));
    if (yeni_sinek == NULL) {
        // Hata durumu
        exit(EXIT_FAILURE);
    }
    // İlgili başlatma işlemleri yapılabilir
    return yeni_sinek;
}