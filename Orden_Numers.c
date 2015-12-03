#include <stdio.h>
	 int main()
	 {
	 	int N1, N2, N3,X;
		
		printf("dame un Numero ");
		   scanf("%d",&N1);
		printf("dame un Numero ");
		   scanf("%d",&N2);	
		printf("dame un Numero ");
		   scanf("%d",&N3);
		   
		   
		     if (N1< N2)
		     {
			 X= N1;
		      N1=N2;
		      N2=X;
			 }//printf ("\n El primer numero es%d:  ",N1 );
		      
			 if (N2<  N3  )
			 {
			 X= N2;
		      N2=N3;
		      N3=X;
		       if (N1< N2)
		     {
			 X= N1;
		      N1=N2;
		      N2=X;
			 }//printf ("\n El primer numero es%d:  ",N1 );
		      
			 if (N2<  N3  )
			 {
			 X= N2;
		      N2=N3;
		      N3=X;
			 }
		    	printf(" \n Elsiguente  numero e s: %d  %d %d  ",N1,N2,N3 );
		    	
		   //  if (N3>  N2&& N3>N1)
		     //   printf("  \n El siguente  numero  e s : %d",N3 )  ;
		     
	 	
	 	
		return 0;
	}
	
	
	
	}
