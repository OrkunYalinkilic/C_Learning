#include <stdio.h>
#include <stdlib.h>
void Seri(int baslangic, int bitis, int artim)
{
  if(baslangic<=bitis){

    printf("%d ",baslangic);
    Seri(baslangic+artim,bitis,artim);  // baslangic=baslangic+artim oldu.

  }
}
int main()
{
    int bslngc,bts,art;
    printf("Baslangic degerini giriniz: ");
    scanf("%d",&bslngc);
    printf("Bitis degerini giriniz: ");
    scanf("%d",&bts);
    printf("Artim miktarini giriniz: ");
    scanf("%d",&art);
    Seri(bslngc,bts,art);
    return 0;
}
