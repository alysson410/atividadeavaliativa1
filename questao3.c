#include <stdio.h>

int main(){
    int cadsenha;
    int senha;
   

   scanf("%d", &cadsenha);
   printf("senha cadastrada: %d\n", cadsenha);
      scanf("%d", &senha);

if(senha == cadsenha){
printf("senha valida!\n");
} else {
    printf("senha invalida!\n");
while(1){

    scanf("%d", &senha);
    if(senha == cadsenha){
        printf("senha valida!\n");
        break;
    } else{
        printf("senha invalida!\n");
    }
}
}
    return 0;
}