#include <stdio.h>
#include <stdlib.h>
int fibonacci(int x){
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return(fibonacci(x-2)+fibonacci(x-1));
    }
}
int main()
{
    int adet;
    printf("Kac adet fibonacci uretmek istediginizi giriniz:");
    scanf("%d",&adet);
    printf("Fibonacci Dizisi: ");
    for(int i=1; i<=adet; i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
