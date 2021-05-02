#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    if(sayi==1)
    {
        return 1;   // recursive fonksiyonlarda ana trik budur.
    }
    else
    {
        return sayi*faktoriyel(sayi-1);
    }
}
int main()
{
    int n;
    printf("N sayisini giriniz: ");
    scanf("%d",&n);
    printf("\n%d!=%d",n,faktoriyel(n));
    return 0;
}
