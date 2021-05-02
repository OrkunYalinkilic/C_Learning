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
    gets(yazi); //Burada yaziyi böyle adres þeklinde almalýyým. Zaten gets dediðinde adresle alýnmasý gerektigi belirtiliyor.
    int boy=strlen(yazi);
    tersYazi(yazi,boy);//yazi dizisi uzerinde degisiklik yapabilmem için adres þeklinde göndermeliyim.
    return 0;
}
