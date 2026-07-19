#include <stdio.h>
#include <string.h>

//판별함수

int check_scale(char scale[]) {
	int asc_count = 0;
	int desc_count = 0;

	char ref[8] = { 'C', 'D', 'E', 'F', 'G', 'A', 'B','C' };

	for (int i = 0; i < 8; i++) {
		if (scale[i] == ref[i]) asc_count++;
		else if (scale[i] == ref[7 - i]) desc_count++;
	}
	if (asc_count == 8) return 1; //오름차순
	else if (desc_count == 8) return 2;
	return3;
}

int main() {
	charinput[10];
	printf("음계 입력 (C D E F G A B C): ");
	scanf_s("%s", input);

	int result = check_scale(input);

	printf("결과: ");
	switch (result) {
	case 1:
		printf("ascending\n");
		break;
	case 2:
		printf("descending\n");
		break;
	case 3:
		printf("mixed\n");
		break;
	}

	return 0;
}