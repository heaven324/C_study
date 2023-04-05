#include <stdio.h>

int sum(int num);

int main() {
	int num;

	scanf("%d", &num);

	printf("%d \n", sum(num));

	return 0;
}

int sum(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		num *= sum(num - 1);
		return num;
	}
}
