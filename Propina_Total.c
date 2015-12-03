#include<stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int  main()
{
   int n1, Per;
   float Pro, Pro2,Pro3,Sub,Sub1,Sub2;
  printf("Dame  El Total De Tu Cuenta  :");
   	scanf("%f",&n1);	
    	Pro= n1*.1;
    	Pro2=n1*0.15;
    	Pro3=n1*.2;
    
    printf("\nla Propina del 10 es %.2f",Pro);
    printf("\nla Propina del 15 es %.2f",Pro2); 
    printf("\nla Propina del 20 es %.2f",Pro3); 
    
    		 	printf("Dame  El nuemro de personas : ");
    		 	
   				scanf("%d",&Per);
   				
   				Sub=(Pro+n1)/Per;
   				Sub1=(Pro2+n1)/Per;
   				Sub2=(Pro3+n1)/Per;
   		//	cout <<"\n Cada persona debe pagar "<< Sub << endl;
   				 printf("\n Cada persona debe pagar %.2f",Sub);
   				 printf("\n Cada persona debe pagar %.2f",Sub1);
   				 printf("\n Cada persona debe pagar %.2f",Sub2);

    
}
    

