#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main()
{
    char *pointer1,*pointer2;
    char dizi[MAX]= {'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
    char kopya_Dizi[MAX];
    //Burada dizimizin elemanlarýna pointerla seslenmek icin diziyi pointera atamalýyýz.

    pointer2=kopya_Dizi;

    for(pointer1=dizi; pointer1<dizi+MAX; pointer1++)
    {
        *pointer2=*pointer1;
        pointer2++;
    }

    printf("Original dizi: ");

    for(pointer1=dizi; pointer1<dizi+MAX; pointer1++)
    {
        printf("%c ",*pointer1);
    }

    printf("\nKopyalanmis dizi: ");

    for(pointer2=kopya_Dizi; pointer2<kopya_Dizi+MAX; pointer2++)
    {
        printf("%c ",*pointer2);
    }

    return 0;
}
