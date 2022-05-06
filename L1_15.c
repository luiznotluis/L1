/* (BOCA:L1_15) Problema: Faça um programa que diga se o algarismo da ordem de um 
número (unidade, dezena ou centena, dependendo do que for informado) é par ou 
ímpar. Exemplos: se o número dado fosse 123 e a ordem de interesse fosse a 
unidade, então a resposta seria ÍMPAR, pois 3 é o algarismo da unidade; se o número 
dado fosse 2123 e a ordem de interesse fosse a dezena, então a resposta seria PAR, 
pois 2 é o algarismo da dezena; se o número dado fosse 45 e a ordem de interesse 
fosse a centena, então a resposta seria PAR, pois o algarismo da centena seria um 
zero (considerando 45 igual a 045). */

/*• Entrada: Um número inteiro n (0 ≤ n ≤ 99999) seguido pela ordem de interesse (1, 2 ou 3). 
A ordem (unidade, dezena ou centena) é representada por um número (1, 2 ou
respectivamente).

• Saída: Imprimir “PAR” se o algarismo da ordem de interesse for par e “IMPAR” caso 
contrário.*/

/*• Exemplo de Entrada:
1 1
1 2
234 3
234 2
234 1
345 3
345 2
345 1

• Exemplo de Saída:
IMPAR
PAR
PAR
IMPAR
PAR
IMPAR
PAR
IMPAR */

#include<stdio.h>

int main (){
  int numero=1, unidade=1, dezena=10, centena=100, milhar=1, dezMil=1, ordem=4; 
  int aux=8;

  scanf("%d %d", &numero, &ordem);

    dezMil=numero/10000;
    milhar=((numero%10000))/1000;
  
    centena=(numero-(dezMil*10000)-(milhar*1000));
    centena=centena/100;
  
    dezena=(numero-(dezMil*10000)-(milhar*1000)-centena*100);
    dezena=dezena/10;
  
    unidade=((numero-(dezMil*10000)-(milhar*1000)-centena*100-dezena*10));
     
//      printf("%d %d %d %d %d", dezMil, milhar, centena, dezena, unidade);

  if((numero>9999)||(numero<10000)&&(numero>=1000)||(numero<1000)&&(numero>=100)||(numero<100)&&(numero>=10)||(numero<10)&&(numero>=0))
  {
    switch(ordem)  {
      case 1: if(unidade%2==0)
              printf("PAR"); else printf("IMPAR");
        break;
      case 2: if(dezena%2==0)
              printf("PAR"); else printf("IMPAR");  
        break;      
      case 3: if(centena%2==0)
              printf("PAR"); else printf("IMPAR");  
        break;      
      case 4: if(milhar%2==0)
              printf("PAR"); else printf("IMPAR");  
        break;      
      case 5: if(dezMil%2==0)
              printf("PAR"); else printf("IMPAR"); 
        break;
    }
  }

/*se pa o problema nem e a escrita (na maioria das vezes eh) mas sim a logica... slk*/
  
return 0;
}