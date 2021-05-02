#include <stdio.h>
#include <stdlib.h>


float ortalama(int *dizim,int boyut)  // �ENML�....    *dizim = dizim[] anlam�na gelir.   ......�NEML�
{
    int toplam=0;
    float ort;
    for(int i=0; i<boyut; i++)
    {
        toplam+=dizim[i];
    }
    ort= (float)toplam/(float)boyut;    // Burada ort float oldu�undan en do�ru sonu� i�in toplam ve n de floata d�n��t�r�ld�.
    return ort;

}
int main()
{
    /*
    Kullan�c� taraf�ndan N elemanl� bir diziye al�nan tam say�lar�n ortalamas�n�n bulunmas�n�
    sa�layan fonksiyonun prototipi a�a��da verilmi�tir.Buna g�re bu prototipi kullanarak C
    program�n� yaz�n�z.
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
