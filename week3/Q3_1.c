#include <stdio.h>
#include <cs50.h>

int main(void){

    char grades[9][3] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    int scores[9] = {95, 90, 85, 80, 75, 70, 65, 60, 0};

    printf("학점 프로그램\n");
    printf("종료를 원하면 \"999\" 를 입력\n");
    printf("[학점 테이블]\n");
    printf("점수 : %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", scores[0], scores[1], scores[2], scores[3], scores[4], scores[5], scores[6], scores[7], scores[8]);
    printf("학점 : %s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", grades[0], grades[1], grades[2], grades[3], grades[4], grades[5], grades[6], grades[7], grades[8]);

    while(1) {
        int score = get_int("성적을 입력하세요 (0 ~ 100) : ");

        if (score == 999)
            break;
        else if (score < 0 || score > 100)
            printf("성적을 올바르게 입력하세요! (0 ~ 100)\n");
        else if (score >= scores[0])
            printf("학점은 %s 입니다.\n", grades[0]);
        else if (score >= scores[1])
            printf("학점은 %s 입니다.\n", grades[1]);
        else if (score >= scores[2])
            printf("학점은 %s 입니다.\n", grades[2]);
        else if (score >= scores[3])
            printf("학점은 %s 입니다.\n", grades[3]);
        else if (score >= scores[4])
            printf("학점은 %s 입니다.\n", grades[4]);
        else if (score >= scores[5])
            printf("학점은 %s 입니다.\n", grades[5]);
        else if (score >= scores[6])
            printf("학점은 %s 입니다.\n", grades[6]);
        else if (score >= scores[7])
            printf("학점은 %s 입니다.\n", grades[7]);
        else
            printf("학점은 %s 입니다.\n", grades[8]);
    }
    printf("학점 프로그램을 종료합니다.\n");
}
