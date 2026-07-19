#include <stdio;

int main() {
    char inputStr[100];
    char subStr[100];

    // 1. 문자열 입력 받기
    printf("최대 99개 문자 입력 <inputStr> : ");
    scanf("%99s", inputStr);

    printf("찾는 문자열 <subStr> : ");
    scanf("%99s", subStr);

    // 각 문자열의 길이 구하기
    int inputLen = 0;
    while (inputStr[inputLen] != '\0') {
        inputLen++;
    }

    int subLen = 0;
    while (subStr[subLen] != '\0') {
        subLen++;
    }

    // 2. 문자열 검색 및 위치 출력
    printf("%s의 위치 : ", subStr);

    // 전체 문자열을 한 글자씩 이동하며 검사
    for (int i = 0; i <= inputLen - subLen; i++) {
        int match = 1; // 일치 여부를 체크하는 플래그 (1: 일치, 0: 불일치)

        // 찾는 문자열의 길이만큼 비교
        for (int j = 0; j < subLen; j++) {
            if (inputStr[i + j] != subStr[j]) {
                match = 0; // 한 글자라도 다르면 탈락
                break;
            }
        }

        // 완전히 일치하는 항목을 찾은 경우
        if (match == 1) {
            // 배열 인덱스는 0부터 시작하므로, 화면 출력용으로 i + 1을 해줍니다.
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}