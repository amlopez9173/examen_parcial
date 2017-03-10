#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void llenar_matriz();

int f, c, **pm;

int main()
{
    pedir_datos();
    llenar_matriz();

    free(pm);

return 0;
}

void pedir_datos()
{
    printf("Ingrese filas: \n");
    scanf("%d",&f);
    printf("Ingrese columnas: \n");
    scanf("%d",&c);

    pm=(int **)malloc(f*sizeof(int*));
    for(int i=0;i<c;i++)
    {
        pm[i]=(int *)malloc(c*sizeof(int));
    }

}

void llenar_matriz()
{
    int m=f*c,q, c2=0,x=1, z=0;
    int vec[m];

    printf("ingrese numero\n");
    scanf("%d",&q);

    for(int i=0;i<m;i++)
    {
        while(x==1)
        {
            for(int n=1;n<=q;n++)
            {
                if(q%n==0)
                {
                    c2++;
                }
            }
            if(c2==2)
            {
                vec[i]=q;
                x=0;
            }
            else
            {
                q=q+1;
                c2=0;
            }
        }
        x=1;
        q=q+1;
    }

    for(int i=0;i<m;i++)
    {
        printf("%d ",vec[i]);
    }

    printf("matriz de primos\n");

    for(int i=0;i<f;i++)
    {
        printf("\n");
        for(int e=0;e<c;e++)
        {
            *(*(pm+e)+i)=vec[z];
            printf("%d ",*(*(pm+e)+i));
            z++;
        }
    }


}
