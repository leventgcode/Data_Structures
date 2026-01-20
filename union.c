#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ogrenci {
    char isim[20];
    int no;
    float ort;
};

typedef union {
    char isim[20];
    int yas;
 } ogretmen;

int main() {
    union ogrenci ogr;

    strcpy(ogr.isim, "Levent");
    printf("Isim: %s\n", ogr.isim);

    ogr.no = 12345;
    printf("No: %d\n", ogr.no);

    
    ogr.ort = 3.75;
    printf("Ort: %.2f\n", ogr.ort);

    //Typedef
    ogretmen ogrt;;
    strcpy(ogrt.isim, "Burak");

    printf("Ogretmen Isim: %s\n", ogrt.isim);   
    
    ogrt.yas = 35;
    printf("Ogretmen Yas: %d\n", ogrt.yas);
    return 1;
}