#include <stdio.h>
#include <stdlib.h>

    int faktoriyel(int *sayi){

        int carpim=1;

        for(int i=1; i<=(*sayi);i++){

            carpim *= i;
        }

    return carpim;


    }


//Pointer kullanarak prototipi int faktoriyel(int *sayi) seklinde olan fonksiyonla faktoriyel hesabý yapmak.
int main()
{
    int n;

    printf("Sayiyi giriniz: ");
    scanf("%d",&n);
    printf("%d! = %d",n,faktoriyel(&n));







   return 0;
}
