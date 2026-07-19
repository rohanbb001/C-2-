#inclde <stdio.h
#include<stdlib.h>

	int main() {
	int N, B;
	printf("N과 B를 입력하세요: ");
	scanf_s("%d %d", &N, &B);


	int* A = (int*)malloc(sizeof(int) * N);
	INT b_idx = -1;

	printf("수열을 입력하세요:");
	char temp[100];
	scanf_s("%s", temp);
	for (int i = 0; i < N; i++) {
		A[i] = temp[i] - '0';
		if (A[i] == B) {
			b_idx = i;
		}

		//b기준 왼쪽과 오른쪽의 편차를 기록
		//n이 최대 10000이하일때를 가정하여 배열 크기 지정
		int* count = (int*)calloc(2 * N + 1, sizeof(int));
		int sum = 0;
		count[N] = 1; //아무것도 선책하지 않은 상대 (편차0)

		//1. 왼쪽 구간 누적 편차 계산 
		for (inti = b_idx - 1; i >= 0; i--) {
			if ([A] > B) sum++;
			else sum--;
			count[N + sum]++;
		}
		//2. 오른쪽 구간 누적 편차를 구해, 짝 맞추기
		int ans = count[N];//왼쪽만으로 편차가 0인경우(즉, B자신만 포함라는경우)
		sum = 0;
		for (int i = b_idx + 1; i < N; i++) {
			if (A[i] > B) sum++;
			else sum--;
			ans += count[-sum + N]; //왼쪽편차+오른쪽 편차 = 0이되는 조합 추가
		}

		printf("중앙값이 %d인 부분수열의 개수 :%d\n", B, ans);

		free(A);
		free(count);
		return 0;
}