/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/
#include <stdio.h>
#include <stdlib.h>
#include "Habitat.h"

int main() {
    // Test için kullanılacak veri dosyasının adı
    const char* dosya_ad = "Veri.txt";

    // Habitat oluştur
    Habitat* habitat = HabitatOlustur(dosya_ad);

    // Habitatı güncelle
    FILE* dosya = fopen(dosya_ad, "r");
    HabitatGuncelle(habitat, dosya);
    fclose(dosya);

    // Habitatı yazdır
    HabitatYazdir(habitat);


    // Kazananı belirle
    HabitatKazananiBelirle(habitat);

    // Kazananı ekrana yazdır (isteğe bağlı)
    if (habitat->kazanan != NULL) {
        printf("Kazanan: %s\n", habitat->kazanan->tur);
    } else {
        printf("Kazanan yok.\n");
    }

    // Habitatı yok et
    HabitatYokEt(habitat);

    return 0;
}
