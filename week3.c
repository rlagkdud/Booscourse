#include <stdio.h>
#include <stdlib.h>
#include<string.h>

const int NUMBER_OF_ANSWERS = 10;
const int ANSWERS[NUMBER_OF_ANSWERS] ={1,2,3,4,5,1,2,3,4,5};

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES]={95,90,85,80,75,70,65,60,0};
const char *GRADES[NUMBER_OF_GRADES]={"A+","A","B+","B","C+","C","D+","D","F"};


char* calculateGrade(int totalScore,const int scores[],const char *grades[],int length);

int main(int argc,char *argv[]){

    printf("학점 프로그램\n종료를 원하면 \"999\"를 입력\n[학점 테이블]\n");
    printf("점수: ");
    for(int i = 0; i<NUMBER_OF_GRADES; i++){
        printf("%d\t",SCORES[i]);
    }
    printf("\n");
    printf("학점: ");
    for(int i = 0; i<NUMBER_OF_GRADES; i++){
        printf("%s\t",GRADES[i]);
    }
    printf("\n");

    while(1){
        int score;
        char* fgrade;
        printf("성적을 입력하세요 (0 ~ 100) : ");
        scanf("%d",&score);
        if(score>100 || score <0){
            if(score == 999){
                printf("학점 프로그램을 종료합니다.\n");
                break;
            }
            else{
                printf("** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n",score);
            }
        }
        else{
            printf("학점은 %s 입니다.\n",calculateGrade(score,SCORES,GRADES,NUMBER_OF_GRADES));
        } 
    }
    return 0;
}


char *calculateGrade(int totalScore,const int scores[],const char *grades[],int length){
    char *grade=NULL;
    for(int i = 0; i<length; i++){
        if(totalScore>=scores[i]){
            grade = malloc(sizeof(char)*strlen(grades[i]));
            strcpy(grade,grades[i]);
            break;
        }
    }
    return grade;
}
