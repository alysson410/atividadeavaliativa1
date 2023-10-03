#include <stdio.h>
int main(){
    int a, b;
    

    printf("insira dois valores:");
    scanf("%d%d", &a, &b);

    if(a == b){
        printf("os valores lidos sao iguais\n");
        
    }else if(a > b){
        printf("eh maior que:%d\n", a, b);
        if(a % b == 0){
            printf("%d eh multiplo de\n", a, b);
        }else{
            printf("%d nao eh multiplo de\n", a, b);
 }

    } else{
        printf("%d eh maior que: %d\n", b, a);
    
if(b % a == 0){
    printf("%d eh multiplo de %d\n", b, a);
}else{
    printf("%d nao eh multiplo de %d\n", b, a);
}

    } 
    }
