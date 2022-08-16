#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#include <locale.h>
#include <iostream> // As duas tabelas mais desconhecidas entre as tabelas. Serve para utilizar-mos a ferramenta stringstream e strncpy que nos permitem fazer string dentro de Switch Case;
#include <sstream>

using namespace std; // Ferramenta de input e output, tambÃ©m da suporte ao nosso switch case especial;

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
     printf("[2] POSTOS E HORÁRIOS DE VACINAÇÃO\n\n");
     printf("[3] ESTATÍSTICAS DE VACINAÇÃO\n\n");
     printf("[4] SAIR DO SITE\n\n");

     printf("Por Favor, Digite a Opção Desejada: ");
     scanf("%d", &numeroMenu);

     stringstream ss; //Isso é a gente ligando a string ao ss, o que significa que iremos agora, finalmente, enganar o código e usar a string com um 'disfarce';
     ss << Cidade; // String menor que Cidade, que vale [3] pois é o número de algorismos do CEP que precisamos para determinar a cidade;
     ss >> posto; // String menor que posto, porque posto são os casos no nosso switch case gambiarrado;


		
     switch (numeroMenu){
            
          case 1:


               do{

                    system("cls");
                    printf(GREEN "---------------|Projeto Interdisciplinar|---------------\n" RESET);
					fflush (stdin);
                    printf("Olá, seja bem vindo! Sou seu assistente de cadastro. Por favor, insira aqui os seus dados: ");
                    printf("\n\nNome Completo : ............................ : ");
                    fgets(nome, 100, stdin);
                    fflush(stdin);

                         if (strlen(nome) - 1 == 0){ 

			               printf(RED "\nO CAMPO NÃO PODE FICAR VAZIO! POR FAVOR DIGITE UM NOME VÁLIDO!\n" RESET);
                              printf("\n");
			               system("pause");

		               }

               } while (strlen(nome) - 1 == 0);
               printf(GREEN "\nNOME REGISTRADO COM SUCESSO" RESET);
               
               do {
               	printf ("\n\nGÊNERO ([F] PARA FEMININO / [M] PARA MASCULINO / [O] PARA OUTRO):");
               	scanf  ("%c", &sexo);
               	fflush (stdin);
               	
               	
               	if (sexo!='m' && sexo!='M' && sexo!='F' && sexo!='f' && sexo != 'o' && sexo != 'O'){
					printf("\n-----------------------------\n"); // Secção de redirecionamento;
		            printf(RED"A OPÇÃO SELECIONADA NÃO CONFERE COM AS PROPOSTAS!\n" RESET);
		            printf("POR FAVOR, RESPONDA COM ´´M`` PARA MASCULINO, ´´F`` PARA FEMININO OU ´´O`` PARA OUTRO GÊNERO NÃO APRESENTADO!\n");
		            printf("-----------------------------\n\n");
		            system("pause");
				} else
				printf (GREEN "\nSEU GÊNERO FOI REGISTRADO COM SUCESSO" RESET);
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

                              printf(RED "\nNÚMERO INVALIDO, POR FAVOR DIGITE NOVAMENTE OS 11 DIGITOS DO CPF:\n" RESET);
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

                              printf(RED "\nNÚMERO INVALIDO, POR FAVOR DIGITE NOVAMENTE OS 9 DIGITOS DO CELULAR:\n" RESET);
                              printf("\n");
                              system("pause");

                         }

               }while (strlen(telefoneCelular) != 9);

               printf(GREEN "\n CELULAR REGISTRADO COM SUCESSO" RESET);
               
			do{
			   	printf ("\n\nVOCÊ É PORTADOR DE COMORBIDADE? ([S] PARA SIM E [N] PARA NÃO):");
			   	scanf  ("%c", &comorbidade);
			   	fflush (stdin);
			   	
			   	if (comorbidade!='s' && comorbidade!='S' && comorbidade!='n' && comorbidade!='N'){
					printf("\n-----------------------------\n"); // Secção de redirecionamento;
		            printf(RED"VALIDAÇÃO INCONCLUSÍVEL!\n" RESET);
		            printf("POR FAVOR, RESPONDA ´´S`` EM CASO AFIRMATIVO E ´´N`` EM CASO NEGATIVO!\n");
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

			               printf(RED "\nO CAMPO NÃO PODE FICAR VAZIO! POR FAVOR DIGITE UM EMAIL VÁLIDO!\n" RESET);
                              printf("\n");
			               system("pause");

		               }

               }while (strlen(email) - 1 == 0);

			   
               do{

                    printf("\n\nSenha: ................................... : ");
                    fgets(senha, 50, stdin);
                    fflush(stdin);

                         if (strlen(senha) - 1 == 0){ 

			               printf(RED "\nO CAMPO NÃO PODE FICAR VAZIO! POR FAVOR DIGITE UMA SENHA VÁLIDA!\n" RESET);
                              printf("\n");
			               system("pause");

		               }


               }while (strlen(senha) - 1 == 0);

               


               printf(GREEN "\n\nCADASTRO CONCLUÍDO! \nVERIFIQUE OS POSTOS E HORÁRIOS DISPONÍVEIS NA SUA REGIÃO ADMINISTRATIVA NA SESSÃO 2 DO MENU PRINCIPAL" RESET);


           	break;

          





          case 2:
               
               do {

					fflush (stdin);
                    system ("cls || clear"); // Adiciona a capacidade do algoritmo limpar a tela tanto em Linux como em Windows;
                    printf(GREEN "---------------|Projeto Interdisciplinar|---------------\n" RESET); // Cabeçaalho de charme
                    printf ("Olá, seja bem vindo! Sou seu assistente virutal de direcionamento.\nPor favor, insira aqui os dígitos de seu CEP sem o travessão.\nCom isso, iremos redirecioná-lo para o posto de vacinação mais próximo:\n"); //ApresentaÃ§Ã£o do programa;
                    fgets (CEP, 8, stdin); 
                    fflush (stdin); // Dá uma limpada, para prevenir;


                    int len = strlen(CEP); // Determina o tamanho da string, neste caso será igual ao CEP.
                    if(CEP[len-1] == '\n' ){ // Primeiro passo da Gambiarra. Usando a String do CEP vamos começar a separar os 3 primeiros caracteres do resto dos algarismos;
                         CEP[len-1] = 0;
                    }


                    if (strlen(CEP) != 7){ // O 7 se deve ao fato de que o último vetor é nulo;
                          printf("\n-----------------------------\n"); //Secção dedicada a alertar o usuário sobre as limitações impostas ao código;
                          printf("Para podermos redirecioná-lo, precisamos de um CEP válido!\n");
                          printf("Por favor, insira seu CEP e não se esqueçaa de ignorar o travessão!\n");
                          printf("-----------------------------\n\n");
                          system("pause"); // Finaliza e reinicia o comando, não deixa a tela poluída;

                    }else if (CEP [0]!= '7') { // O sete de deve pelo char já possuir 1 de tamanho base. Isso é a condicional apenas, nada com se preocupar ainda;
                          printf ("Por favor, insira um CEP brasiliense vÃ¡lido.\n");
                          system ("pause"); // Refresh na tela do código;
                    } 


               }    while (strlen(CEP) != 7 || CEP [0] != '7'); 
                          strncpy (Cidade, CEP, 3); //Realiza a cópia do conteúdo de uma variável a outra.
                        

			    system ("cls || clear"); 


			    switch (posto){

				case 731:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Sobradinho: \n\n ");
				printf ("          Centro de Saúde Sobradinho 01         /        Complexo de Saúde de Sobradinho\n");
				printf ("Endereço: Quadra 14 – Área Especial – nº. 22/23 /         Rodovia DF-420\n");
				printf ("Telefone: (61)35912779                         /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 9 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 720: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um postos para Taguatinga Sul: \n\n ");
				printf ("          Unidade Básica de Saúde Nº 05.\n");
				printf ("Endereço: Taguatinga, Setor D Sul, AE 23 \n");
				printf ("Telefone: (61) 3561-2072 \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 9 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 724:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Gama: \n\n ");
				printf ("          Estacionamento Bezerrão\n");
				printf ("Endereço: Estacionamento Bezerrão\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 716: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Jardim Botânico, Lago Sul e São Sebastião: \n\n ");
				printf ("        Unidade Básica de Saúde Lago Sul             /        Policlínica Lago Sul\n");
				printf ("Endereço: Setor de Habitações Individuais Sul, QI 21 /         SHIS QI 21\n");
				printf ("Telefone: (61) 3366-2530                            /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 10 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 715:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Lago Norte, Itapoã, Paranoá: \n\n ");
				printf ("        Àrea Especial C - Saúde Nº 10             /        Unidade Básica De Saúde 03 \n");
				printf ("Endereço: SHIN, QI 3, Área Especial               /         Quadra 378, Conjunto A/E 04 - Del Lago II \n");
				printf ("Telefone: (61) 2017-1145                          /          (61) 2017-1550\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 733: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Planaltina: \n\n ");
				printf ("          Jardim De Infância Casa Da Vivência\n");
				printf ("Endereço: Ae 09, St. de Áreas Especiais Norte \n");
				printf ("Telefone: (61) 3901-4462    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 727:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Brazlândia: \n\n ");
				printf ("          UBS 1 Brazlândia\n");
				printf ("Endereço: EQ 6/8 Conjunto 10, Lt. 1 \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
                case 719: 
                printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Águas Claras: \n\n ");
				printf ("          Centro Universitário Unieuro\n");
				printf ("Endereço: Av. das Castanheiras, s/n - Lote 3700 \n");
				printf ("Telefone: (61) 3445-5888    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 18 horas, apenas em dia útil.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 725: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Santa Maria: \n\n ");
				printf ("          Núcleo de Insp. De Saúde de Sta. Maria\n");
				printf ("Endereço: Quadra 102 Conjunto A, B, C e D s/nº - prédio ao lado do hospital \n");
				printf ("Telefone: (61) 3385-4755    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 18 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 708: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Planalto: \n\n ");
				printf ("          Região Central\n");
				printf ("Endereço: Setor Médico Hospitalar Norte, Quadra 01- Área Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 707:
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Planalto: \n\n ");
				printf ("          Região Central\n");
				printf ("Endereço: Setor Médico Hospitalar Norte, Quadra 01- Área Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 702: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Vila Telebrasília: \n\n ");
				printf ("          Região Central\n");
				printf ("Endereço: Setor Médico Hospitalar Norte, Quadra 01- Área Especial \n");
				printf ("Telefone: (61) 2017-7050    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 717: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Núcleo Bandeirante e Candangolândia: \n\n ");
				printf ("          Centro de Saúde n°2 -  Núcleo Bandeirante    \n");
				printf ("Endereço: Área Especial 03, 3ª Avenida              \n");
				printf ("Telefone: (61) 3386-3031                         \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 7 às 16 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 722: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Ceilândia: \n\n ");
				printf ("          Centro de Saúde nº 3                  /        UBS 16º - Ceilândia \n");
				printf ("Endereço: St. M QNM 15                         /         Ceilândia, SHSN, Trecho 1, Etapa 1, Qd. 500, AE 2\n");
				printf ("Telefone: -                                   /          -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 6 às 17 horas, apenas em dia útil.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 721: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Taguatinga: \n\n ");
				printf ("          UBS 1º - Taguatinga\n");
				printf ("Endereço: QNG, AE 18/19, Área Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 7 às 19 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break; 
				case 723: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Samambaia: \n\n ");
				printf ("          UBS 2º Samambaia\n");
				printf ("Endereço: QS 611, AE 2, Área Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 703: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Norte: \n\n ");
				printf ("          UBS 2º Asa Norte\n");
				printf ("Endereço: EQN 114/115, Área Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 700: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Asa Sul: \n\n ");
				printf ("          UBS 1º Asa Sul \n");
				printf ("Endereço: SGAS 612, Lotes 38/39, L2 Sul \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break; 
				case 706: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Cruzeiro: \n\n ");
				printf ("          UBS nº 2 Cruzeiro Velho\n");
				printf ("Endereço: Setor Escolar, Lote 4, Área Especial \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 712: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Estrutural: \n\n ");
				printf ("          UBS 2º Estrutural \n");
				printf ("Endereço: AE 1, Setor Central \n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 718: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos dois postos para Riacho Fundo: \n\n ");
				printf ("         UBS 1º Riacho Fundo 1                    /        UBS 2º Riacho Fundo 2  \n");
				printf ("Endereço: QN 9, Área Especial 11                  /        QC 1, Conjunto 10, Lote 1, Riacho Fundo 2\n");
				printf ("Telefone: -                                      /        -\n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, apenas em dia útil.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				case 726: 
				printf ("--------------------------------|Projeto Interdisciplinar|--------------------------------\n\n");
				printf ("Identificamos um posto para Recanto das Emas: \n\n ");
				printf ("          UBS 3º - Recanto das Emas \n");
				printf ("Endereço: QD 104/105, Área Especial\n");
				printf ("Telefone: -    \n\n");
				printf ("------------------------------------------------------------------------------------------\n\n");
				printf ("Os postos funcionam pelo período matutino e vespertido, das 8 às 17 horas, em todos os dias da semana.\n");
				printf ("Serão priorizados para receber a imunização: idosos, crianças menores de 4 anos, funcionários da saúde,\nportadores de deficiências imunes, portadores de complicações respiratórias.\n\n ");
				printf ("Governo do Distrito Federal.");
				system ("pause");
				break;
				default: 
				printf ("---------------|Projeto Interdisciplinar|---------------\n");
				printf ("Desculpe, em sua região não há postos de saúde próximos.\n Busque a região administrativa mais próxima, através do site de contato: http://www.saude.df.gov.br/locaisdevacinacao/ \n\n");
				printf ("--------------------------------------------------------");
				system ("pause");
				break;
			}

          break;





          case 3: 
          		fflush (stdin);
                system ("cls");
                printf ("\n|--------------------------------|ESTATÍSTICAS E INFORMAÇÕES|--------------------------------|\n\n");
                printf ("VISÃO GERAL: CASOS:\n");
                printf ("___________________________|  DISTRITO FEDERAL  |___________|  BRASIL  |___________|  MUNDO    |\n");
                printf ("TOTAL DE CASOS REGISTRADOS:|  420 mil           |___________|  17,6 mi |___________|  177.0 mi |\n");
                printf ("TOTAL DE CASOS RECUPERADOS:|  402 mil           |___________|  15,6 mi |___________|  160.7 mi |\n");
                printf ("TOTAL DE CASOS DE ÓBITOS  :|    9.016           |___________|  494 mil |___________|    3.8 mi |\n");
                printf ("________________________________________________________________________________________________\n");
                printf ("VISÃO GERAL: MONITORAMENTO E CONTROLE DE VACINAÇÃO:\n");
                printf ("_____________________________|  BRASIL  |___________|  MUNDO    |\n");
                printf ("TOTAL DE DOSES APLICADAS    :|  81,5 mi |___________|   2,26 bi |\n");
                printf ("TOTAL DE PESSOAS IMUNIZADAS :|  23,9 mi |___________|  480.7 mi |\n");
                printf ("%% DE PESSOAS IMUNIZADAS     :|  11,3%%   |___________|    6,2%%   |\n");
                printf ("________________________________________________________________________________________________\n\n");
                printf ("COMO O VÍRUS SE PROPAGA?\n");
                printf ("O vírus que causa a COVID-19 é transmitido principalmente por meio de gotículas geradas quando uma pessoa infectada tosse,\nespirra ou exala. \n");
                printf ("Essas gotículas são muito pesadas para permanecerem no ar e são rapidamente depositadas em pisos ou superfícies.\n");
                printf ("Você pode ser infectado ao inalar o vírus se estiver próximo de alguém que tenha COVID-19 ou ao tocar em uma superfície contaminada e, em seguida, passar as mãos nos olhos, no nariz ou na boca.\n");
                printf ("______________________________________________________________________________\n\n");
                printf ("PARA EVITAR A PROPAGAÇÃO DO VÍRUS, AS SEGUINTES RECOMENDAÇÕES DEVEM SER SEGUIDAS:\n");
                printf (" - Lave suas mãos com frequência. Use sabão e água ou álcool em gel.\n");
                printf (" - Use máscara quando não for possível manter o distanciamento físico.\n");
                printf (" - Não toque nos olhos, no nariz ou na boca.\n");
                printf (" - Procure atendimento médico se tiver febre, tosse e dificuldade para respirar.\n");
                printf (" - Saia de casa apenas para atividades essenciais.\n");
                printf (" - Se você puder, vacine-se!\n");
                
                
                
          system ("pause");
          break;

     }
	} while (numeroMenu != 4);

     

    return 0;










}



