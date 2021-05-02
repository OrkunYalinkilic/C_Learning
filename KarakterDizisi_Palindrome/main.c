#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter_dizisi[100];
    printf("Lutfen bir metin giriniz:");
    gets(karakter_dizisi); // Burada scanf yerine gets kullanmamýn sebebi bosluk girildiginde de diziyi tam olarak kullanabilmektir.
    //  Eðer scanf kullansaydým bosluk girildiginde derleyici sadece ilk kelimeyi alýp diziye atayacaktý.
    printf("%s\n",karakter_dizisi);
    int *pointer1;
    int *pointer2;
                                                     /*!!!*/
    for(pointer2=karakter_dizisi; *pointer2; pointer2++); // Burada ben pointer 2'nin karakter dizisinin son elemanýna gitmesini istedim.
    pointer2--;  //şu an pointer2 son elemanda bekliyor.  // pointer 2 karakter sizisinin ilk harfinden baþlayýp *pointer2'nin içerisinde
                                                          // bir deðer olana kadar gitti. O gittiði yer dizinin son elemanýndan sonraki
                                                          // \0 degeridir. Buna degilde bundan bir önceki(karakter dizisinin son harfi)
                                                          // elemana gitmesini istiyorum. Bunun için bu ýslemden sosnra pointer2 'yi bir
                                                          // azaltýyorum..
    int palindromlukBozulmadi=1;

    for(pointer1=karakter_dizisi; (palindromlukBozulmadi=1)&&(pointer1<pointer2); pointer1++,pointer2--)
    {
        if(*pointer1 != *pointer2){
            palindromlukBozulmadi=0;
        }
    }

    if(palindromlukBozulmadi==1)
    {
        printf("Girdiginiz \"%s\" metni palindromdur..  ",karakter_dizisi);
    }
    else if(palindromlukBozulmadi==0)
    {
        printf("Girdiginiz \"%s\" metni palindrom degildir.. ",karakter_dizisi);
    }

    return 0;
}
