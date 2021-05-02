#include <stdio.h>
#include <stdlib.h>


float ortalama(int *dizim,int boyut)  // ÖENMLÝ....    *dizim = dizim[] anlamýna gelir.   ......ÖNEMLÝ
{
    int toplam=0;
    float ort;
    for(int i=0; i<boyut; i++)
    {
        toplam+=dizim[i];
    }
    ort= (float)toplam/(float)boyut;    // Burada ort float olduðundan en doðru sonuç için toplam ve n de floata dönüþtürüldü.
    return ort;

}
int main()
{
    /*
    Kullanýcý tarafýndan N elemanlý bir diziye alýnan tam sayýlarýn ortalamasýnýn bulunmasýný
    saðlayan fonksiyonun prototipi aþaðýda verilmiþtir.Buna göre bu prototipi kullanarak C
    programýný yazýnýz.
    ortalama(int *dizim,int boyut)
    */
    int n;
    printf("Kac elemanli dizi olusturmak istersiniz: ");
    scanf("%d",&n);
    int dizi[n];
    for(int i=0; i<n; i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("Dizinin ortalamasi: %.2f",ortalama(dizi,n));
    return 0;
}
