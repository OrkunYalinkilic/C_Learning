#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar_Dizisi[100];

    printf("Metni giriniz: ");
    gets(kar_Dizisi);

    char *pointer;  // char karakterlerinin adresi de char olmal�. Bundan dolay� char tipinde bir pointer tan�ml�yoruz.

    for(pointer=kar_Dizisi; *pointer; pointer++ ); // pointer'�n icerisinde bir deger olana kadar.

        printf("\n \"%s\" metninin boyu: %d",kar_Dizisi,pointer-kar_Dizisi);

    return 0;
}
