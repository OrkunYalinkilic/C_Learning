
#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* FILE *dosya;

   dosya=fopen("ogrenci.txt","a");

   char adSoyad[30];
   char bolum[20];
   char okul[20];

   printf("ADINIZ SOYADINIZ: ");
   gets(adSoyad);
   printf("BOLUMUNUZ: ");
   gets(bolum);
   printf("OKULUNUZ: ");
   gets(okul);

   fprintf(dosya,"%s\n%s\n%s\n",adSoyad,bolum,okul);

   fclose(dosya); */

   FILE *dosya;
   dosya=fopen("deneme.txt","a");
   fputs("\nMerhaba denemeeee dosyasi*",dosya); //fputs()-> dosyaya karakter dizisi kaydedþyor.
   fclose(dosya);



}

