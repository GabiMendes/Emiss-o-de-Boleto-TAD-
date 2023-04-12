#include <stdio.h>
#include "boleto.h"

int main(void) {

  /*Faça um programa para emitir o carnê de pagamento de uma compra parcelada sem entrada.
A data da compra, o valor a ser parcelado e o número (n) de parcelas será perguntado ao usuário.

Em cada boleto deverá constar o número do boleto (1 a n), a data do vencimento e o valor do boleto.
O intervalo entre as parcelas é de 20 dias.
*/
  
  tData *data_compra, *data_vencimento;
  tBoleto *Boleto;
  int dia, mes, ano, numero_parcelas, dias=1, i;
  float valor_parcelado;

  printf("Qual é o dia da compra? ");
  scanf("%d", &dia);

  printf("Qual é o mês da compra? ");
  scanf("%d", &mes);

  printf("Qual é o ano da compra?  ");
  scanf("%d", &ano);

  printf("Valor a ser parcelado?  ");
  scanf("%f", &valor_parcelado);

  printf("N de parcelas?  ");
  scanf("%d", &numero_parcelas);

  data_compra = dta_cria(dia, mes, ano);

  for(i=1; i<=numero_parcelas;i++)
    {
      data_vencimento = dta_intervalo(data_compra, dias);
      Boleto=bol_cria(i, valor_parcelado / numero_parcelas, data_vencimento);
      printf("\n");
      bol_exibe(Boleto);
      bol_libera(Boleto);
      dias+=20;
    }

  return 0;
  
}
