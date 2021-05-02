#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kar_Dizi[100];
    char *point;
    char silinecek;
    printf("Karakter dizisini giriniz:");
    gets(kar_Dizi);
    printf("Silmek istediginiz karakteri giriniz: ");
    scanf("%c",&silinecek);

    for(point=kar_Dizi; *point; point++) //Dizinin basindan sonuna kadar...
    {
        if(*point==silinecek)
        {
            strcpy(point,point+1); //Yani bu karakteri gec.atla.
        }
    }

    printf("Silindikten sonra dizinin son durumu:%s ",kar_Dizi);
    return 0;
}
