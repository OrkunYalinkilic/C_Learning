#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[15];

    FILE *dosya;

    dosya=fopen("bilgi.txt","a");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.");
    }

    else
    {
        printf("Lutfen cumleyi giriniz: ");
        gets(cumle);

        for(int i=0; cumle[i]; i++)
        {
            putc(cumle[i],dosya); // putc dosyaya BÝR KARAKTER yazmayý saðlýyor.
        }

        putc('\n',dosya);

        fclose(dosya);
        printf("Dosyaya yazma islemi tamamlandi.");


    }

    return 0;
}
