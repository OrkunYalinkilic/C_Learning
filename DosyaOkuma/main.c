#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
       FILE *dosya;
       dosya=fopen("deneme.txt","r");
       char karakter;
       if(dosya!=NULL){
       karakter=getc(dosya);
       printf("%c",karakter);
       }
       fclose(dosya);
    */

        char kardiz1[10];
        char kardiz2[10];
        int sayi;

        FILE *dosya;
        if((dosya=fopen("deneme2    .txt","r"))!=NULL){ // dosya okundugunda null deðilse..
                                                    //parantezlere dikkat et.
         fscanf(dosya,"%s",&kardiz1);
        (dosya,"%d",&sayi);

         printf("%s %s %d",kardiz1,kardiz2,sayi);

        }
        else{

            printf("Dosya bulunamadi..");
        }

        fclose(dosya);


    FILE *dosya;
    int i=0;
    char dizi[50][30]; // string[30] gibi düşün.
    if((dosya=fopen("deneme3.txt","r"))!=NULL) // deneme3 denen þey varsa null(yalan) deðilse..
    {

        while(!(feof(dosya))) // dosyanýn sonuna gelene kadar.
        {
            fscanf(dosya,"%s",&dizi[i]);
            printf("%s ",dizi[i]);
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi..");
    }
    fclose(dosya);

    return 0;
}
