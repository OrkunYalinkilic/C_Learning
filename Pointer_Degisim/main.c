#include <stdio.h>
#include <stdlib.h>

void Degistir(int *pointer1, int *pointer2)
{
    int sanal=*pointer1;    // sanal degiskeni pointer 1in gösterdigi deger oldu.
    *pointer1=*pointer2;// pointer 1 nin gösterdigi deger yani y=pointer 2nin gösterdigi deger oldu.
    *pointer2=sanal;   // pointer 2 nin gösterdigi deger yani y=pointer 1in gösterdigi deger oldu.
}

int main()
{
    int x=15,y=10;
    printf("Degistirmeden once: %d %d\n",x,y);
    Degistir(&x,&y);
    printf("Degistirdikten sonra: %d %d",x,y);

    return 0;
}
