#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Bubble Sort Algoritmasý
    int N;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&N);

    int dizi[N];

    printf("Dizinin elemanlarini giriniz: ");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&dizi[i]);
    }

    printf("Dizinin elemanlari: ");
    for(int i=0; i<N; i++)
    {
        printf("%d ",dizi[i]);
    }

    printf("\nDizinin sirali sekli: ");

    for(int i=0; i<N-1; i++ )
    {
        for(int j=0; j<N-1-i; j++)  //  //'lý kýsýmlar her calýstýgýnda anlýk
        {
            if(dizi[j]>dizi[j+1]) //    en buyuk eleman en saða gelmiþ olacak.
            {
                int gecici=dizi[j];//
                dizi[j]=dizi[j+1];//
                dizi[j+1]=gecici;//
            }//
        }
    }
    for(int i=0; i<N; i++){
        printf("%d ",dizi[i]);
    }

    return 0;
}
