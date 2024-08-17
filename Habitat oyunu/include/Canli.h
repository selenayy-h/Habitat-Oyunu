/*
G221210088
SELENAY HUR 
selenay.hur@ogr.sakarya.edu.tr
PDP-ÖDEV2
2. öğretim a grubu
04.05.2024
*/



#ifndef CANLI_H
#define CANLI_H
typedef struct CANLI {
    char* tur;
    int deger;
   char* (*gorunum)(struct CANLI*);
  
} Canli;
//Canli yapısı, canlı varlıkları temsil etmek için kullanılır. 
//tur ve deger adında iki veri elemanı ve gorunum adında bir işlev göstericisi bulunur.
// tur, canlının türünü belirtirken, deger ise canlının bir özelliğini temsil eder. gorunum, bu canlının görünümünü döndüren bir işlev göstericisidir.
Canli* CanliOlustur(int deger);
//CanliOlustur: Canli yapısından bir nesne oluşturmak için kullanılan bir işlevdir. Parametre olarak bir int değer alır ve bu değeri yeni oluşturulan Canli yapısının deger elemanına atar. Ayrıca oluşturulan Canli yapısının adresini döndürür.
void CanliSil(Canli*);
//CanliSil: Canli yapısından oluşturulan nesneyi bellekten silmek için kullanılan bir işlevdir. Parametre olarak bir Canli işaretçisi alır ve bu işaretçinin gösterdiği bellek alanını serbest bırakır.
char* gorunum(Canli*);
 //Canli tipinde bir pointer olan gorunum, bir Canli yapısının görünümünü döndüren bir işlevdir. Bu işlevin parametresi olarak bir Canli yapısı alır ve char* türünde bir değer döndürür.
    struct CANLI* super;
Canli* BitkiOlustur(int deger);
Canli* BocekOlustur(int deger);
Canli* SinekOlustur(int deger);
Canli* PireOlustur(int deger);


#endif 