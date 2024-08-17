
/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#include "Habitat.h"
#include <stdlib.h>
#include <stdio.h>

Habitat* HabitatOlustur(const char* dosyaAdi) {
    FILE* dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        exit(EXIT_FAILURE);
    }

    Habitat* habitat = (Habitat*)malloc(sizeof(Habitat));
    if (habitat == NULL) {
        printf("Hafiza yetersiz.\n");
        exit(EXIT_FAILURE);
    }

    habitat->satirSayisi = 0;
    habitat->sutunSayisi = 0;
    habitat->hucres = NULL;
    habitat->kazanan = NULL;

    HabitatGuncelle(habitat, dosya);

    fclose(dosya);
    return habitat;
}

void HabitatYokEt(Habitat* habitat) {
    if (habitat == NULL)
        return;

    for (int i = 0; i < habitat->satirSayisi; i++) {
        for (int j = 0; j < habitat->sutunSayisi; j++) {
            free(habitat->hucres[i][j]);
        }
        free(habitat->hucres[i]);
    }
    free(habitat->hucres);
    free(habitat);
}

void HabitatYazdir(Habitat* habitat) {
    if (habitat == NULL)
        return;

   for (int i = 0; i < habitat->satirSayisi; i++) {
        for (int j = 0; j < habitat->sutunSayisi; j++) {
            printf("%s ", habitat->hucres[i][j]->gorunum(habitat->hucres[i][j])); // gorunum işlevini çağırırken Canli nesnesini parametre olarak gönder
        }
        printf("\n");
}
}
void HabitatGuncelle(Habitat* habitat, FILE* dosya) {
    // Satır ve sütun sayılarını belirle
    habitat->satirSayisi = 0;
    habitat->sutunSayisi = 0;
 int deger; // deger değişkenini tanımla
    char c;
    int sayi;
    while (fscanf(dosya, "%d%c", &sayi, &c) == 2) {
        // Bellekte yer ayır
        if (habitat->hucres == NULL) {
            habitat->hucres = (Canli***)malloc(sizeof(Canli**) * MAX_SATIR_SAYISI);
            if (habitat->hucres == NULL) {
                printf("Hafiza yetersiz.\n");
                exit(EXIT_FAILURE);
            }
        }

        if (habitat->hucres[habitat->satirSayisi] == NULL) {
            habitat->hucres[habitat->satirSayisi] = (Canli**)malloc(sizeof(Canli*) * MAX_SUTUN_SAYISI);
            if (habitat->hucres[habitat->satirSayisi] == NULL) {
                printf("Hafiza yetersiz.\n");
                exit(EXIT_FAILURE);
            }
        }


 
  deger = 0; // veya başka bir değer
       Canli* canli = NULL;
            
if (sayi >= 1 && sayi <= 9)
    canli = BitkiOlustur(deger); // BitkiOlustur'a deger parametresini iletiyorsunuz
else if (sayi >= 10 && sayi <= 20)
    canli = BocekOlustur(deger); // BocekOlustur'a deger parametresini iletiyorsunuz
else if (sayi >= 21 && sayi <= 50)
    canli = SinekOlustur(deger); // SinekOlustur'a deger parametresini iletiyorsunuz
else if (sayi >= 51 && sayi <= 99)
    canli = PireOlustur(deger); // PireOlustur'a deger parametresini iletiyorsunuz

        habitat->hucres[habitat->satirSayisi][habitat->sutunSayisi] = canli;
        habitat->sutunSayisi++;

        if (c == '\n') {
            habitat->satirSayisi++;
            habitat->sutunSayisi = 0;
        }
    }
}


void HabitatKazananiBelirle(Habitat* habitat) {


    for (int i = 0; i < habitat->satirSayisi; i++) {
        for (int j = 0; j < habitat->sutunSayisi; j++) {
            Canli* canli = habitat->hucres[i][j];
            if (canli != NULL && canli->tur != NULL) {
                habitat->kazanan = canli;
                return;
            }
        }
    }
}