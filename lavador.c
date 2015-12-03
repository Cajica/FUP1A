#include <stdio.h>
	 int main()
	 {
	 	int Kil, Rop;
		
		printf("¿Cuantos Kilos Quieres Lavar?\n (0-10kg Minimo,  11-15kg Medio, 16-20kg Maximo): ");
		   scanf("%d",&Kil);
		  // if (Kil<=20)
	//	{
		printf("¿Que tipo de ropa es?\n( 1. Delicada, 2. Normal, 3. Sucia ): ");
		scanf("%d",&Rop );
		
		//  0 <= 10 // minimo
		//  11 <= 15 // medio 
		//  16 <=  20 // maximo 
		//  > 20 // no lavar 
		
		   if (Kil <= 10)
		     	printf (" \n La lavadora se lleno al minimo \n" );
			 if (Kil>=11 && Kil<=15)
			printf(" \n La lavdora se lleno  a la mitad \n" );
		     if (Kil>=16 && Kil<=20)
		    printf(" \n La lavadora  se lleno al maximo \n")  ;
		   // }
		     if (Kil >  20)
		     {
		     	printf (" No se puede lavar\n");
		     	return 0;
			 }
			 
		  //1) delicada--> 5 minutos 
		  //2) Normal --> 10 minutos 
		  //3) Sucia --> 20 minuto
	
		   if (Rop>3)
		
		printf (" Error \n");
		   
		 if (Rop==1)
	 		printf (" Su ropa se lavara por 5 minutos \n ");
		 if (Rop==2)
			printf (" Su ropa se lavara por 10 minutos \n"   );
		 if  ( Rop==3)
			printf  (" Su ropa se lavara por 20 minutos \n "   );
		
		 
		
	
		    
		   // system("pause");
	 	
		return 0;
	}
