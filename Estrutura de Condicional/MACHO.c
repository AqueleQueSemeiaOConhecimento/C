#include <stdio.h>
#include <stdlib.h>

int main () {

int esporte, comida, bebida, higieni, cerveja, presente, creme, planta, espelho, carro, satisfacao;
int soma;


	
	printf("TABELA INTERNACIONAL DE GRADUACAO DE MACHO.\n");
	printf("Voce esta pronto para descobrir o que voce e, vai encarar?\n");
	printf("Pois bem, faca suas escolhas!\n");
	printf("Digite o numero correspondente a sua escolha\n");
    
	printf("Esporte Favorito?\n");
    printf("1. Futebol, automobilismo, sinuca, truco, pesca, esportes radicais\n");
    printf("2. Boliche, Golf, Polo\n");
    printf("3. Aerobica, Spinning\n");
    printf("4. Trilha, Patina��o no Gelo, Ginastica Olimpica, Crossfit\n");
    printf("5. Os mesmos anteriores, usando short de lycra\n");
    
    scanf("%d.\n", &esporte);
	
    printf("Comida favorita?\n");
	printf("1. Capivara, javali, gordura, comida muito apimentada\n");
    printf("2. Churrasco, Massas, Frituras\n");
    printf("3. Peixe e salada\n");
    printf("4. Sanduiches integrais\n");
    printf("5. Aves acompanhadas de vegetais cozidos no vapor\n");
    scanf("%d.\n", &comida);
    
    printf("Bebidas favoritas?\n");
    printf("1. Cachaca, cerveja, whisky\n");
    printf("2. Vinho, vodka\n");
    printf("3. Caipifruta, Campari\n");
    printf("4. Suco de frutas normais e licores doces\n");
    printf("5. Suco de acai, carambola, cupuacu, com adocante\n");
    scanf("%d.\n", &bebida);
    
    printf("Higieni?\n");
    printf("1. Toma banho rapido, usa sab�o em barra\n");
    printf("2. Toma banho rapido, usa xampu e esquece das orelhas ou do pescoco\n");
    printf("3. Toma banho no capricho pra sair com uma gostosa\n");
    printf("4. Demora meia hora e usa sabonete liquido\n");
    printf("5. Toma banho com sais e espuma na banheira\n");
    scanf("%d.\n", &higieni);
    
    printf("Cerveja?\n");
    printf("1. Gelada e em grandes quantidades\n");
    printf("2. So cervejas extra, premium e importadas\n");
    printf("3. So uma as vezes para matar a sede\n");
    printf("4. Com limao e guardanapo em volta do copo\n");
    printf("5. Sem alcool\n");
    scanf("%d.\n", &cerveja);
    
    printf("Presentes que gosta de ganhar?\n");
    printf("1. Ferramentas\n");
    printf("2. Garrafa de whisky\n");
    printf("3. Eletronicos, informatica, roupas de homem\n");
    printf("4. Flores\n");
    printf("5. Velas aromaticas, perfumes,doces caramelados, bombons\n");
    scanf("%d.\n", &presente);

	printf("Cremes?\n");
	printf("1. So creme dental\n");
	printf("2. Protetor solar so na praia e piscina\n");
	printf("3. Usa cremes no verao\n");
	printf("4. Usa cremes o ano todo\n");
	printf("5. Nao vive sem hidratante\n");
	scanf("%d.\n", &creme);
	
	printf("Plantas?\n");
	printf("1. Nem pra comer\n");
	printf("2. Come algumas de vez em quando\n");
	printf("3. Tem umas no quintal, mas nem sao regadas\n");
	printf("4. Tem plantinhas na varanda do apartamento\n");
	printf("5. Rega, poda e conversa com as flores do jardim\n");
	scanf("%d.\n", &planta);
	
	printf("Relacao com o espelho\n");
	printf("1. Nao usa\n");
	printf("2. Usa para fazer barba e pentear cabelo\n");
	printf("3. Admira sua pele e observa seus musculos\n");
	printf("4. Idem c, e ainda analisa a bunda\n");
	printf("5. Admira-se com diferentes camisas e penteados\n");
	scanf("%d.\n", &espelho);
	
	printf("Carros\n");
	printf("1. Marvericks V8\n");
	printf("2. Opala 6cc\n");
	printf("3. Omega ou qualquer 6cc Blazer, Hilux, Ranger, BMW\n");
	printf("4. Veronao 95 Reliquia, Gol, Vectra, Fiesta, Fiat , Saveiro\n");
	printf("5. Civic, Corolla, Ceratto, Cruze\n");
	printf("6. Nissan March e Honda FIT\n");
	printf("7. Fox\n");
	printf("8. Peugeot 207, C3 e Ford KA\n");
	scanf("%d.\n", &carro);
	
	printf("Satisfacao com as classificacoes acima\n");
	printf("1. Aqueles que estao morrendo de rir\n");
	printf("2. Nao acharam graca\n");
	printf("3. Nao concordam\n");
	scanf("%d.\n", &satisfacao);
	
	soma = esporte + comida + bebida + higieni + cerveja + presente + creme + planta + espelho + carro + satisfacao;

   if(soma < 11 ) {
   	printf("Criatura Ancestral\n");
   }
   
   if(soma == 11) {
   	printf("TROGLODITA\n");
   }
   
   if(soma > 11 && soma < 15){
   	printf("Destro�ador\n");
   }
	
	if(soma >15 && soma < 20){
		printf("Conan\n");
		}
	
	if(soma >20 && soma <24) {
		printf("Macho\n");
	}	
	
	if(soma > 24 && soma < 27){
		printf("Homem moderno\n");
	}
	
	if(soma >27 && soma < 30){
		printf("Tendencias Gays\n");
	}
	
	if(soma >30 && soma < 35){
		printf("Bixa sob controle\n");
	}
	
	if(soma > 35 && soma <40){
		printf("Bixa Assumida\n");
	}
	
	if(soma >40 && soma < 45) {
		printf("Gazela Saltitante\n");
	}
 
    if(soma >= 45) {
    	printf("Perdidamente Gay\n");
	}
	
  
}
