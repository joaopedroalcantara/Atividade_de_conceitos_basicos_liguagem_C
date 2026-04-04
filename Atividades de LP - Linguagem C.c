#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(){

int opcao = 0;

while(opcao != 33){

printf("\n\n********************MENU DE OPCOES******************** \n"
"1) Media Fatec (If) \n"
"2) Media Fatec (if/else/else if) \n"
"3) AJuste de Preco (if/else/else if) \n"
"4) AJuste de Preco (Switch case) \n"
"5) Fatorial (do/while) \n"
"6) Fibonacci (do/while) \n"
"7) P.A (do while) \n"
"8) Fatorial (while) \n"
"9) Fibonacci (while) \n"
"10) P.A (while) \n"
"11) Fatorial (for) \n"
"12) Fibonacci (for) \n"
"13) P.A (for) \n"
"14) Encontrar o maior numero \n"
"15) Encontrar o menor numero \n"
"16) Ler um conjunto de valores e imprimir a ordem inversa \n"
"17) Ler um conjunto de valores e um multiplicar e exibir os resultados \n"
"18) Lista de valores em exponencicao \n"
"19) Lista de valores em raiz quadrada \n"
"20) Comparar strings (Iguais ou Diferentes?)  \n"
"21) Indentifica palindromo \n"
"22) Indentifica palindromos multi-frases \n"
"23) Passar string para maiuscuo \n"
"24) Passar string para minusculo \n"
"25) Concatena duas strings \n"
"26) Conjunto de nomes exibido em maiusculo \n"
"27) Multiplica matriz de numeros \n"
"28) Somar duas matrizes \n"
"29) Subtrair duas matrizes \n"
"30) Multiplicar duas matrizes \n"
"31) Cara ou Coroa \n"
"32) Jogo de cartas 21 \n"
"33) Sair"

"\nEscolha uma das Opcoes acima: ");

scanf("%i", &opcao);

fflush(stdin);

switch(opcao){

    case 1:{

        double p1;
        double t1;
        double b1;

        double p2;
        double t2;
        double b2;

        double media;
        double pf;

        system("cls");

        printf("Vamos calcular a sua Media: \n");
		
        printf("\n Digite a nota da P1: ");
        scanf("%lf", &p1);

        p1 *= 0.7;



        fflush (stdin);



        printf("\n Digite a nota da T1: ");

        scanf("%lf", &t1);

        t1 *= 0.3;
        b1 = p1 + t1;

        printf(" Media do primeiro Bimestre: %2.lf \n",b1);

        // b2

        printf("\n Digite a nota da P2: ");
        scanf("%lf", &p2);

        p2 *= 0.6;

        fflush (stdin);

        printf("\n Digite a nota da T2: ");
        scanf("%lf", &t2);

        t2 *= 0.4;

        b2 = p2 + t2;

        printf(" Media do segundo Bimestre: %2.lf \n", b2);


        media = (b1 + b2) /2;        

        printf(" Media do Semestre: %2.lf \n", media);


        if (media >= 6){

            printf (" APROVADO ! Com media:  %2.lf ", media);

        }



        if (media < 6){

            printf (" Fazer a Prova final! ");
            printf ("\n Digite a nota da prova final: ");
            scanf ("%lf", &pf);

            double mediaF = media;
            mediaF = (pf + media)/2;

            if (mediaF >= 6){

            printf(" \n APROVADO ! Com media:  %2.lf", mediaF);        

            }

            if (mediaF < 6){

                printf("\n REPROVADO !");

            }

        } 

        break;

    }


    case 2:{

        double p1;
        double t1;
        double b1;

        double p2;
        double t2;
        double b2;

        double media;
        double pf;
        double mediaF;

        system("cls");
        printf(" Vamos calcular a sua Media: ");

        printf("\n Digite a nota da P1: ");
        scanf("%lf", &p1);

        p1 *= 0.7;


        fflush (stdin);


        printf("\n Digite a nota da T1: ");
        scanf("%lf", &t1);

        t1 *= 0.3;


        b1 = p1 + t1;


        printf(" Media do primeiro Bimestre: %2.lf \n",b1);


        // b2


        printf("\n Digite a nota da P2: ");
        scanf("%lf", &p2);

        p2 *= 0.6;


        fflush (stdin);


        printf("\n Digite a nota da T2: ");
        scanf("%lf", &t2);

        t2 *= 0.4;


        b2 = p2 + t2;


        printf(" Media do segundo Bimestre: %2.lf \n", b2);


        media = (b1 + b2) /2;


        printf(" Media do Semestre: %2.lf \n", media);


        if (media >= 6){

            printf ("\n APROVADO ! Com media: %2.lf \n", media);


        } else if (media < 2){

            printf("Nota insuficiente para fazer a recuperacao!");
            printf(" REPROVADO");


        } else if (media < 6) {

            printf("\n\n Voce esta de recuperacao!" );
            printf ("\n Digite a nota da prova final: ");
            scanf ("%lf", &pf);



            mediaF = (pf + media)/2;

                if(mediaF >= 6)

            {

                printf("\n APROVADO com media: %2.lf", mediaF);

            } else{

                printf("\n REPROVADO com media: %2.lf", mediaF);

            }


        }

        break;

    }


    case 3:{

        double produto;
        char opcao; 

            system("cls");
            printf(" Vamos fazer compras e veja as opcoes de Desconto: ");
            printf("\n\n Digite o valor do produto que voce quer comprar: ");
            scanf("%lf", &produto);


            fflush(stdin);


            printf("Veja as opcoes de desconto em porcentagem: \n A)5 \n B)8 \n C)15 \n D)25 \n Escolha sua opcao: "  );
            scanf("%C", &opcao);



            if (opcao == 'A' || opcao == 'a'){

                produto -= produto *0.05;
                printf("Valor do produto com desconto: %3.lf", produto);


            } else if (opcao == 'B' || opcao == 'b'){

                produto -= produto *0.08;
                printf("Valor do produto com desconto: %3.lf", produto);

            } else if (opcao == 'C' || opcao == 'c'){

                produto -= produto *0.15;
                printf("Valor do produto com desconto: %3.lf", produto);


            } else if (opcao == 'D' || opcao == 'd'){

                produto -= produto *0.25;
                printf(" Valor do produto com desconto: %3.lf", produto);



            } else {

                printf("\n Opcao Invalida, perdeu o desconto!");

            }


        break;

    }   

    case 4:{


            system("cls");
            double produto;
            int opcao; 

            system("cls");
            printf(" Vamos fazer compras e veja as opcoes de Desconto: ");
            printf("\n\n Digite o valor do produto que voce quer comprar: ");
            scanf("%lf", &produto);

            fflush(stdin);

            printf("Veja as opcoes de desconto em porcentagem: \n 1) 5 \n 2) 8 \n 3) 15 \n 4) 25 \n Escolha sua opcao: "  );
            scanf("%i", &opcao);

            switch(opcao){



            case 1:{

                produto -= produto *0.05;
                printf("Valor do produto com desconto: %3.lf", produto);

                break;    

            } 

            case 2:{

                produto -= produto *0.08;
                printf("Valor do produto com desconto: %3.lf", produto);

                break;   

            } 


            case 3:{

                produto -= produto *0.15;
                printf("Valor do produto com desconto: %3.lf", produto);

                break;

            }case 4:{

                produto -= produto *0.25;
                printf(" Valor do produto com desconto: %3.lf", produto);

                break;

            }   

            default:{

                printf("\n Opcao Invalida, perdeu o desconto!");

            }

        }

        break;

    }

    case 5:{

            system("cls");
            long fatorial = 1;
            int a;
            int b = 1;

            system("cls");

            printf("Vamos Calcular a Fatorial de um Numero! \n");
            printf("Digite um numero: ");
            scanf("%i", &a);

            if(a < 0){

                printf ("Nao existe essa fatorial: \n");

            } else{

                do{

                    fatorial *= b;
                    b++;

                }while(b <= a);

                printf("A fatorial de %i eh:  %li", a, fatorial);

            }

        break;

    }

    case 6:{

        int num;
        int a = 0;
        int b = 1;
        int c = 0;
        int i = 1;

        system("cls");
        printf(" Vamos ver a sequencia de Fibonacci: \n");
        printf(" Digite um numero para ser o termo da sequencia: ");
        scanf("%i", &num);

        if (num <= 0){

            printf("Nao existe fibonacci de termo negativo! ");

        } else{

            do{

                printf(" %i - ", a);
                c = a;
                a = b;
                b += c;

                i++;

            } while(i <= num);

        }
        break;

    }


    case 7:{



        int a1 =0;
        int R =0;
        int limit = 0;
        int i = 0;

        system("cls");
        printf("Vamos Calcular a P.A de um numero positivo! \n");
        printf("\n Digite um numero Para ser A1: ");
        scanf("%i", &a1);

        printf("\n Digite um numero para ser o Termo da P.A: ");
        scanf("%i", &R);

        printf("\n Digite um numero para ser o limite da P.A: ");
        scanf("%i", &limit);


        do{

            printf(" %i - ", a1);
            a1 += R;

            i++;

        } while(i <= limit);

        break;

    }


    case 8:{

        long fatorial = 1;
        int a;
        int b = 1;

        system("cls");
        printf("Vamos Calcular a Fatorial de um Numero (com While)! \n");
        printf("Digite um numero: ");
        scanf("%i", &a);

            if(a < 0){

                printf ("Nao existe essa fatorial: \n");

            } else{

                while(b <= a){

                    fatorial *= b;
                    b++;

                };

                printf("A fatorial de %i eh:  %li", a, fatorial);

            }

        break;
    }

    case 9:{



        int num;
        int a = 0;
        int b = 1;
        int c = 0;
        int i = 1;

        system("cls");
        printf(" Vamos ver a sequencia de Fibonacci (com While): \n");
        printf(" Digite um numero para ser o termo da sequencia: ");
        scanf("%i", &num);

        if (num <= 0){
            printf("Nao existe fibonacci de termo negativo! ");

        } else{

            while(i <= num){

                printf(" %i - ", a);
                c = a;
                a = b;
                b += c;

                i++;

            }
        }

        break;

    }


    case 10:{

        int a1 =0;
        int R =0;
        int limit = 0;
        int i = 0;

        system("cls");
        printf("Vamos Calcular a P.A (com While) de um numero positivo! \n");
        printf("\n Digite um numero Para ser A1: ");
        scanf("%i", &a1);

        printf("\n Digite um numero para ser o Termo da P.A: ");
        scanf("%i", &R);

        printf("\n Digite um numero para ser o limite da P.A: ");
        scanf("%i", &limit);


        while(i <= limit){

            printf(" %i - ", a1);
            a1 += R;

            i++;

        }

        break;
    }

        case 11:{

        long fatorial = 1;
        int a;
        int b = 1;
        
        system("cls");
        printf("Vamos Calcular a Fatorial de um Numero (com For)! \n");
        printf("Digite um numero: ");
        scanf("%i", &a);

            if(a < 0){

                printf ("Nao existe essa fatorial: \n");

            } else{

                for(; b<= a ; b++){

                    fatorial *= b;

                };

                printf("A fatorial de %i eh:  %li", a, fatorial);

            }

                break;
        }

        case 12:{

        int num;
        int a = 0;
        int b = 1;
        int c = 0;
        int i = 1;
        
        system("cls");
        printf(" Vamos ver a sequencia de Fibonacci (com For): \n");
        printf(" Digite um numero para ser o termo da sequencia: ");
        scanf("%i", &num);

        if (num <= 0){
            printf("Nao existe fibonacci de termo negativo! ");

        } else{

            for (;i <= num; i++){

                printf(" %i - ", a);
                c = a;
                a = b;
                b += c;

            }
        }

            break;
        }

        case 13:{

        int a1 =0;
        int R =0;
        int limit = 0;
        int i = 0;
        
        system("cls");
        printf("Vamos Calcular a P.A (com For) de um numero positivo! \n");
        printf("\n Digite um numero Para ser A1: ");
        scanf("%i", &a1);

        printf("\n Digite um numero para ser o Termo da P.A: ");
        scanf("%i", &R);

        printf("\n Digite um numero para ser o limite da P.A: ");
        scanf("%i", &limit);


        for(;i <= limit; i++){

            printf(" %i - ", a1);
            a1 += R;

        }

         break;

        }

        case 14:{

                int list[30];
                int limit = 0;
                int cont = 0;
                int num = 0;
                int maior = 0;

                system("cls");
                printf("Vamos descobrir qual eh o maior numero! \n"
                "Digite a quantidade de numeros que voce quer avaliar: ");
                scanf("%i", &limit);

                fflush(stdin);

                while(cont < limit){

                    printf("Digite um numero: ");
                    scanf("%i", &num);

                    if (num > maior){
                        maior = num;
                    }

                    list[cont] = num;
                    cont++;
                }
                    printf("O maior numero eh: %i \n", maior);

                    cont = 0;

                    printf("\nA lista de todos os numeros digitados eh: ");
                    for(limit; cont < limit; cont++){
                        printf("%i ", list[cont]);
                    }

                break;
        }

        case 15:{

                int lista[30];
                int limit = 0;
                int cont = 0;
                int num = 0;
                int menor = 0;

                system("cls");
                printf("Vamos descobrir qual eh o menor numero! \n"
                "Digite a quantidade de numeros que voce quer avaliar ate (30): ");
                scanf("%i", &limit);

                fflush(stdin);

                printf("Digite um numero: ");
                scanf("%i", &num);
                menor = num;
                lista[cont] = num;
                cont++;


                while(cont < limit){

                    printf("Digite um numero: ");
                    scanf("%i", &num);

                    if (num < menor){
                        menor = num;
                    }

                    lista[cont] = num;

                    cont++;

                }
                     printf("O menor numero eh: %i \n", menor);

                    cont = 0;

                    printf("\nA lista de todos os numeros digitados eh: ");
                        for(limit; cont  < limit; cont++){
                            printf("%i ", lista[cont]);
                        }

                break;
        }

        case 16:{

        int vetor[30];
        int num = 0;
        int limit = 0;
        int cont = 0;
        
        system("cls");
        printf("Vamos mostrar a ordem inversa da lista de valores");
        printf("\n Digite o limite de numeros da lista ate (30): ");
        scanf("%i", &limit);

        for(cont = 0;cont < limit ; cont++ ){

            printf("Digite um numero: ");
            scanf("%i", &num);
            vetor[cont] = num;

        }  

        printf("\nOrdem invertida: ");

        for(cont = limit -1; cont >= 0; cont--){

            printf("%i ", vetor[cont]);
        }

        break;
        }

    case 17:{

        int vetor[10];
        int mult;
        int num;
        int resultado;
        int i = 0;

        system("cls");
        printf("Vamos fazer uma lista de 10 valores e mutiplica-lo por outro: \n");

        for(i = 0; i < 10; i++){
            printf("Digite um numero: ");
            scanf("%i" , &num);
            vetor[i] = num;
        }

        printf("Digite um multiplicador: ");
        scanf("%i", &mult);

        for (i = 0; i < 10; i++){
            resultado = vetor[i] * mult;
            printf("\n%i X  %i = %i ", vetor[i], mult, resultado);
        }

        break;
    }
    
    case 18:{
    	
    	int expo;
    	int limit;
    	double num;
    	double resultado;
		double lista[30];
    	
        system("cls");
    	printf("Digite uma lista de ate 30 numeros e multiplique pelo expoente: \n ");
    	printf("\nDigite o tamanho da lista: ");
    	scanf("%i", &limit);
    	
    	printf("Digite um expoente da conta:");
    	scanf("%i", &expo);
    	
    	fflush(stdin);
    	
    	for(int i = 0; i < limit; i++){
    		printf("\nDigite um numero: ");
    		scanf("%lf", &num);
    		lista[i] = num;
		}
		
		printf("\nO resultado da operacao eh: \n");
		
		fflush(stdin);
		
		for(int i = 0; i < limit; i++){
    	
		resultado = pow(lista[i],expo);
		printf("%i) %.2lf \n", i+1,resultado);	
    		
		}
		
		break;
	}
	
	case 19:{
		
		int raiz;
    	int limit;
    	double num;
    	double resultado;
		double lista[30]; 
    	
        system("cls");
    	printf("Vamos Ler uma lista de ate 30 valores e exibir a sua raiz: \n ");
    	printf("\nDigite o tamanho da lista: ");
    	scanf("%i", &limit);
    
    	fflush(stdin);
    	
    	for(int i = 1; i <= limit; i++){
    		printf("\nDigite um numero: ");
    		scanf("%lf", &num);
    		lista[i] = num;
		}
		
		printf("\nO resultado da operacao eh: \n");
		
		fflush(stdin);
		
		for(int i = 1; i <= limit; i++){
 
			resultado = sqrt(lista[i]);	
			printf("%i) %.2lf \n", i,resultado);
		}                         
		
		break;
	}
    case 20:{

        char palavra1[30];
    	char palavra2[30];
        int i = 0;
    	int compara = 0;
    	
    	system("cls");
    	printf("Vamos comparar duas palavras e ver se sao iguais: \n");
    	printf("Digite a primeira palavra: ");
    	scanf("%s", palavra1);
    	
    	printf("Digite a segunda palavra: ");
    	scanf("%s", palavra2);
    	
    	for(int i = 0; i < 30; i++){
    		if(palavra1[i] == '\0') break;
    		if(palavra2[i] == '\0') break;
    		
            compara = 0;

    		if(palavra1[i] == palavra2[i]){
    			compara++;

			}else{
                printf("\nAs palavras sao diferentes");
                break;
			}
		}

            if(compara == 1){
                printf("As palavras sao iguais! ");
            }

		break;
	}

    case 21:{

        char palavra1[30];
        char palavra2[30]; 
        int conta = 0;
        int compara = 0;

        system("cls");
        printf("\nVamos descobrir se uma palavra eh palindromo: \n");
        printf("Digite a palavra: ");
        scanf("%s", palavra1); 

        for(int i = 0; i < 30; i++){
            if (palavra1[i] == '\0'){
                break;
            }else{
                conta++;
            }
        }

        for(int i = 0; i < conta; i ++){
            palavra2[i] = palavra1[conta - 1 -i];
        }

        for(int i = 0; i < 30; i++){
            if (palavra1[i] == '\0') break;

            compara = 0;

            if(palavra1[i] == palavra2[i]){
                compara++;

            }else{
                printf("\nNao eh um palindromo! ");
                break;
            }
        }

        if(compara == 1){
            printf("\nEh um palindromo! ");
        }

        break;
    }

    case 22:{

        char frase1[60];
        char frase2[60]; 
        int conta = 0;
        int compara = 1;

        system("cls");

        printf("\nVamos descobrir se uma frase eh palindromo: \n");
        printf("Digite a frase: ");
        scanf(" %[^\n]", frase1); 

         for(int i = 0; i < 60; i++){
            if (frase1[i] == '\0'){
                break;
            }else{
                conta++;
            }
        }

        for(int i = 0; i < conta; i ++){
            frase2[i] = frase1[conta - 1 -i];
        }

            frase2[conta] = '\0';

        for(int i = 0; i < 60; i++){
            if (frase1[i] == '\0') break;

            if(frase1[i] == frase2[i]){
            }else{
                printf("\nNao eh um palindromo! ");
                compara = 0;
                break;
            }
        }   

            if(compara == 1){
            printf("\nEh um palindromo! ");
            }

        break;
    }
    
    case 23:{
    	
        char palavra[30];

    	system("cls");
    	printf("\nVamos tranformar uma frase palavra Minuscula em Maiuscula \n");
    	
        printf("Digite uma palavra: ");
    	scanf("%s" , palavra);
    	
        for(int i = 0; palavra[i]!= '\0'; i++){
            if(palavra[i] >= 'a' && palavra[i] <= 'z'){
                palavra[i] = palavra[i] - 32;
            }
        }

        printf("\nPalavra em maiusculo: %s" , palavra);        

		break;
	}
    
    case 24:{
        
        char palavra[30];

    	system("cls");
    	printf("\nVamos tranformar uma frase palavra Maiuscula em Minuscula \n");
    	
        printf("Digite uma palavra: ");
    	scanf("%s" , palavra);
    	
        for(int i = 0; palavra[i]!= '\0'; i++){
            if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
                palavra[i] = palavra[i] + 32;
            }
        }

        printf("\nPalavra em minusculo: %s" , palavra);     
    	
		break;
	}
    
    case 25:{
    	
    	char palavra1[30];
    	char palavra2[30];
        char palavra3[60];
        int i = 0;
        int conta = 0;
        int j = 0;

    	system("cls");
    	printf("\nVamos concatenar duas palavras! \n");
    	printf("Digite a primeira palavra: ");
    	scanf("%s", palavra1);
    	
    	printf("\nDigite a segunda palavra: ");
        scanf("%s", palavra2);
    	
       for(int i = 0; i < 30; i++){
            if(palavra1[i] == '\0'){
                break;
            }else{
                palavra3[i] = palavra1[i];
                conta++;
            }
        }

            palavra3[conta] = ' ';
            conta++;

        for(int i = conta; i < 30; i++, j++){
            if(palavra2[j] == '\0'){
                break;
            }else{
                palavra3[i] = palavra2[j];
            }
        }

        for(int i = 0; i < 30; i++){
            if(palavra3[i] == '\0'){
                break;
            }else{
                printf("%c", palavra3[i]);
            }
            
        }

		break;
	}

	case 26:{
		
		char nomes [10][50];
		int limit = 0;
		
		system("cls");
		printf("Vamos passar uma lista de nomes para maiusculos! \n");
		
		printf("Digite quantos nomes voce vai digitar (limite de 10): ");
		scanf("%i", &limit);
		
		while(limit < 0 || limit > 10){
			printf("Digite um numero maior que 0 ou menor ou igual a 10");
			scanf("%i", &limit);
		}
		
		for(int i = 0; i < limit; i++){
			printf("Digite o nome %i: ", i+1);
			scanf("%s", nomes[i]);
			
			strupr(nomes[i]);
		}
		
		for(int i = 0; i < limit; i++){
			printf("\n %s", nomes[i]);
	
		}
		
		break;
	}
	
	case 27:{
		
		system("cls");
		
		int matriz[3][5];
		int multiplica = 0;
		int resultado;
		
		printf("\nVamos Multiplicar uma Matriz de inteiros");
		printf("\nDigite o multiplicador: ");
		scanf("%i", &multiplica);
		
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("Digite o numero: ");
				scanf("%i", &matriz[i][j]);
			}
			printf("\n");
		}
		
		printf("\nNumeros digitados: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf(" %i ", matriz[i][j]);
			}
			printf("\n");
		}
		
		printf("\n Numeros multiplicados \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				matriz[i][j] *= multiplica;
				printf(" %i ", matriz[i][j]);
			}
			printf("\n");
		}
		
		break;
	}
	case 28:{
		
		int matriz1[3][5];
		int matriz2[3][5];
		int resultado[3][5];
		
		system("cls");
		
		printf("\nEscreva duas matrizes e veja sua soma; \n");
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz1[i][j]);
			}
			printf("\n");
		}
		
		printf("\nDigite a segunda matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz2[i][j]);
			}
			printf("\n");
		}
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				resultado[i][j] = matriz1[i][j] + matriz2[i][j];
			}
		}
				
		printf("\nA soma das Matrizes eh: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf(" %i ", resultado[i][j]);
			}
			printf("\n");
		}
		
		break;
	}
	case 29:{
		
		int matriz1[3][5];
		int matriz2[3][5];
		int resultado[3][5];
		
		system("cls");
		
		printf("\nEscreva duas matrizes e veja sua subtracao; \n");
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz1[i][j]);
			}
			printf("\n");
		}
		
		printf("\nDigite a segunda matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz2[i][j]);
			}
			printf("\n");
		}
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				resultado[i][j] = matriz1[i][j] - matriz2[i][j];
			}
		}
				
		printf("\n A subtracao das Matrizes eh: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf(" %i ", resultado[i][j]);
			}
			printf("\n");
		}
		
		break;
	}
	
	case 30:{
		
		int matriz1[3][5];
		int matriz2[3][5];
		int resultado[3][5];
		
		system("cls");
		
		printf("\nEscreva duas matrizes e veja sua multiplicacao; \n");
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz1[i][j]);
			}
			printf("\n");
		}
		
		printf("\nDigite a segunda matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf("\nDigite um numero: ");
				scanf("%i", &matriz2[i][j]);
			}
			printf("\n");
		}
		
		printf("Digite a Primeira matriz: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				resultado[i][j] = matriz1[i][j] * matriz2[i][j];
			}
		}
				
		printf("\n A mutiplicacao das Matrizes eh: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				printf(" %i ", resultado[i][j]);
			}
			printf("\n");
		}
		
		break;
		
	}
    
    case 31:{

        system ("cls");

        int limit = 0;
        char jogadas[30];
        int cara = 0, coroa = 0;

        printf("Cara (1) Coroa (2) \n");
        printf("Digite a quantidade de vezes que vou jogar a moeda (Ate 30): ");
        scanf("%i", &limit);

        while(limit > 30 || limit < 1){
            printf("\nO numero deve ser maior que 0 e menor ou igual a 30");
            printf("\nDigite novamente: ");
            scanf("%i", &limit);
        }
        

        srand(time(NULL));

        for(int i = 0; i < limit; i++){
            jogadas[i] = (rand() % 2) + 1;
        }

        for(int i = 0; i < limit; i++){
            if (jogadas[i] == 1){  
                printf("A jogada %i = Cara \n", i+1, jogadas[i]);
                cara++;
            }else{
                printf("A jogada %i = Coroa \n", i+1, jogadas[i]);
                coroa++;
            }
        }

        printf("\nTotal de Cara: %i \nTotal de Coroa: %i", cara,coroa);
        if(cara > coroa){
            printf("\nCara Ganhou!");
        }else if(cara == coroa){
             printf("\nEmpate!");
        }else{
            printf("\nCoroa Ganhou!");
        }

        break;

    }

    case 32:{
        system("cls");

        char cartas[13][4];
        int valor[13][4];
        char naipe[13][4];
        int simbolo;
        int num = 49;
        int peso = 1;
        int pontuacao1 = 0, pontuacao2 = 0;
        int vitoria = 0;
        int continua = 0;
        int i = 0;
        int j = 0;

        printf("\n!!BEM VINDO AO JOGO 21!! \n");
        printf("Voce comeca jogando e depois a mesa Jogara: \n\n");

        system("pause");
        system("cls");
        
        printf("SUA VEZ:\n");

        for(int i = 1; i <= 13; i++){
            simbolo = 3;

            for(int j = 1; j <= 4; j++, simbolo++){
                if(peso == 1){
                    cartas[i][j] = 'A';
                    naipe[i][j] = simbolo;

                }else if (peso == 11){
                    cartas[i][j] = 'J';
                    naipe[i][j] = simbolo;

                }else if(peso == 12){
                    cartas[i][j] = 'Q';
                    naipe[i][j] = simbolo;

                }else if(peso == 13){
                    cartas[i][j] = 'K';
                    naipe[i][j] = simbolo;

                }else if(peso == 10){
                    cartas[i][j] = 'T';

                }else{
                    cartas[i][j] = num;
                    naipe[i][j] = simbolo;
                }

                valor[i][j] = peso;
                if(valor[i][j] >= 10){
                    valor[i][j] = 10;
                }
            }
            num++;
            peso++;
        }

        srand(time(NULL));
        
        while(continua == 0){

            i = (rand() % 13) + 1;
            j = (rand() % 4) + 1;

            printf("\nCarta sorteada: %c %c\n", cartas[i][j], naipe[i][j]);
            pontuacao1 += valor[i][j];

            if(pontuacao1 > 21){
                printf("\nVoce Perdeu por estourar 21! Pontuacao de %i\n", pontuacao1);
                system("pause");
                continua = 2;
                vitoria = 1;
                break;
                
            }else if(pontuacao1 == 21){
                printf("\nParabens Voce venceu !! Conseguiu a pontuacao 21 !\n");
                system("pause");
                vitoria = 2;
                break;

            }else{
                printf("\nSua pontuacao esta em: %i\n", pontuacao1);
                printf("Deseja Continuar - SIM (0) NAO (1): ");
                scanf("%i", &continua);
            }
        }
        
        if(continua == 1){
            printf("\nVoce optou por parar com ( %i ) pontos \n", pontuacao1);
            system("pause");
        }

        system("cls");

        if(vitoria == 0){
            printf("VEZ DA MESA:\n ");

            while(pontuacao1 >= pontuacao2){

                i = (rand() % 13) + 1;
                j = (rand() % 4) + 1;

                printf("\nCarta sorteada: %c %c\n", cartas[i][j], naipe[i][j]);
                pontuacao2 += valor[i][j];

                if(pontuacao2 > 21){
                    printf("\nA mesa Perdeu por estourar 21 pontos ! Pontuacao de %i\n", pontuacao2);
                    system("pause");
                    vitoria = 3;
                    break;

                }else if(pontuacao2 == 21){
                    printf("\nA mesa venceu !! Conseguiu a pontuacao 21 !\n");
                    vitoria = 4;
                    system("pause");
                    break;

                }else if(pontuacao2 > pontuacao1){
                    printf("\nA mesa optou por parar por ultrapassar sua pontuacao de ( %i ) com ( %i )", pontuacao1,pontuacao2);
                    vitoria = 4;
                    break;

                }else{
                    printf("Pontuacao da mesa esta em: %i\n", pontuacao2);
                    system("pause");
                }
                
            }
        }

        if(vitoria == 2 || vitoria == 3){
            printf("\nVOCE Ganhou essa partida!!\n");
            system("pause");
        }else if(vitoria == 1 || vitoria == 4){
            printf("\nA MESA Ganhou essa partida!!\n");
            system("pause");
        }

        break;
    }

    case 33:{

        system("cls");
        printf("Programa Finalizado! ");
        break;
    }

    default:{

        printf("\nOpcao Invalida! ");
        break;
    }

}

}

}