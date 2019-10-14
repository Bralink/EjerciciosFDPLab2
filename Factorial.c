#include <stdio.h>

int factorial(int n){
	if(n == 1){
		return 1;
	}else{
		return n * factorial(n -1);
	}
}
int main ()
{
	int n;
	int res;
	printf("Ingrese un numero para calcular el factorial\n");
	scanf("%d",&n);
	res = factorial(n);

	printf("El factorial de %d es %d\n", n , res);
	return 0;
}
