#include <stdio.h>
#include <stdlib.h>
#define MAX 40

void boy_bul(char dizi[MAX],int *a){
/*int sayac=0;
int i=0;*/

   /* while(dizi[i]!='\0'){

        sayac++;
        i++;
    }
*a=i;*/

    int m=0;
    for( m=0;dizi[m]!='\0'; m++);
    *a=m;

}

void ortak_bulucu(char birdizi[MAX],char ikidizi[MAX], int *sayi){ // parametre olarak adres gonderildigi zaman
int boy1,boy2;                                                     // bir sey dondurulmez. fonksiyon void olur.
                                                                   // adresteki deger degistirilir.
*sayi=0;
boy_bul(birdizi,&boy1);
boy_bul(ikidizi,&boy2);

    for(int i=0; i<boy1; i++){

        for(int j=0; j<boy2; j++){

            if(birdizi[i]==ikidizi[j]){

                *sayi=*sayi+1; // pointer old için *sayi++ yapma!!
            }
        }
    }
}

int main()
{
    char dizi[MAX];
    char dizi2[MAX];
    int a=0;
    int i=0;
    int k=0;
    int x;
    printf("Lutfen bir cumle veya kelime giriniz:");


    do{scanf("%c",&dizi[i]);
       i++;
      }
    while(dizi[i-1]!='\n');

    dizi[i-1]='\0';

    printf("\n");
    while(dizi[k]!='\0'){

        printf("%c",dizi[k]);
        k++;
    }

    boy_bul(dizi,&a);
    printf("\n%d",a);
    printf("\nLutfen 2 kelime giriniz: ");
    scanf("%s %s",&dizi,&dizi2);
    ortak_bulucu(dizi,dizi2,&x);
    printf("\n%s ile %s kelimelerinin %d adet ortak harfi vardir..",dizi,dizi2,x);

    return 0;
}
