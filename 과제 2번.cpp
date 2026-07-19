#include <stdio.h>

void print_array(int arr[], int size) {
	for (inti = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[8];

	//8개의 정수를 입력받아 배열에 저장
	for (int i = 0; i < 8; i++) {
		prinf("정수 %d 입력: ", i + 1);
		scanf_s("%d", &arr[i]);
	)

	//선택 정렬

	for (inti= 7;i>0;i--){
		imt max_idx = 0;
		for (int j = 1; j <= i; j++) {
			if (arr[j] > arr[max_idx]) {
				max_idx = j;
			}
		}
		//최댓값과 남은 범위의 가장 마지막 원소 교환
		int temp = arr[i];
		arr[i] = arr[max_idx];
		arr[max_idx] = temp;

		//중간 과정 출력
		printf("%d:", 8 - i);
		print_array(arr, 8);

	}
	return 0;
	
}
