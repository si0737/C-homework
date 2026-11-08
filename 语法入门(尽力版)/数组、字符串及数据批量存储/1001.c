#include <stdio.h>
int main() {
	int T, n, i, j, k;
	scanf("%d", &T);
	for (i = 1;i <= T;i++) {
		scanf("%d",&n);
		int a[n];
		for (j = 0;j < n;j++) {
			scanf("%d", &a[j]);
		}
		int max = a[0], min = a[0];
		for (k = 1;k < n;k++) {
			if (max < a[k]) {
				max = a[k];
			}if (min > a[k]) {
				min = a[k];
			}
		}
		int cut = max - min,x=0,y=0;
		double sum = 0;
		for (x = 0;x < n;x++) {
			sum += a[x];
		}
		double p =1.0/n*sum;
		sum = 0;
		for (y = 0;y < n;y++) {
			sum += (a[y] - p) * (a[y] - p);
		}
		double D = 1.0 / n * sum;
		printf("%d %.3lf\n", cut, D);
	}
	return 0;
}