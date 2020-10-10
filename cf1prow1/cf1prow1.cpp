#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b, c, x, y;

void input() {
	if (a > b && a > c) {
		printf("Largest number is %d\n", a);
		for (x = 1; x <= a; x++) {
			for (y = 1; y <= x; y++) {
				printf("%d ", y);
			}
			printf("\n");
		}

	}
	else if (c > a && c > b) {
		printf("Largest number is %d\n", c);
		for (x = 1; x <= c; x++) {
			for (y = 1; y <= x; y++) {
				printf("%d ", y);
			}
			printf("\n");
		}
	}
	else if (b > a && b > c) {
		printf("Largest number is %d\n", b);
		for (x = 1; x <= b; x++) {
			for (y = 1; y <= x; y++) {
				printf("%d ", y);
			}
			printf("\n");
		}
	}
}
 
int main() {
	printf("input 3 number : ");
	scanf("%d %d %d", &a, &b, &c);
	input();
	return 0;
}