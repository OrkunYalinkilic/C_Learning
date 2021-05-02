#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;

    FILE *dosya;
    dosya=fopen("bilgi.txt","r");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.");
    }

    else
    {

        karakter=getc(dosya);

        while(karakter!=EOF)
        {
            putchar(karakter);
            //printf("%c",karakter);
            karakter=getc(dosya);
        }

        printf("\nOkuma islemi tamamlandi.");
        fclose(dosya);

    }

    return 0;
}
