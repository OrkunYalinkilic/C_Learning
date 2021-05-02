#include <stdio.h>
#include <stdlib.h>

//Pointer yardimiyla dizideki elemanlarin en buyugunu ve en kucugunu bulan program
//NOT: Dizinin elemanlari kullanicidan alinacak.(10)
int main()
{
    int dizi[10];
    int *pointer;

    printf("10 adet sayi giriniz:\n");
    for(pointer=dizi;pointer<dizi+10;pointer++){  // Buradaki pointer ilk basta dizinin ilk elemanidir.
        scanf("%d",pointer);                      // ekrandaki degeri ilk elemana atar. Ve sonra bir artar.
       }                                          //2.elemana gecer ve ona degeri atar. Boylece dizinin
    //Burada *pointer kullanýlmadý.Cunku          //sonuna kadar her elemana degerleri atar.
    //orada normalde & olacaktý. &*pointer
    // diyince &* birbirini goturdu.


    int max=*dizi; //dizinin ilk elemaninin GOSTERDIGI DEGER=max
    int min=*dizi; //dizinin ilk elemaninin GOSTERDIGI DEGER=min

    for(pointer=dizi+1; pointer<dizi+10;pointer++){

            if(*pointer>max){

                    max=*pointer;
            }

            if(*pointer<min){

                min=*pointer;
            }
    }

    printf("En buyuk deger: %d ",max);
    printf("\nEn kucuk deger: %d ",min);

    return 0;
}
