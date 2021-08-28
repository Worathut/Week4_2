#include<stdio.h>
int main() {
	int n1, n2, n3;
	printf("Enter number : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	int num[] = { n1,n2,n3 };
	int min = num[0];
	for (int i = 0; i < 3; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("The least valuable number is %d ", min);
	return 0;
}