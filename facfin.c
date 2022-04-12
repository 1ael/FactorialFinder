#include <stdio.h>

int find_factorial(int);
int main() {
	int num, fact;
	
	printf("enter any inetger number:\n");
	scanf("%d", &num);

	fact = find_factorial(num);

	printf("factorial of %d is: %d\n", num, fact);
	return 0;
}

int find_factorial(int n) {
	if (n==0)
		return(1);

	return(n*find_factorial(n-1));
}
