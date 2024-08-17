
/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#include "Bocek.h"
#include <stdlib.h>
#include <stdio.h>

char* gorunum(struct CANLI* this) {
    return "C";
}

Bocek* bocek_olustur() {
    Bocek* yeni_bocek = (Bocek*)malloc(sizeof(Bocek));
    if (yeni_bocek == NULL) {
        printf("Hafiza yetersiz.\n");
        exit(EXIT_FAILURE);
    }
    return yeni_bocek;
    //Bu işlev, dinamik bellekten bir Bocek yapısı oluşturmak için kullanılır.
    // İlk olarak, bir Bocek yapısının boyutu kadar bellek ayrılır. Bellek ayrılması başarısız olursa, program hafıza yetersizliği nedeniyle sonlandırılır.
    // Aksi halde, oluşturulan Bocek yapısının adresi döndürülür.
}
