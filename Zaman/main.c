#include <stdio.h>
#include <stdlib.h>

void Hesapla(int saniye){
int saat;
int dakika;
saat=saniye/3600;
dakika=(saniye%3600)/60;
saniye=(saniye%3600)%60;
printf("%d saat %d dakika %d saniye",saat,dakika,saniye);
}
int main()
{
    int saniye;
    printf("Saniye:");
    scanf("%d",&saniye);
    Hesapla(saniye);
    return 0;
}
