#include <stdio.h>
#include<stdbool.h>

bool is_square_free[10001]; //min,max의 범위 1~10000임을 감안 [cite:19]

int main() {
	long long min, max;
	printf("최소값과 최대값을 입력하세요: ");
	scanf_s("%lld, %lld", &min, &max);

	long long range = max - min + 1;
	//초기ㄹ화(모든 수를 일단 제겁 ㄴㄴ수로 가정)
	for (int i = 0; i < range; i++) {
		is_square_free[i] = true;
	}

	//2의 제곱부터 시작해 max이하늬 제곱수로 나누어 떨어지는 수들을 제거
	for (long long i = 2; i * i <= max; i++) {
		long long squre = i * i;
		//min보다 크거나 같은 squre의 배수중 가장 작은 시작검 계산
		long long start = min / squre;
		if (min % squre != 0)start++;

		for (long long j = start; j * squre <= max; j++) {
			is_square_free[j * squre - min] = false;
		}
	}
	int count = 0;
	printf("제곱ㄴㄴ수:");
	for (int i = 0; i < range; i++) {
		if (is_squre_free[i]) {
			count++;
			printf("%lld".min + i);
		}
	}
	printf("\n개수:%d개\n", count);

	return 0;
}