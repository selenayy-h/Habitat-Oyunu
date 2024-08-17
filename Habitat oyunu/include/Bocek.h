/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/

#ifndef BOCEK_H
#define BOCEK_H

#include "Canli.h"

typedef struct {
    Canli super;
} Bocek;
 
//char* (*gorunum)();
//char* gorunum(struct CANLI*); // Fonksiyon işaretçisinin türü düzeltiliyor
Bocek* bocek_olustur();

#endif // BOCEK_H
