#include <stdio.h>
#include <stdlib.h>
char ra, senha;
int tecla;
int main(){

											//Definindo o banner inicial

printf(",=OO,,:8O,,O88+,7OO,,OO:,OO8,,8O8,,8OO8OOO?OO.,,O8$~OOO888=,\n");
printf(",O87,,OOO,:OOOO,OO,,$OO,7O888,O8?~O8.,,$OO,8O,,8O?,8OO$$$$,,\n");
printf(",OO,,,OO8,$O$7O7OO,,OOI,8O8OOZO8.Z8O,,,OO8,OO:OO$,,OOOOOO?,,\n");
printf(",OOO?OOO:,O8.,ZOO8,=OO,,OO=,OOOZ,=OO?,$O8:,=8OOO,,,OOI++=~,,\n");
printf(",.+OOO~,,?OZ,,.OOI,OZ$.:OO,,,OZ:,,.?O8O.,,,,OZO,,,?OOOOOO,,,\n");
printf(",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
printf(",.~$Z7,.,,,,,.,?ZZ?,,,,,,,,:IZ$=.,,,,,,,:==:,,,,,,,?$Z?,,,,,\n");
printf("ZZ$$ZZZZ?,,,,ZZ$$ZZZZ,,,,,$ZZZZZZ7,,,.ZZZZZZZZ,,,Z$ZZ$ZZZ.,,\n");
printf("ZZZ$Z$ZZZ,,,,Z$Z$ZZZZ.,,,?Z$$$$ZZZ,,,,Z$$$ZZZZ,,,ZZZZ$$ZZ:,,\n");
printf("=ZZ$ZZZZ,,,,,IZZ$ZZZZ,,,,.$Z$$ZZZ,,,,,7ZZZZZZ+,,,:ZZ$$ZZZ,,,\n");
printf(",,,==~.,,,,,,,,:==:,,,,,,,,,~=~,.,,,,,,,?$$+,,,,,,,:~=:,,,,,\n");

printf("\n\n RA:   ");
scanf("%c", &ra);
tecla = getchar();
if (tecla = 13){
	printf("\n RA ok. Entre com sua senha: \n ");
	scanf("%c", &senha);
	
	system("pause");
	return 0;
	
}



}



	


