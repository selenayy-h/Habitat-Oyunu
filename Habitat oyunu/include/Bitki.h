/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#ifndef BITKI_H
#define BITKI_H

#include "Canli.h"

typedef struct Bitki {
    Canli super;
} Bitki;

//char* bitki_gorunum(Bitki* this);
//char* gorunum(struct CANLI*);
Bitki* bitki_olustur(int deger);


#endif 

