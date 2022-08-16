#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#include <locale.h>
#include <iostream> // As duas tabelas mais desconhecidas entre as tabelas. Serve para utilizar-mos a ferramenta stringstream e strncpy que nos permitem fazer string dentro de Switch Case;
#include <sstream>

using namespace std; // Ferramenta de input e output, também da suporte ao nosso switch case especial;

#define RED "\x1b[91m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m" 



int main(){


     system("chcp 65001");
     setlocale(LC_ALL, "portuguese");


     int numeroMenu, i, posto, idade;
     char CEP [8], Cidade [3], nome [100], CPF[12], telefoneCelular [10], email [100], senha [50], sexo, comorbidade;
  
	do {
	 system ("cls");
     printf(GREEN "\nSISTEMA DE CADASTRO E AGENDAMENTO DE VACINA\n\n" RESET );
     printf("------------------------------------------------------------------------------------------------------------------------");

     printf("\n[1] NOVO CADASTRO\n\n");
     printf("[2] POSTOS E HOR�RIOS DE VACINA��O\n\n");
     printf("[3] ESTAT�STICAS DE VACINA��O\n\n");
     printf("[4] SAIR DO SITE\n\n");

     printf("Por Favor, Digite a Op��o Desejada: ");
     scanf("%d", &numeroMenu);

     stringstream ss; //Isso � a gente ligando a string ao ss, o que significa que iremos agora, finalmente, enganar o c�digo e usar a string com um 'disfarce';
     ss << Cidade; // String menor que Cidade, que vale [3] pois � o n�mero de algorismos do CEP que precisamos para determinar a cidade;
     ss >> posto; // String menor que posto, porque posto s�o os casos no nosso switch case gambiarrado;


		
     switch (numeroMenu){
            
          case 1:


               do{

                    system("cls");
                    printf(GREEN "---------------|Projeto Interdisciplinar|---------------\n" RESET);
					fflush (stdin);
                    printf("Ol�, seja bem vindo! Sou seu assistente de cadastro. Por favor, insira aqui os seus dados: ");
                    printf("\n\nNome Completo : ............................ : ");
                    fgets(nome, 100, stdin);
                    fflush(stdin);

                         if (strlen(nome) - 1 == 0){ 

			               printf(RED "\nO CAMPO N�O PODE FICAR VAZIO! POR FAVOR DIGITE UM NOME V�LIDO!\n" RESET);
                              printf("\n");
			               system("pause");

		               }

               } while (strlen(nome) - 1 == 0);
               printf(GREEN "\nNOME REGISTRADO COM SUCESSO" RESET);
               
               do {
               	printf ("\n\nG�NERO ([F] PARA FEMININO / [M] PARA MASCULINO / [O] PARA OUTRO):");
               	scanf  ("%c", &sexo);
               	fflush (stdin);
               	
               	
               	if (sexo!='m' && sexo!='M' && sexo!='F' && sexo!='f' && sexo != 'o' && sexo != 'O'){
					printf("\n-----------------------------\n"); // Sec��o de redirecionamento;
		            printf(RED"A OP��O SELECIONADA N�O CONFERE COM AS PROPOSTAS!\n" RESET);
		            printf("POR FAVOR, RESPONDA COM ��M`` PARA MASCULINO, ��F`` PARA FEMININO OU ��O`` PARA OUTRO G�NERO N�O APRESENTADO!\n");
		            printf("-----------------------------\n\n");
		            system("pause");
				} else
				printf (GREEN "\nSEU G�NERO FOI REGISTRADO COM SUCESSO" RESET);
			   } while (sexo!='m' && sexo!='M' && sexo!='F' && sexo!='f');

               printf("\n\nIdade: ............................. : ");
               scanf("%d", &idade);
               fflush(stdin);

               printf(GREEN "\nSUA IDADE FOI REGISTRADA COM SUCESSO" RESET);



               do{

                    printf("\n\nCPF: ........................ : ");
                    fgets(CPF, 12, stdin);
                    fflush(stdin);

                         if (strlen(CPF) != 11){

                              printf(RED "\nN�MERO INVALIDO, POR FAVOR DIGITE NOVAMENTE OS 11 DIGITOS DO CPF:\n" RESET);
                              printf("\n");
                              system("pause");

                         }

               }while (strlen(CPF) != 11);

               printf(GREEN "\nCPF REGISTRADO COM SUCESSO" RESET);

               do{

                    printf("\n\nTelefone Celular : ............................. : (61) ");
                    fgets(telefoneCelular, 10, stdin);
                    fflush(stdin);

                         if (strlen(telefoneCelular) != 9){

                              printf(RED "\nN�MERO INVALIDO, POR FAVOR DIGITE NOVAMENTE OS 9 DIGITOS DO CELULAR:\n" RESET);
                              printf("\n");
                              system("pause");

                         }

               }while (strlen(telefoneCelular) != 9);

               printf(GREEN "\n CELULAR REGISTRADO COM SUCESSO" RESET);
               
			do{
			   	printf ("\n\nVOC� � PORTADOR DE COMORBIDADE? ([S] PARA SIM E [N] PARA N�O):");
			   	scanf  ("%c", &comorbidade);
			   	fflush (stdin);
			   	
			   	if (comorbidade!='s' && comorbidade!='S' && comorbidade!='n' && comorbidade!='N'){
					printf("\n-----------------------------\n"); // Sec��o de redirecionamento;
		            printf(RED"VALIDA��O INCONCLUS�VEL!\n" RESET);
		            printf("POR FAVOR, RESPONDA ��S`` EM CASO AFIRMATIVO E ��N`` EM CASO NEGATIVO!\n");
		            printf("-----------------------------\n\n");
		            system("pause");
				} else
				printf (GREEN "\nSEU STATUS FOI REGISTRADO COM SUCESSO" RESET);
			   } while (comorbidade!='s' && comorbidade!='S' && comorbidade!='n' && comorbidade!='N'); 

               system("cls");
               printf("AGORA, PRECISAREMOS DE EMAIL E SENHA PARA FINALIZAR O CADASTRO:");

               do{

                    printf("\n\nEmail: ................................... : ");
                    fgets(email, 100, stdin);
                    fflush(stdin);

                         if (strlen(email) - 1 == 0){ 

			               printf(RED "\nO CAMPO N�O PODE FICAR VAZIO! POR FAVOR DIGITE UM EMAIL V�LIDO!\n" RESET);
                              printf("\n");
			               system("pause");

		               }

               }while (strlen(email) - 1 == 0);

			   
               do{

                    printf("\n\nSenha: ................................... : ");
                    fgets(senha, 50, stdin);
                    fflush(stdin);

                         if (strlen(senha) - 1 == 0){ 

			               printf(RED "\nO CAMPO N�O PODE FICAR VAZIO! POR FAVOR DIGITE UMA SENHA V�LIDA!\n" RESET);
                              printf("\n");
			               system("pause");

		               }


               }while (strlen(senha) - 1 == 0);

               


               printf(GREEN "\n\nCADASTRO CONCLU�DO! \nVERIFIQUE OS POSTOS E HOR�RIOS DISPON�VEIS NA SUA REGI�O ADMINISTRATIVA NA SESS�O 2 DO MENU PRINCIPAL" RESET);


           	break;

          





          case 2:
               
               do {

					fflush (stdin);
                    system ("cls || clear"); // Adiciona a capacidade do algoritmo limpar a tela tanto em Linux como em Windows;
                    printf(GREEN "---------------|Projeto Interdisciplinar|---------------\n" RESET); // Cabe�aalho de charme
                    printf ("Ol�, seja bem vindo! Sou seu assistente virutal de direcionamento.\nPor favor, insira aqui os d�gitos de seu CEP sem o travess�o.\nCom isso, iremos redirecion�-lo para o posto de vacina��o mais pr�ximo:\n"); //Apresentação do programa;
                    fgets (CEP, 8, stdin); 
                    fflush (stdin); // D� uma limpada, para prevenir;


                    int len = strlen(CEP); // Determina o tamanho da string, neste caso ser� igual ao CEP.
                    if(CEP[len-1] == '\n' ){ // Primeiro passo da Gambiarra. Usando a String do CEP vamos come�ar a separar os 3 primeiros caracteres do resto dos algarismos;
                         CEP[len-1] = 0;
                    }


                    if (strlen(CEP) != 7){ // O 7 se deve ao fato de que o �ltimo vetor � nulo;
                          printf("\n-----------------------------\n"); //Sec��o dedicada a alertar o usu�rio sobre as limita��es impostas ao c�digo;
                          printf("Para podermos redirecion�-lo, precisamos de um CEP v�lido!\n");
                          printf("Por favor, insira seu CEP e n�o se esque�aa de ignorar o travess�o!\n");
                          printf("-----------------------------\n\n");
                          system("pause"); // Finaliza e reinicia o comando, n�o deixa a tela polu�da;

                    }else if (CEP [0]!= '7') { // O sete de deve pelo char j� possuir 1 de tamanho base. Isso � a condicional apenas, nada com se preocupar ainda;
                          printf ("Por favor, insira um CEP brasiliense válido.\n");
                          system ("pause"); // Refresh na tela do c�digo;
                    } 


               }    while (strlen(CEP) != 7 || CEP [0] != '7'); 
                          strncpy (Cidade, CEP, 3); //Realiza a c�pia do conte�do de uma vari�vel a outra.
                        

			    system ("cls || clear"); 


			    switch (posto){

				case 731:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Sobradinho: \n\n ");
				printf ("          Centro de Sa�de Sobradinho 01         /        Complexo de Sa�de de Sobradinho\n");
				printf ("Endere�o: Quadra 14 � �rea Especial � n�. 22/23 /         Rodovia DF-420\n");
				printf ("Telefone: (61)35912779                         /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 9 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 720: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um postos para Taguatinga Sul: \n\n ");
				printf ("          Unidade B�sica de Sa�de N� 05.\n");
				printf ("Endere�o: Taguatinga, Setor D Sul, AE 23 \n");
				printf ("Telefone: (61) 3561-2072 \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 9 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 724:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Gama: \n\n ");
				printf ("          Estacionamento Bezerr�o\n");
				printf ("Endere�o: Estacionamento Bezerr�o\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 716: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Jardim Bot�nico, Lago Sul e S�o Sebasti�o: \n\n ");
				printf ("        Unidade B�sica de Sa�de Lago Sul             /        Policl�nica Lago Sul\n");
				printf ("Endere�o: Setor de Habita��es Individuais Sul, QI 21 /         SHIS QI 21\n");
				printf ("Telefone: (61) 3366-2530                            /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 10 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 715:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Lago Norte, Itapo�, Parano�: \n\n ");
				printf ("        �rea Especial C - Sa�de N� 10             /        Unidade B�sica De Sa�de 03 \n");
				printf ("Endere�o: SHIN, QI 3, �rea Especial               /         Quadra 378, Conjunto A/E 04 - Del Lago II \n");
				printf ("Telefone: (61) 2017-1145                          /          (61) 2017-1550\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 733: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Planaltina: \n\n ");
				printf ("          Jardim De Inf�ncia Casa Da Viv�ncia\n");
				printf ("Endere�o: Ae 09, St. de �reas Especiais Norte \n");
				printf ("Telefone: (61) 3901-4462    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 727:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Brazl�ndia: \n\n ");
				printf ("          UBS 1 Brazl�ndia\n");
				printf ("Endere�o: EQ 6/8 Conjunto 10, Lt. 1 \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
                case 719: 
                printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para �guas Claras: \n\n ");
				printf ("          Centro Universit�rio Unieuro\n");
				printf ("Endere�o: Av. das Castanheiras, s/n - Lote 3700 \n");
				printf ("Telefone: (61) 3445-5888    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 18 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 725: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Santa Maria: \n\n ");
				printf ("          N�cleo de Insp. De Sa�de de Sta. Maria\n");
				printf ("Endere�o: Quadra 102 Conjunto A, B, C e D s/n� - pr�dio ao lado do hospital \n");
				printf ("Telefone: (61) 3385-4755    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 18 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 708: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Planalto: \n\n ");
				printf ("          Regi�o Central\n");
				printf ("Endere�o: Setor M�dico Hospitalar Norte, Quadra 01- �rea Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 707:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Planalto: \n\n ");
				printf ("          Regi�o Central\n");
				printf ("Endere�o: Setor M�dico Hospitalar Norte, Quadra 01- �rea Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 702: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Telebras�lia: \n\n ");
				printf ("          Regi�o Central\n");
				printf ("Endere�o: Setor M�dico Hospitalar Norte, Quadra 01- �rea Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 717: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para N�cleo Bandeirante e Candangol�ndia: \n\n ");
				printf ("          Centro de Sa�de n�2 -  N�cleo Bandeirante    \n");
				printf ("Endere�o: �rea Especial 03, 3� Avenida              \n");
				printf ("Telefone: (61) 3386-3031                         \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 7 �s 16 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 722: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Ceil�ndia: \n\n ");
				printf ("          Centro de Sa�de n� 3                  /        UBS 16� - Ceil�ndia \n");
				printf ("Endere�o: St. M QNM 15                         /         Ceil�ndia, SHSN, Trecho 1, Etapa 1, Qd. 500, AE 2\n");
				printf ("Telefone: -                                   /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 6 �s 17 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 721: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Taguatinga: \n\n ");
				printf ("          UBS 1� - Taguatinga\n");
				printf ("Endere�o: QNG, AE 18/19, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 7 �s 19 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break; 
				case 723: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Samambaia: \n\n ");
				printf ("          UBS 2� Samambaia\n");
				printf ("Endere�o: QS 611, AE 2, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 703: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Norte: \n\n ");
				printf ("          UBS 2� Asa Norte\n");
				printf ("Endere�o: EQN 114/115, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 700: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Sul: \n\n ");
				printf ("          UBS 1� Asa Sul \n");
				printf ("Endere�o: SGAS 612, Lotes 38/39, L2 Sul \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break; 
				case 706: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Cruzeiro: \n\n ");
				printf ("          UBS n� 2 Cruzeiro Velho\n");
				printf ("Endere�o: Setor Escolar, Lote 4, �rea Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 712: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Estrutural: \n\n ");
				printf ("          UBS 2� Estrutural \n");
				printf ("Endere�o: AE 1, Setor Central \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 718: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Riacho Fundo: \n\n ");
				printf ("         UBS 1� Riacho Fundo 1                    /        UBS 2� Riacho Fundo 2  \n");
				printf ("Endere�o: QN 9, �rea Especial 11                  /        QC 1, Conjunto 10, Lote 1, Riacho Fundo 2\n");
				printf ("Telefone: -                                      /        -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, apenas em dia �til.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 726: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Recanto das Emas: \n\n ");
				printf ("          UBS 3� - Recanto das Emas \n");
				printf ("Endere�o: QD 104/105, �rea Especial\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo per�odo matutino e vespertido, das 8 �s 17 horas, em todos os dias da semana.\n");
				printf ("Ser�o priorizados para receber a imuniza��o: idosos, crian�as menores de 4 anos, funcion�rios da sa�de,\nportadores de defici�ncias imunes, portadores de complica��es respirat�rias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				default: 
				printf ("---------------|Projeto Interdisciplinar|---------------\n");
				printf ("Desculpe, em sua regi�o n�o h� postos de sa�de pr�ximos.\n Busque a regi�o administrativa mais pr�xima, atrav�s do site de contato: http://www.saude.df.gov.br/locaisdevacinacao/ \n\n");
				printf ("--------------------------------------------------------");
				system ("pause");
				break;
			}

          break;





          case 3: 
          		fflush (stdin);
                system ("cls");
                printf ("\n|--------------------------------|ESTAT�STICAS E INFORMA��ES|--------------------------------|\n\n");
                printf ("VIS�O GERAL: CASOS:\n");
                printf ("___________________________|  DISTRITO FEDERAL  |___________|  BRASIL  |___________|  MUNDO    |\n");
                printf ("TOTAL DE CASOS REGISTRADOS:|  420 mil           |___________|  17,6 mi |___________|  177.0 mi |\n");
                printf ("TOTAL DE CASOS RECUPERADOS:|  402 mil           |___________|  15,6 mi |___________|  160.7 mi |\n");
                printf ("TOTAL DE CASOS DE �BITOS  :|    9.016           |___________|  494 mil |___________|    3.8 mi |\n");
                printf ("________________________________________________________________________________________________\n");
                printf ("VIS�O GERAL: MONITORAMENTO E CONTROLE DE VACINA��O:\n");
                printf ("_____________________________|  BRASIL  |___________|  MUNDO    |\n");
                printf ("TOTAL DE DOSES APLICADAS    :|  81,5 mi |___________|   2,26 bi |\n");
                printf ("TOTAL DE PESSOAS IMUNIZADAS :|  23,9 mi |___________|  480.7 mi |\n");
                printf ("%% DE PESSOAS IMUNIZADAS     :|  11,3%%   |___________|    6,2%%   |\n");
                printf ("________________________________________________________________________________________________\n\n");
                printf ("COMO O V�RUS SE PROPAGA?\n");
                printf ("O v�rus que causa a COVID-19 � transmitido principalmente por meio de got�culas geradas quando uma pessoa infectada tosse,\nespirra ou exala. \n");
                printf ("Essas got�culas s�o muito pesadas para permanecerem no ar e s�o rapidamente depositadas em pisos ou superf�cies.\n");
                printf ("Voc� pode ser infectado ao inalar o v�rus se estiver pr�ximo de algu�m que tenha COVID-19 ou ao tocar em uma superf�cie contaminada e, em seguida, passar as m�os nos olhos, no nariz ou na boca.\n");
                printf ("______________________________________________________________________________\n\n");
                printf ("PARA EVITAR A PROPAGA��O DO V�RUS, AS SEGUINTES RECOMENDA��ES DEVEM SER SEGUIDAS:\n");
                printf (" - Lave suas m�os com frequ�ncia. Use sab�o e �gua ou �lcool em gel.\n");
                printf (" - Use m�scara quando n�o for poss�vel manter o distanciamento f�sico.\n");
                printf (" - N�o toque nos olhos, no nariz ou na boca.\n");
                printf (" - Procure atendimento m�dico se tiver febre, tosse e dificuldade para respirar.\n");
                printf (" - Saia de casa apenas para atividades essenciais.\n");
                printf (" - Se voc� puder, vacine-se!\n");
                
                
                
          system ("pause");
          break;

     }
	} while (numeroMenu != 4);

     

    return 0;










}



