#include <stdio.h>
#include <stdlib.h>

void tekSayilar(int sayi)
{
    if(sayi%2==1)
    {
        if(sayi==1)
        {
            printf("%d ",sayi);
        }
        else
        {
            printf("%d ",sayi);
            tekSayilar(sayi-1);
        }
    }
    else
    {
        tekSayilar(sayi-1);
    }
}

int main()
{
    int n;
    printf("n sayisini giriniz: ");
    scanf("%d",&n);
    printf("n sayisina kadar olan tek sayilar\n");
    tekSayilar(n);
    return 0;
}
