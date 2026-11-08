#include <stdio.h>
int main() {
	int n, x;
	scanf("%d%d", &n, &x);
	int i, a, count = 0;
		for (i = 1;i <= n;i++) {
			a = i;
			while (a > 0) {
				if (a % 10 == x) {
					count++;
				}
				a /= 10;
			}
		}
	printf("%d", count);
	return 0;
}