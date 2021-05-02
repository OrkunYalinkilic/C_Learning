#include <stdio.h>
#include <stdlib.h>

    void Birlestir(int A[],int B[],int C[],int N,int K){

    for(int i=0; i<N; i++){

       C[i]=A[i];
    }
    for(int j=0;j<K;j++){

       C[N+j]=B[j];

    }
}

int main()
{
    /*
    Kullanıcı tarafından girilen A ve B dizilerine sırasıyla N ve K adet tamsayı girilmektedir.
    Bu iki dizinin birleştirilerek tek bir dizi haline getirilmesini sağlayan C programını
    aşağıdaki fonksiyon prototipini kullanarak yazınız.
    void birlestir(int A[],int B[],int C[],int N,int K)
    */
        int N,K;
        printf("Ilk dizinin eleman sayisini giriniz:");
        scanf("%d",&N);
        int birinci_Dizi[N];
        for(int i=0; i<N;i++){
            printf("%d.elemani giriniz: ",i+1);
            scanf("%d",&birinci_Dizi[i]);
        }
        printf("Ikinci dizinin eleman sayisini giriniz:");
        scanf("%d",&K);
        int ikinci_Dizi[K];
        for(int j=0; j<K; j++){

            printf("%d. elemani giriniz: ",j+1);
            scanf("%d",&ikinci_Dizi[j]);
        }
        int birlesim_Dizisi[N+K];
        Birlestir(birinci_Dizi,ikinci_Dizi,birlesim_Dizisi,N,K);
        printf("Dizilerin birlestirilmis hali: ");
        for(int l=0; l<N+K; l++){

            printf("%3d",birlesim_Dizisi[l]);
        }

    return 0;
}
