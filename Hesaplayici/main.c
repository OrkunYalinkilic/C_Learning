#include <stdio.h>
#include <stdlib.h>


void hesaplayici(float *ilk, float *ikinci,char *islem)
{
    float sonuc;
    switch(*islem)
{
    case '+':
    {
        sonuc=*ilk + *ikinci;
        break;
    }
    case '-':
    {
        sonuc=*ilk - *ikinci;
        break;
    }
    case '*':
    {
        sonuc=*ilk * *ikinci;
        break;
    }
    case '/':
    {
        sonuc=*ilk / *ikinci;
        break;
    }

    default:
    {
        printf("Hatali secim yaptiniz!!");
    }
}
    printf("Sonuc: %.2f",sonuc);
}


int main()
{
    float sayi1,sayi2;
    char secim;
    printf("Hangi islemi secersiniz (+ - * /) : ");
    scanf("%c",&secim);
    printf("Birinci sayiyi giriniz: ");
    scanf("%f",&sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%f",&sayi2);
    hesaplayici(&sayi1,&sayi2,&secim);
    return 0;
}
