#include<stdio.h>
int main(){
   int Sum,Res,Mul,n1,n2;
   float Div;
   
   printf("Dame  un Valor :");
   scanf("%d",&n1);
    printf("Dame otro Valor :");
   scanf("%d",&n2);
    	Sum=n1+n2;
    	Res=n1-n2;
   		Mul=n1*n2;
    	Div=(float)n1/n2;
    printf("la suma es %d:",Sum);
    printf("\nla resta es %d:",Res);
    printf("\nla multiplicacion es %d:",Mul);
    printf("\nla division es %.2f",Div);
    
    return 0;
    
}
