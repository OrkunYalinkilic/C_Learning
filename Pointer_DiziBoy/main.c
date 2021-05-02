#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar_Dizisi[100];

    printf("Metni giriniz: ");
    gets(kar_Dizisi);

    char *pointer;  // char karakterlerinin adresi de char olmalý. Bundan dolayý char tipinde bir pointer tanýmlýyoruz.

    for(pointer=kar_Dizisi; *pointer; pointer++ ); // pointer'ýn icerisinde bir deger olana kadar.

        printf("\n \"%s\" metninin boyu: %d",kar_Dizisi,pointer-kar_Dizisi);

    return 0;
}
