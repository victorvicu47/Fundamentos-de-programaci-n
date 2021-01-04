#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=1,cont=0;
    float sum=0;
   
    while (num!=0)
    {
        printf("Introduzca número:");
        scanf("%d",&num);
        sum=sum+num;
        if (num!=0)
        {
           cont=cont+1;
        }
       
    }
   
    printf("La media es:%6.2f\n",sum/cont);
      
    system("PAUSE");     
    return 0;
}
