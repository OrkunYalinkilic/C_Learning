#include <stdio.h>
#include <stdlib.h>
void sekil_Olustur(int kenar,char karakter)
{
    printf("\n");
    for(int i=1; i<=kenar; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for(int j=0; j<=(2*kenar)-(2*i); j++)
        {
            printf("%c",karakter);
        }
        for(int i=1; i<=kenar-1; i++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int k=1; k<=kenar; k++)
    {
        for(int i=1; i<=kenar-k; i++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*k-1; j++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }
}
int main()
{
    // char karakter olucuktan sonra hemen alınmalıdır.Yoksa devam etmez kod. BUGDIR. DİKKAT!!
    int kenar;
    char karakter;
    printf("Sekilin olusacagi karakteri giriniz: ");
    scanf("%c",&karakter);
    printf("Lutfen Kenar sayisini giriniz: ");
    scanf("%d",&kenar);
    sekil_Olustur(kenar,karakter);
    return 0;
}
