#include <stdio.h>
#include <stdlib.h>

int topla(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a+topla(a-1);   // en sonunda topla(1) i �a��r�r. O da 1dir. o da toplan�r ve biter.
    }
}
int main()
{
    int n;
    printf("n sayisini giriniz: ");
    scanf("%d",&n);
    printf("Toplam: %d",topla(n));
    return 0;
}
