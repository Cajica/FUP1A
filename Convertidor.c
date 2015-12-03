#include<stdio.h>
int main()
{
float n1;
float Bits;float Byt;
float KB;
float GB;
float TB;
  printf("\nla Programa Convertidor de valores de capacidad ");
  
   printf("Dame  El en MB  :");
   scanf("%f",&n1);
   		
    	Bits=n1*8388608;
    	Byt=(n1*1048576);
    	KB=(n1*1024);
    	GB=n1*0.0009765625;
    	TB=n1*0.0000009537;
    
    printf("\nla El valor en Bit es : %.1f",Bits);
    printf("\nla El valor en Byt es : %.1f",Byt);
    printf("\nla El valor en KB es  : %.1f",KB);
    printf("\nla El valor en GB es  : %f",GB);
    printf("\nla El valor en TB es  : %f",TB);
}
  

