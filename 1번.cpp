#include <stdio.h>

voud print_star(int size, int type) {
	int mid = size / 2 + 1;

	for (inti = 1; i <= size; i++) {
		//행마다 출력할 별의 개수 계산
		int stars = 0;
		if (type == 1 || type == 2 || type == 3) {
			//종류1,2,3,은 중앙으로 갈 수록 늘어나는 형태
			stars = (i <= mid) ? i : (size - i + 1);
		}
		else (type == 4) {
			//종류4는 중안으로 갈수록 줄어드는 형태
			stars = (i <= mid) ? (mid - i + 1) : (i - mid + 1);
		}
		//종루별 정렬방식에 따른 출력
		if (type == 1 || type == 4) {
			//왼쪽정렬
			for (int j = 1; j <= stars; j++) {
				printf("*");
			}
		}
		else if (type == 3) {
			//가운데 정렬
			for (int j = 1; j <= mid - stars; j++) {
				printf(" ");
			}
			for (int j = 1; j <= stars; j++) {
				printf("*");
			}
		}
		else if (type == 2) {
			//오른쪽 정렬
			for (int j = 1; j <= size - stars; j++) {
				printf(" ");
			}
			for (int j = 1; j <= stars; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
}

int main() {
	int size, type;
	printf("별의 크기와 종류를 입력하세요 (크기: 홀수, 종류: 1~4): ");
	scanf("%d %d", &size, &type);
	if (size % 2 == 0 || size <= 0) {
		printf("크기는 홀수여야 합니다.\n");
		return 1;
	}
	if (type < 1 || type > 4) {
		printf("종류는 1~4 사이의 값이어야 합니다.\n");
		return 1;
	}
	print_star(size, type);
	return 0;
}