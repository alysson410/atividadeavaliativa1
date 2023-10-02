#include <stdio.h>

int main(){
float salario = 0;
char funcionario;

scanf("%c", &funcionario);
scanf("%f", &salario);

 if(funcionario == 'a'){
 printf("R$ %.2f", salario *= 1.05);
} else if(funcionario == 'b'){
    printf("R$ %.2f", salario *= 1.07);
} else if(funcionario == 'c'){
    printf("R$ %.2f", salario *= 1.08);
}
  return 0;
}
