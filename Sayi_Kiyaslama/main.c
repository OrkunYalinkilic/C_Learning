#include <stdio.h>
#include <stdlib.h>
#define dizi_Boyutu 12
int main()
{
    int dizi[dizi_Boyutu];
    int max,min;
    printf("Merhabalar..\nLutfen %d adet sayi giriniz: ",dizi_Boyutu);
    for(int i=0; i<dizi_Boyutu; i++){

        scanf("%d",&dizi[i]);
    }

    max=dizi[0];
    min=dizi[0];

    for(int j=1; j<dizi_Boyutu;j++){

        if(dizi[j]>max){
            max=dizi[j];
        }
        if(dizi[j]<min){
            min=dizi[j];
        }
    }
    printf("EN BUYUK: %d",max);
    printf("\nEN KUCUK: %d",min);



    return 0;
}
