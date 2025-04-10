#include <stdio.h>

int main() {
    unsigned char A;
    int i, count = 0;
    
    // 0~255 사이의 수 입력받기
    printf("0~255 사이의 수를 입력하세요: ");
    scanf("%hhu", &A);
    
    // A를 2진수로 출력
    printf("%d의 2진수 표현: ", A);
    for (i = 7; i >= 0; i--) {
        int bit = (A >> i) & 1;
        printf("%d", bit);
        if (bit == 1) {
            count++;
        }
    }
    printf("\n");
    
    // 1의 개수 출력
    printf("1의 개수: %d\n", count);
    
    // 상위 4비트 출력
    printf("상위 4비트: ");
    for (i = 7; i >= 4; i--) {
        printf("%d", (A >> i) & 1);
    }
    printf("\n");
    
    return 0;
}
