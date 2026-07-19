#include <stdio.h>
#include<string.h>

//집합을 비트마스킹(ai가정수 1개의 비트로 관리하는 방법이라 하네요)으로 관리
int S = 0;

void print_set() {
	printf("집합:{");
	for (int i = 1; i <= 20; i++) {
		if (S & (1 << i)) {
			printf("%d,", i);

		}
	}
	printf("}\n");
}

int main() {

	char cmd[20];
	int x;

	printf("연산을 선택하세요.(1<=x<=20): ");
	printf("add X| remove X| check X| toggle X| all 0| empty 0\n\n");

	while (1) {
		printf("input");
		if (scanf_s("% s % d", cmdm & x) == EOF) break;

		if (strcmp(cmd, "add") == 0) {
			S |= (1 << x);[cite:21,22]
			print_set();
		}
		else if (strcmp(cmd, "remove") == 0) {
			S &= ~(1 << x);[cite:21,23]
			print_set();
		}
		else if (strcmp(cmd, "check") == 0) {
			if (S & (1 << x)) {[cite:21,24]
				printf("1\n");
			}
			else {
				printf("0\n");
			}
			print_set();
		}
		else if (strcmp(cmd, "toggle") == 0) {
			S ^= (1 << x);[cite:21,24]
		}
		else if (strcmp(cmd, "all") == 0) {
			S = (1 << 21) - 1; [cite:21,25] //1~20까지의 비트 모두 1로 설정
				print_set();
		}
		else if (strcmp(cmd, "empty") == 0) {
			S = 0; [cite:21, 25]
				print_set();
		)
		printf("\n");
	}
	return 0;
}