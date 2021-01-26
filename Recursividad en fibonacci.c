#include<stdio.h>
 
long fibonacci(int);
void main(void)
{
	int i;
 
	printf("NUMERO\t FIBONACCI\n\n");
	for(i=0;i<=20;i++)
		printf("%d\t %d\n", i, fibonacci(i));
}
 
long fibonacci(int n)
{
	if(n==0 || n==1)/*Caso base */
		return n;
	else
		return fibonacci(n-2) + fibonacci(n-1);
}