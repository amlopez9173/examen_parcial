#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void imprimir();
void pedirdatos1();
void imprimir1();
void imprimir2();

void multima();
int fi,col;
int **p_matriz;
int **p_matriz2;
int **p_matrizres;
int main()
{
    pedirdatos();
    pedirdatos1();

    imprimir();
    imprimir1();
    imprimir2();



    multima();
    free(p_matriz);
    free(p_matriz2);
    free(p_matrizres);

return 0;
}

void pedirdatos()
{
    printf("ingrese numero de filas\n");
    scanf("%d",&fi);

    printf("ingrese numero de filas\n");
    scanf("%d",&col);

    p_matriz=(int**)malloc(fi*sizeof(int*));
	for(int i=0; i<col; i++){
		p_matriz[i]=(int*)malloc(col*sizeof(int));
	}
	if(p_matriz==NULL){
		printf("Error reservando memoria. \n");
		exit (1);
	}else{
		printf("\n\n");
		for(int f =0; f<fi; f++)
        {
			for(int c=0; c<col; c++)
            {
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
            }
		}
	}
}
void imprimir()
{
    printf("Matriz : \n");
	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz+c)+f));
        }

        printf("\n");
    }
}

void pedirdatos1()
{
    printf("ingrese numero de filas\n");
    scanf("%d",&fi);

    printf("ingrese numero de filas\n");
    scanf("%d",&col);

    p_matriz2=(int**)malloc(fi*sizeof(int*));
	for(int i=0; i<col; i++){
		p_matriz2[i]=(int*)malloc(col*sizeof(int));
	}
	if(p_matriz==NULL){
		printf("Error reservando memoria. \n");
		exit (1);
	}else{
		printf("\n\n");
		for(int f =0; f<fi; f++)
        {
			for(int c=0; c<col; c++)
            {
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(p_matriz2+c)+f)));
            }
		}
	}
}
void imprimir1()
{
    printf("Matriz : \n");
	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz2+c)+f));
        }

        printf("\n");
    }
}

void multima()
{
    p_matrizres=(int**)malloc(fi*sizeof(int*));

	for(int i=0; i<col; i++)
    {
		p_matriz[i]=(int*)malloc(col*sizeof(int));
	}

	for(int i=0;i<fi;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<col;k++)
            {
                (*(*(p_matrizres+j)+i))=(*(*(p_matrizres+j)+i))+((*(*(p_matriz+i)+k))*(*(*(p_matriz2+k)+j)));

            }
        }
    }
}

void imprimir2()
{
    printf("Matriz resultado : \n");
	for(int i =0; i<fi; i++)
    {
		for(int j=0; j<col; j++)
		{
			printf("%d",*(*(p_matrizres+j)+i));
        }

        printf("\n");
    }
}
