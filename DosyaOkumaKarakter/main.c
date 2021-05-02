#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *karakter;
    char satir[100];

    FILE *dosya;
    dosya=fopen("bilgi.txt","r");

    if(dosya==NULL)
    {

        printf("Dosya bulunamadi.");

    }

    else
    {

        karakter=fgets(satir,100,dosya);

        while(karakter!=NULL)
        {

            printf("%s",satir);
            karakter=fgets(satir,100,dosya);

        }

        fclose(dosya);
        printf("\nOkuma islemi tamamlandi.");

    }

    return 0;
}
