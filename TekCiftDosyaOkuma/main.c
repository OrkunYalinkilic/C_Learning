#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char karakter;
    FILE *dosya;
    dosya=fopen("tekcift.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.");
    }

    else
    {
        printf("Bir sayi giriniz: ");
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                fprintf(dosya,"%d = TEK\n",i);
            }

            else
            {
                fprintf(dosya,"%d = CIFT\n",i);
            }
        }

        fclose(dosya);
        printf("Dosyaya yazma islemi tamamlandi.\n");
    }

    dosya=fopen("tekcift.txt","r");

    printf("Dosya okunuyor..\n");

    karakter=getc(dosya);

    while(karakter!=EOF)
    {
        putchar(karakter);
        karakter=getc(dosya);
    }

    fclose(dosya);
    printf("Dosya okuma islemi tamamlandi.\n");

    return 0;
}
