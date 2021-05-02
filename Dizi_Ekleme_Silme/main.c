#include <stdio.h>
#include <stdlib.h>
   void ekle(int A[],int elemanSayisi,int kacinci,int eklenecekDeger)
    {
        for(int i=elemanSayisi-1; i>=kacinci-1; i--){         //>= kýsmýna dikkat et!!!!
            A[i+1]=A[i];                                      //A[i]= A[i+1] deðil..!!
        }
        A[kacinci-1]=eklenecekDeger;

       for(int k=0; k<=elemanSayisi; k++){

        printf("%3d",A[k]);
       }

    }
int main()
{
    int n;
    printf("Kac elemanli bir dizi olusturmak istersiniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0; i<n; i++){
        dizi[i]=rand()%100;
    }
    for(int j=0; j<n;j++){
        printf("%3d",dizi[j]);
    }
    int sira,deger;
    printf("\nKacinci siraya eleman eklemek istersiniz: ");
    scanf("%d",&sira);
    printf("%d. siraya hangi sayiyi eklemek istersiniz: ",sira);
    scanf("%d",&deger);
    ekle(dizi,n,sira,deger);
    return 0;
}
