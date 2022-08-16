//LUCAS DOS SANTOS FÉLIX
//UC21105403
//ENGENHARIA DE SOFTWARE



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //cores
#include <locale.h> 


#define RED "\x1b[91m" 
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m" 

void mapaAssentos(int assentosVoo, int poltronasAviao[25][8], char statusAssentos[25][8]); //Declaração para Matrizes
void mapa0 (int assentosVoo, int poltronasAviao[25][8], char statusAssentos [25][8]);

int main(void){


    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");


    int assentosVoo, numeroMenu, assentosDisponiveis, assentosConfirmados, assentosReservados, lucroFinal;
    int reservaVoo = 0, idPassageiro = 0, quantidadePassageiros, quantidadeCriancas, matrizAviao [25][8], valorFinal, idConfirmacao, poltronasAviao [25][8], confirmacaoCrianca, contador = 0;
    float valorPassagem;
    char destinoVoo [25], statusAssentos [25][8], aux1, aux2;
    

    do{
        printf(BLUE "-------------------- SEJA BEM VINDO A SALUMAR LINHAS AÉREAS --------------------" RESET);
        
        printf("\n\nPARA PROSSEGUIR, PRECISAMOS REALIZAR O CADASTRO DO VOO DESEJADO...");
        printf("\n\nPOR FAVOR, PREENCHA OS DADOS SOLICITADOS A SEGUIR:");

        printf("\n\n\nQual do Destino do Voo?: .............................. : ");
        fgets(destinoVoo, 25 , stdin);
        fflush(stdin);

            if (strlen(destinoVoo) - 1 == 0){ 
			    printf(RED "\nCAMPO VAZIO, POR FAVOR DIGITE UM DESTINO VÁLIDO!\n" RESET);
                printf("\n");
			    system("pause");
		    }

    }while (strlen(destinoVoo) - 1 == 0);



    printf(GREEN "\nDESTINO REGISTRADO COM SUCESSO: %s" RESET, destinoVoo);



    do {
		printf ("\n\nQual a Quantidade de Assentos Disponíveis no Voo (MIN: 90 / MÁX 200) : .............................. : ");
		scanf ("%i", &assentosVoo);
        fflush(stdin);

	        if (assentosVoo < 90 || assentosVoo > 200) {
			    printf(RED "\nQUANTIDADE DE ASSENTOS INVÁLIDA, POR FAVOR DIGITE UM VALOR VÁLIDO!\n" RESET);
			    printf("\n");
			    system ("pause");
		    }

	}while (assentosVoo < 90 || assentosVoo > 200);



    printf(GREEN "\nASSENTOS REGISTRADOS COM SUCESSO!\n" RESET);



    do{
        printf("\n\nQual o Valor da Passagem (INDIVIDUAL): .............................. : ");
        scanf("%f", &valorPassagem);
        fflush(stdin);

            if (valorPassagem < 0){
			    printf(RED "\nVALOR INVÁLIDO, DIGITE OUTRO VALOR!\n" RESET);
                printf("\n");
			    system ("pause");
		    }

    }while (valorPassagem < 0);

    

    printf(GREEN "\nPREÇO REGISTRADO COM SUCESSO!\n" RESET);



	mapa0(assentosVoo, poltronasAviao, statusAssentos);


    do{ //Menu Inicial
		system("cls || clear");


		printf(BLUE "-------------------- MENU SALUMAR LINHAS AÉREAS --------------------\n\n" RESET);


		printf(" -1 CADASTRO PASSAGEIROS\n");
		printf(" -2 CONFIRMAR RESERVAS\n");
		printf(" -3 CANCELAR RESERVAS\n");
		printf(" -4 MAPA DE VOO\n");
		printf(" -5 INFORMAÇÕES DE VOO\n");
		printf(" -6 ENCERRAR PROGRAMA\n");
		

		printf(BLUE "\nSELECIONE A OPÇÃO DESEJADA: " RESET);
		scanf("%i", &numeroMenu);
        fflush(stdin);



        switch (numeroMenu){

            case 1: //Caso 1, Cadastro Passageiros.


			 idPassageiro = idPassageiro + 1;
			 reservaVoo ++;



			    do{
				    system ("cls || clear");

				    printf (BLUE "--------------- MENU CADASTRO PASSAGEIROS SALUMAR ---------------\n\n" RESET);
				
				    printf ("\nQuantidade de Passageiros para Cadastro: .............................. : ");
				    scanf ("%i", &quantidadePassageiros);
                    fflush(stdin);

				        if (quantidadePassageiros < 1){
					        printf (RED "\n\nQUANTIDADE INVÁLIDA DE PASSAGEIROS, DIGITE UMA QUANTIDADE VÁLIDA\n" RESET);
                            printf("\n");
					        system ("pause");
                        } 

			    }while (quantidadePassageiros < 1);
			


			    do {

				    printf("\nQual a Quantidade de Crianças?: .............................. : ");
				    scanf("%i", &quantidadeCriancas);
                    fflush(stdin);

				        if (quantidadeCriancas < 0){
					        printf (RED "\n\nCAMPO VAZIO, DIGITE UMA QUANTIDADE VÁLIDA!\n");
					        printf ("\n");
					        system ("pause");
				        }

			    }while (quantidadeCriancas < 0);
			


                do {
				
				    mapaAssentos(assentosVoo, poltronasAviao, statusAssentos);
				    printf("POR FAVOR, SELECIONE UM ASSENTO DISPONÍVEL: .............................. : ");

				        for (int i = 0; i < quantidadePassageiros; i++ ) {

				            printf ("PASSAGEIRO Nº %.3i: ", i+1);
				            scanf ("%i", &reservaVoo);	
				            fflush (stdin);


				                for (int i = 0; i < 25; i++ ){  //ID ASSENTOS
				
                                    for (int j = 0; j < 8; j++ ){ //MATRIZ 25X8
				    
                                        if(poltronasAviao [i][j] == reservaVoo ){ 

                                            matrizAviao [i][j] = idPassageiro;
                                            statusAssentos [i][j] = 'R'; 
                                        
                                        }

				                    }

			                    }

			            }

		        }while (reservaVoo < 1 || reservaVoo > assentosVoo);


			
			    do {
				    fflush (stdin);
				    system ("cls || clear");

                    valorFinal = ((quantidadePassageiros - quantidadeCriancas) * valorPassagem) + (quantidadeCriancas * valorPassagem / 2);

				    printf(BLUE "--------------- FINALIZAR CADASTRO PASSAGEIROS ---------------\n\n" RESET);
				    printf("VALOR TOTAL COMPRA:.............................. : ");
                    printf("R$ %i \n\n", valorFinal);

                    printf("\n\nSEU ID DE RESERVA É: .............................. : ");
				    printf("%i\n\n", idPassageiro); 
                    printf("LEMBRE-SE DELE, POIS SERÁ NECESSÁRIO PARA CONFIRMAÇÃO OU CANCELAMENTO\n\n");
                    system ("pause");


				}while (idPassageiro == 'R' );
						

			    break;


			
			case 2: //Caso 2, Confirmação.


                fflush(stdin);
			    system ("cls || clear");

			    printf (BLUE "--------------- MENU CONFIRMAÇÃO PASSAGEIRO SALUMAR ---------------\n\n" RESET); 

			    printf ("\nPara Confirmar sua Compra, Digite seu ID: .............................. : ");
			    scanf  ("%i", &idConfirmacao);
			    fflush (stdin);


			        if (idConfirmacao != idPassageiro){ 

				        printf (RED "ID INVÁLIDO, DIGITE NOVAMENTE\n" RESET);	

			        }else

			            mapaAssentos (assentosVoo, poltronasAviao, statusAssentos);
			            printf ("Deseja Confirmar sua Reserva?(S/N): .............................. :");
			            scanf  ("%c", &aux1);
			            fflush (stdin);


			        if (aux1 == 's' || aux1 == 'S'){

				        printf ("\n\nAlguma Criança Incluída na Reserva?: ......................... : ");
				        scanf  ("%i", &confirmacaoCrianca);
				        printf ("Compra Confirmada, Obrigado\n");


				        for (int i = 0; i < 25; i++ ){   //MATRIZ RESERVADA ---> CONFIRMADA

					        for (int j = 0; j < 8; j++ ){ 

					            if(statusAssentos[i][j] == 'R' ){

	                                statusAssentos[i][j] = 'C';
	                                matrizAviao[i][j]= idPassageiro;

			                    }

					        }

				        }


			        } else if (aux1 == 'n' || aux1 == 'N'){ 

				    printf (GREEN "\n\nVOLTANDO AO MENU PRINCIPAL\n" RESET);

			        } else{

				        printf (RED "OPÇÃO INVÁLIDA, DIGITE NOVAMENTE!\n" RESET);

			        }
				
			        system ("pause");


			    break;



			case 3: //Caso 3, Cancelamento.


                    fflush(stdin);
					system ("cls || clear");


					printf (BLUE "-------------------- CANCELAMENTO RESERVAS SALUMAR --------------------\n\n" RESET); 
			      
			        printf("\nPara Cancelar sua Compra, Digite seu ID: .............................. : \n");

                     if (idConfirmacao != idPassageiro){ 

				        printf (RED "ID INVÁLIDO, DIGITE NOVAMENTE\n" RESET);	

			        }else

			            mapaAssentos (assentosVoo, poltronasAviao, statusAssentos);
			            printf ("Deseja Cancelar sua Reserva?(S/N): .............................. :");

                     do{
			             scanf  ("%c", &aux2);
			             fflush (stdin);
					
			         

					        if (aux2 == 's' || aux2 == 'S') {	

						        for (int i = 0; i < 25; i++ ){ //MATRIZ RESERVADA -----> CANCELADA

							        for (int j = 0; j < 8; j++ ){

							         if(statusAssentos[i][j] == 'R' ){

			                            statusAssentos[i][j] = 'D';
			                            matrizAviao[i][j]= idPassageiro;

			                        }
							    }
							}	


						    printf ("\n\nRESERVA CANCELADA\n");
						    system ("pause");
						    break;


					}else if (aux2 == 'n' || aux2 == 'N') {

						printf (GREEN "VOLTANDO AO MENU PRINCIPAL\n" RESET);
						system ("pause");
						break;

					}else

					printf ("POR FAVOR, ESCOLHA UMA OPÇÃO VÁLIDA ENTRE [S] PARA SIM E [N] PARA NÃO.\n");

                } while (aux2 != 'S' && aux2 != 's' && aux2 != 'N' && aux2 != 'n');	


			    break;




			case 4:  //Caso 4, Mapa Aviao.

                fflush(stdin);
			    system ("cls || clear");

			    printf ("--------------- MAPA ASSENTOS AVIÃO ---------------\n\n"); 
                
                mapaAssentos (assentosVoo, poltronasAviao, statusAssentos); //Funcao Visualizador Aviao
			    system ("pause");


			    break;
			



			case 5: { 

			//CONTADOR ASSENTOS*

            assentosConfirmados = 0;
			assentosDisponiveis = 0; 
			assentosReservados = 0; 


			    for ( int i = 0; i < 25; i++){

                    for ( int j = 0; j < 8; j++){ 

			            if (contador == assentosVoo ){

            		        break;

				     }else{

					    contador ++;

					        if(poltronasAviao[i][j] <= assentosVoo && (statusAssentos [i][j]=='C' || statusAssentos [i][j]=='D' || statusAssentos [i][j]=='R')){  // CONFIRMADOS/DISPONIVEIS/RESERVADOS

		                	if (statusAssentos[i][j] =='C'){

		                	    assentosConfirmados ++; 

		                    }else if (statusAssentos[i][j]=='D'){ 

		                         assentosDisponiveis ++;

		                    }else if (statusAssentos[i][j]=='R'){

		                         assentosReservados ++;

		                    }
	                
               		    }	
				    }
			    }
		    }


			if (confirmacaoCrianca > assentosConfirmados){ 

				lucroFinal = (confirmacaoCrianca * valorPassagem/ 2);

                fflush(stdin);
				system ("cls || clear");


                printf (BLUE "--------------- INFORMAÇÕES VOO SALUMAR ---------------\n\n" RESET);
                
                
                printf("STATUS ASSENTOS:\n\n");

				printf ("ASSENTOS DISPONÍVEIS: %i\n", assentosDisponiveis);
				printf ("ASSENTOS RESERVADOS: %i\n", assentosReservados);
				printf ("ASSENTOS CONFIRMADOS: %i\n", assentosConfirmados);
			
				printf("LUCRO: \n\n");
				printf ("O LUCRO FINAL É : .......................... : ");   
				printf ("%i R$",lucroFinal);
                system ("pause");


			}else
			
                lucroFinal = ((assentosConfirmados - confirmacaoCrianca) * valorPassagem) + (confirmacaoCrianca* valorPassagem / 2);
			
                fflush(stdin);
                system ("cls || clear");

			    printf (BLUE "--------------- INFORMAÇÕES VOO SALUMAR ---------------\n\n" RESET); 

                printf("STATUS ASSENTOS:\n\n");

			    printf ("ASSENTOS DISPONÍVEIS: %i\n", assentosDisponiveis);
			    printf ("ASSENTOS RESERVADOS: %i\n", assentosReservados);
			    printf ("ASSENTOS CONFIRMADOS: %i\n", assentosConfirmados );

                printf("LUCRO: \n\n");
			    printf ("O LUCRO FINAL É : .......................... : ");   
			    printf ("%i R$",lucroFinal);
                system ("pause");


			break;
				
	    } 
			



			case 6: 

                fflush(stdin);
			    system ("cls || clear");

			    printf(BLUE "--------------- SALUMAR LINHAS AÉREAS ---------------\n\n" RESET);

			    printf ("OBRIGADO PELA PREFERÊNCIA, VOLTE SEMPRE!\n");
			

			break;


			default: 

			    printf(RED "OPÇÃO INVÁLIDA, DIGITE NOVAMENTE" RESET);
			    system ("pause");


			break;


        
    }


}while (numeroMenu != 6); 


}





