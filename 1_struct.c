#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kitap
{
    char kitapAdi[30];
    float fiyat;
    int sayfa;
};

typedef struct {
    char adSoyad[30];
    int yas;
} yazar;

int main(){
    
    
    //Direct
    struct kitap kitap1;
   strcpy(kitap1.kitapAdi, "C Programlama Dili");
    kitap1.fiyat = 45.50;
    kitap1.sayfa = 550;

    printf("Kitap Adi: %s\n", kitap1.kitapAdi);
    printf("Fiyat: %.2f\n", kitap1.fiyat);
    printf("Sayfa Sayisi: %d\n", kitap1.sayfa);
    
   //Undirect 
    struct kitap *kitap2 = (struct kitap*) malloc (sizeof(struct kitap));
   strcpy(kitap2->kitapAdi, "Veri Yapilari");
    kitap2->fiyat = 60.00;
    kitap2->sayfa = 750;

    printf("\nKitap Adi: %s\n", kitap2->kitapAdi);
    printf("Fiyat: %.2f\n", kitap2->fiyat);
    printf("Sayfa Sayisi: %d\n", kitap2->sayfa);
    free(kitap2);

  //TypeDef 
  yazar yazar1;
  strcpy(yazar1.adSoyad, "Ahmet Yilmaz");
   yazar1.yas = 45;

//Typedef - Undirect
yazar *yazar2 = (yazar*) malloc (sizeof(yazar));
strcpy(yazar2->adSoyad, "Mehmet Demir");
yazar2->yas = 50;

printf("\nYazar Adi: %s\n", yazar1.adSoyad);
printf("Yazar Yasi: %d\n", yazar1.yas);
printf("\nYazar Adi: %s\n", yazar2->adSoyad);
printf("Yazar Yasi: %d\n", yazar2->yas);


return 1;
}