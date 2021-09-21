#include<stdio.h>
void scan(int x[10]) {
	int i = 0;
	printf("Enter Number to Array : ");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &x[i]);
	}
	printf("Data in array :");
	for (i = 0; i < 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\nResult : ");
	for (i = 0; i < 10; i++) {
		if (i >= 1) {
			if ((x[i] - 1) % 2 == 1 && (x[i - 1] - 1) % 2 == 0 && (x[i + 1] - 1) % 2 == 0) {
				printf("%d ", x[i]);
			}
		}
	}

}
int main() {
	int x[10];
	scan(x);
	return 0;
}