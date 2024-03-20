/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int year;
    int month;

    scanf("%d", &year);
    scanf("%d", &month);

    if(month == 4 || month == 6 || month ==9 || month == 11) {
        printf("30");
    }
    else if(month == 2) {
        if(year % 4 == 0) {
            if((year % 100) != 0 || (year % 400) == 0) {
                printf("29");
            }
            else {
                printf("28");
            }
        }
        else {
            printf("28");
        }
    }
    else {
        printf("31");
    }
    return 0;
}