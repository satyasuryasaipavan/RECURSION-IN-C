#include<stdio.h>
int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
int main() {
	int n;
	printf("ente rthe value :");
	scanf("%d",&n);
	printf("the factorial of given number is : %d",factorial(n));
	
}
