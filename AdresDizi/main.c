#include <stdio.h>
#include <stdlib.h>
void tersYazi(char metin[],int boy)
{
    if(boy>0)
    {
        printf("%c",metin[boy-1]);
        tersYazi(metin,boy-1);
    }
}
int main()
{
    char yazi[50];
    printf("Yaziyi giriniz: ");
    gets(yazi); //Burada yaziyi b�yle adres �eklinde almal�y�m. Zaten gets dedi�inde adresle al�nmas� gerektigi belirtiliyor.
    int boy=strlen(yazi);
    tersYazi(yazi,boy);//yazi dizisi uzerinde degisiklik yapabilmem i�in adres �eklinde g�ndermeliyim.
    return 0;
}
