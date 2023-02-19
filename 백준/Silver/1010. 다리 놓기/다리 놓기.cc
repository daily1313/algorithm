#include <stdio.h>
unsigned long long combination(int r,int n);
unsigned long long factorial(int n);
int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n, r;
		scanf("%d %d", &r, &n);
		if (r == n) {
			printf("1\n");
			continue;
		}
		unsigned long long res = combination(r,n);
		printf("%lld\n", res);
	}
	
}
unsigned long long combination(int r, int n) {
	unsigned long long com = 1;
	int x = n - r;
	if (r > x) {
		x = r;
		for (int k = n; k > x; k--) {
			com *= k;
		}
		com /= factorial(n-r);
		return com;
	}
	else {


		for (int k = n; k > x; k--) {
			com *= k;
		}
		com /= factorial(r);
		return com;
	}
}
unsigned long long factorial(int n) {
	unsigned long long result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}