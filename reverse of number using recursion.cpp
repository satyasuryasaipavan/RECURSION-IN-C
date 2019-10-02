#include<stdio.h>
int reverse(int n) {
	int r = 0;
	if (n == 0) {
		return 1;
	}
	r = r * 10;
	r = r + n % 10;
	reverse(n/10);
	return r;
}
int main() {
	int n,r;
	printf("enter the value:");
	scanf("%d",&n);
	r = reverse(n);
	printf("reverse of given number : %d",r);
}
