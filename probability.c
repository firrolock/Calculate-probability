#include <stdio.h>
int prob;

// int sum(int num) {
// 	if (num == 0) {
// 		return 1;
// 	}
// 	prob = num + 1 + sum(num - 1);
// 	return prob;
// }

int calculate(int num, int lvl) {
	if (lvl == 1) {
		return num + 1;
	}
	if (num == 0) {
		return 1;
	}
    prob = calculate(num, lvl - 1) + calculate(num - 1, lvl);
	return prob;
}

int main(void) {
	int num = 0, level = 0;
	printf("Calculating probability program.\n");
	printf("Enter the number of item(cannot be less than 1): ");
	scanf("%d", &num);
	printf("Enter the number of basket(cannot be less than 2): ");
	scanf("%d", &level);
	calculate(num, level);
	printf("Calculating...\n");
	printf("All of the probability is %d\n", prob);
	return 0;
}