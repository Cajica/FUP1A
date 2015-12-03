#include <stdio.h>
 main() {
	int Met,Rec,Dia, Des;
	int dia=0;

	printf("Dame cuantos metros mide el poso\n");
	
	
	scanf("%d",& Met);
	printf("Cuantos metros Recorre el cangrejo \n");
	scanf("%d",&Rec);
	printf("Cuantos metros deciende el cangrejo \n");
	scanf("%d",&Des);
	if(Des>=Rec){
		printf("\n El cangrejo NO Saldra T_T");
	}else{
	do{
		

		Dia = Dia+Rec;
		
		if((Dia-Des)>0)
			Dia = Dia-Des;
		else
			Dia = 0;
		
		
		if(Dia >= Met){
			printf("\n El cangrejo ha salido!!!!!!!!!");
		    printf("\n los dias son %d",dia);
		}else{
			printf ("\n Le falta por recorrer %d \n",  Met-Dia);
		    dia=dia+1;
		}
		
	}while(Dia<Met);
	}
	
	
	

	
	
	
	return 0;
}

