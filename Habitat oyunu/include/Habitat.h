/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#ifndef HABITAT_H
#define HABITAT_H

#include "Canli.h"
#include <stdio.h>

#define MAX_SATIR_SAYISI 100
#define MAX_SUTUN_SAYISI 100

typedef struct HABITAT {
    int satirSayisi;
    int sutunSayisi;
    Canli*** hucres;
    Canli* kazanan;
} Habitat;

Habitat* HabitatOlustur(const char* dosyaAdi);
void HabitatYokEt(Habitat* habitat);
void HabitatYazdir(Habitat* habitat);
void HabitatGuncelle(Habitat* habitat, FILE* dosya);
void HabitatKazananiBelirle(Habitat* habitat);

#endif