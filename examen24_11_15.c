#include <stdio.h>

int main()
{
	

int x ,y ,z=10,AU,media, Num[10];
	for (x=0; x<z; x ++)
		{
			printf ("Ingrese datos: \n",x);
			scanf("%d", &Num[x]);
		}
	for (x=0; x<z; x++)
	{
		for (y=0;y<z+1; y++)
		{
			if (Num[y]> Num[x])
			{
				AU=Num[y];
				Num[y]=Num[x];
				Num[x]=AU;
			}
			

		}	
	}	
	printf ("Numeros ordenados\n");
	for(x=0; x<z; x++)
		printf("[%d]: %d \n",x,Num[x]);

	
	
	
	printf("El valor se encuentra en la linea: %d\n",(x/2));
	printf("El valor buscado es: %d\n",Num[5]);
	
	return 0;
}