void mapa0(int assentosVoo, int poltronasAviao[25][8], char statusAssentos [25][8]){ //MAPA 0 , NÃO DEFINITIVO

	int i,j,contador=0;

	    for ( i = 0; i < 25; i ++){
            
            for ( j = 0; j < 8; j ++){

            	if (contador == poltronasAviao){

            	    break;

				}else{

				    contador ++ ;
                    poltronasAviao[i][j]=contador;

			    }
            	
            }
        }

    for ( i = 0; i < 25; i++){

            for ( j = 0; j < 8; j++){
                
            statusAssentos [i][j] = 'D';

            }  
        }

}




    void mapaAssentos(int assentosVoo, int poltronasAviao[25][8], char statusAssentos[25][8]){ //MAPA ASSENTOS/ DEFINITIVO
	
    int i,j,contador = 0;
	

    printf(BLUE "ASSENTOS CONFIRMADOS    " RESET); 
    printf(GREEN "ASSENTOS DISPONÍVEIS   " RESET);
    printf(RED "ASSENTOS RESERVADOS    \n\n" RESET);


	    for ( i = 0; i < 25; i++) {

            for ( j = 0; j < 8; j++){

            	    if (contador == assentosVoo ) {
            		    
                        break;

				    } else{


					    contador ++;

					    if(poltronasAviao [i][j] <= assentosVoo && (statusAssentos [i][j]=='D' || statusAssentos [i][j]=='R' || statusAssentos [i][j]=='C')){

		                	if (statusAssentos[i][j]=='R'){

		                	printf(RED "%.3d " RESET, poltronasAviao[i][j]);  

		                }else if (statusAssentos[i][j]=='D'){

		                    printf(GREEN "%.3d " RESET, poltronasAviao[i][j]);

		                } else if (statusAssentos[i][j]=='C'){

		                    printf(BLUE "%.3d " RESET, poltronasAviao[i][j]);

		                }
                        
               		    }	
				    }  


        }
    
	}
}		




    

















    





















































