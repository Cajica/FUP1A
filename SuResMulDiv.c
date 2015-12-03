#include<stdio.h>
int main(){
   int suma,res,mul,n1,n2;
   float div;
   
   printf("Ingrese un numero:");
   scanf("%d",&n1);
    printf("Ingrese otro  numero:");
   scanf("%d",&n2);
    suma=n1+n2;
    res=n1-n2;
    mul=n1*n2;
    div=(float)n1/n2;
    printf("la suma es %d:",suma);
     printf("\nla resta es %d:",res);
      printf("\nla multiplicacion es %d:",mul);
       printf("\nla division es %.2f",div);
    
    return 0;
    
}
