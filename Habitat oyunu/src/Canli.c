/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/

#include "Canli.h"
#include <stdlib.h>
#include <stdio.h>




Canli* CanliOlustur(int deger) {
    Canli* this = (Canli*)malloc(sizeof(Canli));
    if (this == NULL) {
        printf("Hafiza yetersiz.\n");
        exit(EXIT_FAILURE);
    }
    //CanliOlustur(int deger): Bu işlev, bir Canli yapısı oluşturur ve başlangıç değerini (deger) atar. 
    //Bellek tahsisi başarısız olursa, program hafıza yetersizliği nedeniyle sonlandırılır.
     //Aksi halde, oluşturulan Canli yapısının adresi döndürülür.
    this->deger = deger;
    this->tur = NULL; // İlk başta türü NULL olarak ayarla
    this->gorunum = gorunum;
    this->super = NULL;
    return this;
}


char* gorunum(Canli* this) {
    if (this == NULL)
        return "";

    int deger =this->deger;
    //gorunum(Canli* this): Bu işlev, bir Canli yapısının görünümünü belirler. 
    //Canli yapısının deger özelliğine bağlı olarak belirli bir görünüm döndürür.

    if (deger >= 1 && deger <= 9)
        return "B";
    else if (deger >= 10 && deger <= 20)
        return "C";
    else if (deger >= 21 && deger <= 50)
        return "S";
    else if (deger >= 51 && deger <= 99)
        return "P";
    else
        return "";
}

Canli* BitkiOlustur(int deger) {
    Canli* bitki = CanliOlustur(deger);
  
    return bitki;
}

Canli* BocekOlustur(int deger) {
    Canli*  bocek = CanliOlustur(deger);
  
    return  bocek;
}

Canli* SinekOlustur(int deger) {
    Canli* sinek = CanliOlustur(deger);
  
    return sinek;
}

Canli* PireOlustur(int deger) {
    Canli* pire = CanliOlustur(deger);
  
    return pire;
}

//BitkiOlustur, BocekOlustur, SinekOlustur, PireOlustur: Bu işlevler, sırasıyla Bitki, Böcek, Sinek ve Pire türünden Canli nesneleri oluşturmak için kullanılır. 
//Her biri, CanliOlustur işlevini çağırarak bir Canli nesnesi oluşturur ve bu nesneyi döndürür.