#include <stdio.h>
#include <stdlib.h>
#define VERGI_KITAP 4.0
#define VERGI_TEMELGIDA 5.6
#define VERGI_LUKS 19.6
#define KOD_KITAP 0
#define KOD_TEMELGIDA 1
#define KOD_LUKS 2

int main()
{
    float fiyat;
    int kod;

    printf("Urunun kodunu giriniz: ");
    scanf("%d",&kod);
    printf("Urunun fiyatini giriniz: ");
    scanf("%f",&fiyat);
    printf("Urunun kdv'li son fiyati: ");
    switch(kod){

    case KOD_KITAP: printf("%.3f",fiyat+(fiyat*VERGI_KITAP/100));
       break;
    case KOD_LUKS: printf("%.3f", fiyat+(fiyat*VERGI_LUKS/100));
        break;
    case KOD_TEMELGIDA: printf("%.3f",fiyat+(fiyat*VERGI_TEMELGIDA/100));
        break;
    default: printf("Lutfen gecerli bir kod numarasi giriniz");

    }

    return 0;
}
