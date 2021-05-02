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
        sirala(dizi,boy-1);  // artýk en büyük eleman saðda oldugu için en saða bakmýyoruz. Yani tarayacaðýmýz eleman sayýsý (boy) bir azalmýþ oldu.
    }
}
int main()
{
    int n;
    printf("Kac elemanli dizi olusturmasini istersiniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0)); // Kod her çalýþtýrýldýgýnda farklý sayýlar olusturulmasý için srand(time(0)) kullandýk.
    printf("\nDizi:");
   for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d ", dizi[i]);
    }
    sirala(dizi,n);// Baska bir fonksiyonda dizi ile ilgili degisiklik yapabilmek için diziyi bu sekilde adresle gönderdik.
    printf("\nSiralanmis Dizi: ");
    for(int j=0; j<n; j++)
    {
        printf("%d ", dizi[j]);
    }
    printf("\n");
    return 0;
}
