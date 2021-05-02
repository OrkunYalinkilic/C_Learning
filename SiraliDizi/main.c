#include <stdio.h>
#include <stdlib.h>
void sirala(int dizi[], int boy)
{
    if(boy>=0)
    {
        for(int i=0; i<boy; i++)
        {
            if( dizi[i]>dizi[i+1] )
            {
                int gecici = dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=gecici;
            }
        }
        sirala(dizi,boy-1);  // art�k en b�y�k eleman sa�da oldugu i�in en sa�a bakm�yoruz. Yani tarayaca��m�z eleman say�s� (boy) bir azalm�� oldu.
    }
}
int main()
{
    int n;
    printf("Kac elemanli dizi olusturmasini istersiniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0)); // Kod her �al��t�r�ld�g�nda farkl� say�lar olusturulmas� i�in srand(time(0)) kulland�k.
    printf("\nDizi:");
   for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d ", dizi[i]);
    }
    sirala(dizi,n);// Baska bir fonksiyonda dizi ile ilgili degisiklik yapabilmek i�in diziyi bu sekilde adresle g�nderdik.
    printf("\nSiralanmis Dizi: ");
    for(int j=0; j<n; j++)
    {
        printf("%d ", dizi[j]);
    }
    printf("\n");
    return 0;
}
