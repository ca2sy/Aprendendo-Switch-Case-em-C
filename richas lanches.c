#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//variáveis//

int cod;
float preco;
int quant;
int controle1;


//tabela de lanches//

int main (){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	do {
printf (" _____________________________________________\n");
printf ("|LANCHES      |    CÓDIGO      |    PREÇO     |\n");
printf ("|_____________________________________________|\n");
printf ("|Cachorro     |      100       |     4,2      |\n");
printf ("|quente       |                |              |\n"); 
printf ("|_____________|________________|______________|\n");
printf ("|Bauru        |      101       |     3,3      |\n");
printf ("|simples      |                |              |\n"); 
printf ("|_____________|________________|______________|\n");
printf ("|Bauru        |      102       |     5,5      |\n");
printf ("|com ovo      |                |              |\n"); 
printf ("|_____________|________________|______________|\n");
printf ("|Hambuguer    |      103       |     6,2      |\n");
printf ("|             |                |              |\n"); 
printf ("|_____________|________________|______________|\n");
printf ("|Cheeseburguer|      104       |     5,3      |\n");
printf ("|             |                |              |\n"); 
printf ("|_____________|________________|______________|\n");
printf ("|Refrigerante |      105       |     4,5      |\n");
printf ("|             |                |              |\n"); 
printf ("|_____________|________________|______________|\n");





//entrada de dados//
printf ("                                                 \n");
printf ("Olá, seja bem vindo ao RICHAS LANCHES!! Por favor informe o código do seu pedido.\n");
scanf ("%d", &cod);

switch (cod)
{
	case (100):
		printf("Informe a quantidade de cachorro-quente que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 4.2);
		printf ("Seu pedido ficou por $f reais\n", preco);
			controle1 = 1;
		break;
	
	case (101):
			printf("Informe a quantidade de bauru simples que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 3.3);
		printf ("Seu pedido ficou por %f reais\n", preco);
			controle1 = 1;
		break;
    case (102):
			printf("Informe a quantidade de bauru com ovo que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 5.5);
		printf ("Seu pedido ficou por %f reais\n", preco);
			controle1 = 1;
		break;
	case (103):
			printf("Informe a quantidade de hambuguer que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 6.2);
		printf ("Seu pedido ficou por %f reais\n", preco);
			controle1 = 1;
		break;
    case (104):
			printf("Informe a quantidade de cheeseburguer que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 5.3);
		printf ("Seu pedido ficou por %f reais\n", preco);
		controle1 = 1;
		break;
	case (105):
			printf("Informe a quantidade de refrigerante que você quer.\n");
		scanf ("%d", &quant);
		preco = (quant * 4.5);
		printf ("Seu pedido ficou por %f reais\n", preco);
		controle1 = 1;
		break;
	default:
		controle1 = 0;
		printf ("Códgo inválido, por favor, tente novamente.\n");
		printf ("                                                 \n");
}



	}while (controle1 != 1);
	
	




}
