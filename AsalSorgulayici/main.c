#include <stdio.h>
#include <stdlib.h>

int Asallik_Sorgulayici(int sayi,int yarim)
{
    if(yarim==1)
    {
        return 1;
    }
    else if(sayi%yarim==0)
    {
        return 0;
    }

    else if(sayi%yarim!=0)
    {
        Asallik_Sorgulayici(sayi,yarim-1);
    }
}
int main()
{
    int n;
    printf("n sayisini giriniz:");
    scanf("%d",&n);
    printf("Bu sayiya kadar olan asal sayilar\n");
    for(int i=2; i<=n; i++)
    {
        int test;
        int yarisi=i/2;
        test=Asallik_Sorgulayici(i,yarisi);
        if(test==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
