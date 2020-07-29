#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scores[9] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
char *grades[9] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length);

int main(){
    printf("학점프로그램\n");
    printf("종료를 원하면 \"999\" 를 입력\n");
    printf("[학점테이블]\n");
    printf("점수 : ");
    for(int i = 0; i<9; i++)
        printf("%d\t",scores[i]);
    printf("\n");
    printf("학점 : ");
    for(int i=0; i<9 ; i++)
        printf("%s\t",grades[i]);
    printf("\n");

    while(1){
        int ans;
        printf("성적을 입력하세요(0~100) : ");
        scanf("%d",&ans);
        if (ans == 999){
            printf("학점 프로그램을 종료합니다.\n");
            break;
        }
        if(ans >= 0 && ans <= 100){
            char *grade = calculateGrade(ans, scores, grades, 9);
            printf("학점은 %s 입니다.\n",grade);
        }
        else{ 
            printf("** %d 성적을 올바르게 입력해주세요. 범위는 0~100 입니다.\n",ans);
        }
    }
}

char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length) {
	char *grade;
	for (int i = 0; i < length; i++) {
		if (totalScore >= scores[i]) {
			grade = malloc(sizeof(char) * strlen(grades[i]));
			strcpy(grade, grades[i]);
			break;
		}
	}
	return grade;
}