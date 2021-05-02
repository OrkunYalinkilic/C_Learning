#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir=12;
    int sutun;
    printf("Kac sutun girmek istersiniz?: ");
    scanf("%d",&sutun);
    int dizi[satir][sutun];

    printf("\n\n p");
    for(int i=0; i<sutun; i++)
    {
        printf("%4d",i);
    }
    printf("\n n\n");
    for(int i=0; i<=sutun; i++)
    {
        printf("----");
    }
    printf("\n");

    //dizimizin elemanlarýný tanýmlayalým.Sonrasýnda ekrana bastýrýrýz..

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==0||j==0)
            {
                dizi[i][j]=1;
            }

            else if(i==j)
            {
                dizi[i][j]=1;
            }

            else
            {
                dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
            }
        }
    }

    for(int i=0; i<satir; i++)
    {

        printf("%2d--",i);

        for(int j=0; j<=i; j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
