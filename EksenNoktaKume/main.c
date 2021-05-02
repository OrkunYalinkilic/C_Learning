#include <stdio.h>
#include <stdlib.h>

typedef struct nokta{
char isim[10];
float eksen_x;
float eksen_y;
}nokta;

void noktayi_yazdir(nokta a[],int n){  /*a nýn dizi oldugunu belirtmek onemli*/

    for(int i=0; i<n; i++){ /* %s onemli */
        printf("%s: (%.2f,%.2f)\n",a[i].isim,a[i].eksen_x,a[i].eksen_y);
    }
}
int main()
{
    nokta kume[6]={{"besiktas",3,4},{"sisli",2,8},{"ortakoy",1,6},{"uskudar",8,8},{"kadikoy",11,7},{"sariyer",9,18},};
    noktayi_yazdir(kume,6);
    return 0;
}
