#include <stdio.h>
	 int main()
	 {
	 	int Ed;
		
		printf("Dame tu edad ");
		   scanf("%d",&Ed);
		  
		   if (Ed <= 10)
		     	printf (" \n Eres un Niño  \n" );
			 if (Ed>=11 && Ed <=18)
			printf(" \n Eres un Adolescente \n" );
		     if (Ed>=19 && Ed<=29)
		    printf(" \n Eres un Joven \n")  ;
		   
		   if (Ed>=30  && Ed<=60)
		    printf(" \n Eres un Adulto  \n")  ;
		    
		     if (Ed>=61  && Ed<=99)
		    printf(" \n Eres un Adulto mayor  \n")  ;
		    
		    
		    
		     if (Ed >=100)
		     
		     	printf (" Error estas muerto  T  _T\n");
	}
