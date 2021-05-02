#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carpimtablosu[10][10];

    printf("    I");
    for(int i=1; i<=10; i++)
    {
        printf("%4d",i);
    }
    printf("\n");

    for(int i=0; i<=11; i++)
    {
        printf("----");
    }
    printf("\n");

    for(int i=0; i<10; i++)
    {
        printf("%5d",i+1);

        for(int j=0; j<10; j++)
        {
            carpimtablosu[i][j]=(i+1)*(j+1);
            printf("%4d",carpimtablosu[i][j]);
        }
        printf("\n");
    }
    return 0;
}
