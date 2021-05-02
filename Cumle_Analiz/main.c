#include <stdio.h>
#include <stdlib.h>
void Olusturc(int toplamsatirsayisi)
{
    for(int i=1; i<=toplamsatirsayisi; i++) //i anlýk satýr sayýsýdir..
    {
        int bosluksayisi=toplamsatirsayisi-i;
        for(int j=1; j<=bosluksayisi; j++)
        {
            printf(" ");
        }
        for(int m=1; m<=2*i-1; m++)  // c ededi  =   2*i-1 dir
        {
            printf("c");
        }
        printf("\n");
    }
}
void Olusturplus(toplamsatirsayisi)
{
    int boslukSayisi=1;
    for(int i=1; i<=toplamsatirsayisi-1; i++) // i anlýk satir sayisidir.
    {
        for(int j=1; j<=boslukSayisi; j++)
        {
            printf(" ");
        }
        boslukSayisi++;
        for(int j=1; j<=2*(toplamsatirsayisi-i)-1; j++)  // + adedi  =  2*(toplamsatirsayisiadedi-i) -1 dir
        {
            printf("+");
        }
        printf("\n");
    }
}
int main()
{
    int toplamsatirsayisi;
    printf("Satir sayisini giriniz: ");
    scanf("%d",&toplamsatirsayisi);
    Olusturc(toplamsatirsayisi);
    Olusturplus(toplamsatirsayisi);
    return 0;
}
//Durumlarý yan yana yaz.Sonra boþluklarýn ve c lerin neye göre deðiþtiðini formuluze edersin.
