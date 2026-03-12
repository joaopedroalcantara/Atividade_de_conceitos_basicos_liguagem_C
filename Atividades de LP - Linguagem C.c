#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int opcao = 0;

while(opcao != 21){

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
"20) Limpa caixa de texto \n"
"21) Sair \n"

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



            double produto;
            int opcao; 

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


            long fatorial = 1;
            int a;
            int b = 1;


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
		printf("%i) %.2lf \n", i,resultado);	
    		
		}
		
		break;
	}
	
	case 19:{
		
		int raiz;
    	int limit;
    	double num;
    	double resultado;
		double lista[30]; 
    	
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

        system("cls");

        printf("Caixa de Texto limpo! \n");
        break;
    }

    case 21:{

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