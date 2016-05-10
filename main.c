#include <stdio.h>
#include <stdlib.h>
char mensagem[60];
int tecla, ra, senha, opcao;
int main(){
                                                            //Definindo o banner inicial
printf("          ,=OO,,:8O,,O88+,7OO,,OO:,OO8,,8O8,,8OO8OOO?OO.,,O8$~OOO888=,\n");
printf("          ,O87,,OOO,:OOOO,OO,,$OO,7O888,O8?~O8.,,$OO,8O,,8O?,8OO$$$$,,\n");
printf("          ,OO,,,OO8,$O$7O7OO,,OOI,8O8OOZO8.Z8O,,,OO8,OO:OO$,,OOOOOO?,,\n");
printf("          ,OOO?OOO:,O8.,ZOO8,=OO,,OO=,OOOZ,=OO?,$O8:,=8OOO,,,OOI++=~,,\n");
printf("          ,.+OOO~,,?OZ,,.OOI,OZ$.:OO,,,OZ:,,.?O8O.,,,,OZO,,,?OOOOOO,,,\n");
printf("          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
printf("          ,.~$Z7,.,,,,,.,?ZZ?,,,,,,,,:IZ$=.,,,,,,,:==:,,,,,,,?$Z?,,,,,\n");
printf("          ZZ$$ZZZZ?,,,,ZZ$$ZZZZ,,,,,$ZZZZZZ7,,,.ZZZZZZZZ,,,Z$ZZ$ZZZ.,,\n");
printf("          ZZZ$Z$ZZZ,,,,Z$Z$ZZZZ.,,,?Z$$$$ZZZ,,,,Z$$$ZZZZ,,,ZZZZ$$ZZ:,,\n");
printf("          =ZZ$ZZZZ,,,,,IZZ$ZZZZ,,,,.$Z$$ZZZ,,,,,7ZZZZZZ+,,,:ZZ$$ZZZ,,,\n");
printf("          ,,,==~.,,,,,,,,:==:,,,,,,,,,~=~,.,,,,,,,?$$+,,,,,,,:~=:,,,,,\n\n\n");

printf("             ==SEJA BEM-VINDO A CENTRAL DO ALUNO - NOVE DE JULHO \n\n==");


printf("\n\n RA: ");
scanf("%d", &ra);

printf("\n RA - OK [-]");

printf("Agora entre com a senha: ");
scanf("%d", &senha);

if (ra != 916121611 && senha != 123) 
{
       
       system("cmd /k msg * erro ");       
}
else
{   
     printf("==========BEM-VINDO AO PAINEL DE EXERCICIOS==========\n\n\n");
     printf("Selecione um dos scrips abaixo: \n\n");
     printf(" 1 - ABRIR NOTEPAD \n 2 - EXIBIR MENSAGEM \n - 3 ABRIR DISCO C:\n");
     printf("Opcao: ");
     scanf("%d",  &opcao);
     if (opcao == 1)
     {
              system("cmd /k notepad");
              system("pause");
              printf("Finalizado.");
              
              }
     
     else (opcao == 2);
     {
          printf("Digite a mensagem que vc quer: ");
          scanf("%s", mensagem);
          
//          system("cmd /k msg *", mensagem);
          system("pause");        
          return 0;
          }
     
     
     
}    


}



