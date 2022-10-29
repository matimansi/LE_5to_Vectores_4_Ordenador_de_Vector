
/*
    Realizar un programa al que se le ingresen 10 valores y los ordene de mayor a menor. +

	>>> TERMINADO <<<
*/

#include <stdio.h>
#define LIM 10

void Ordenador_Vector (int numeros[LIM]);

int main()
{
    int numeros[LIM];
	printf("\nBienvenido a nuestro programa...\n");
    printf("Ingrese 10 valores para ordenarlos de mayor a menor\n");
    for (int i = 0; i < LIM; i++)
    {
        printf(">>> ");
        scanf("%d", &numeros[i]);
    }
	printf("Vector Ingresado: {");
	for (int i = 0; i < LIM; i++)
	{
		if (i == 9)
		{
			printf("%d}\n", numeros[i]);
			break;
		}
		printf("%d, ", numeros[i]);
	}
	Ordenador_Vector (numeros);
    return 0;
}

void Ordenador_Vector (int numeros[LIM])
{
	int i, j, aux;
	for (i = 0; i < LIM; i++)
	{
		for (j = i; j < LIM; j++)
		{
			if (numeros[i] > numeros[j])			// >>> Bubblesort <<<
			{
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("Vector Ordenado: {");
	for (i = 0; i < LIM; i++)
	{
		if (i == (LIM - 1))
		{
			printf("%d}\n\n", numeros[i]);
			break;
		}
		printf("%d, ", numeros[i]);
	}
}
