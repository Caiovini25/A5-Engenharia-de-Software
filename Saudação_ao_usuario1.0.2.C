include <stdio.h>
include <stdlib.h>
include <locale.h>
int x;

int main(){

setlocale(LC_ALL, "Portuguese");

printf("Olá, seja bem-vindo usuário!\n\n");
printf("Aperte 1 para exibir a mensagem novamente ou 0 para encerrar o programa: ");
scanf(" %d",&x);

while (x==1){

printf("\nOlá, seja bem-vindo usuário!\n\n");
printf("Aperte 1 para exibir a mensagem novamente ou 0 para encerrar o programa: ");
scanf(" %d",&x);

  if (x!=1)

return 0;

}
