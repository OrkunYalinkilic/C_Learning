#include <stdio.h>
#include <stdlib.h>
#define X 3
#define Y 2
void dizi_olustur(int dizi[X][Y])
{
    printf("3x2'lik dizi giriniz..\n");

    for(int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
}
void dizi_goruntuleme(int dizi[X][Y])
{
    printf("\nOlusturulan Dizi Su Sekilde Goruntulenmektedir..\n");
    for(int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }
}
void dizi_calculator(int dizi[X][Y], int *max, int *min, int *toplam)
{
    *toplam=0;
    *max=*min=dizi[0][0];
    for(int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            if(dizi[i][j]<*min)
            {
                *min=dizi[i][j];
            }
            if(dizi[i][j]>*max)
            {
                *max=dizi[i][j];
            }
            *toplam+=dizi[i][j];
        }
    }
}

int main()
{
    int toplam,max,min;
    int dizi[X][Y];
    dizi_olustur(dizi);
    dizi_goruntuleme(dizi);
    dizi_calculator(dizi,&max,&min,&toplam);
    printf("\nDizinin en buyuk elemani: %d",max);
    printf("\nDizinin en kucuk elemani: %d",min);
    printf("\nDizinin elemanlari toplami: %d",toplam);
    return 0;
}


