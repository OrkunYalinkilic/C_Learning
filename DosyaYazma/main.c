#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *dosya;

   dosya=fopen("ogrenci.txt","w"); // w=dosya olusturan komut

   char adSoyad[30];
   char bolum[20];
   char okul[20];

   printf("ADINIZ SOYADINIZ: "); // consola yaz�l�yor.
   gets(adSoyad);
   printf("BOLUMUNUZ: ");
   gets(bolum);
   printf("OKULUNUZ: ");
   gets(okul);

   fprintf(dosya,"%s\n%s\n%s\n",adSoyad,bolum,okul); // dosyaya yaz�l�yor.

   fclose(dosya);


    //NOT: c de string i %s ve gets ile sa�l�yoruz. Olu�tururken char tipinde
    //olusturulur..


}
