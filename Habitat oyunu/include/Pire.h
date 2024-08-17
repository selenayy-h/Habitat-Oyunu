/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/

#ifndef PIRE_H
#define PIRE_H

#include "Canli.h"
#include <stdlib.h>


typedef struct  {
    Canli super;
}Pire;
//char* gorunum(struct CANLI*);
Pire* pire_olustur();
//İçeride Pire yapısı tanımlanmıştır. Bu yapının tek bir üyesi vardır: super, tipi Canli olan bir yapıdır. Canli yapısı, canlı varlıkları temsil etmek için kullanılan bir yapıdır ve 


#endif 