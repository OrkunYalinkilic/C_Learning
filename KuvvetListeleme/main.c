#include <stdio.h>
#include <stdlib.h>

int ikiKuvvetleri(int sayi)
{
    int deger;
    if(sayi==0)
    {
        deger=1;
    }
    else
    {
        deger=2*ikiKuvvetleri(sayi-1);// burada e�er ikiKuvvetleri fonksiyonu �a��r�lmad�ysa deger=2 olarak kabul ediliyo ve 2 sat�r altta o �ekilde yazd�r�yor.
    }
    printf("%d ",deger);
    return deger; // (�l�) void oldugu zaman hata verdi�i i�in int yapt�k ve �l� olarak kullanmad�g�m�z return deger dedik.
}
int main()
{
    int sayi;
    printf("Kaca kadar 2'nin kuvvetlerini listelemek istersiniz: ");
    scanf("%d",&sayi);
    ikiKuvvetleri(sayi);
    return 0;
}
