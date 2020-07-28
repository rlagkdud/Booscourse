#include <stdio.h>

int main(void)
{
	int score = 0;
	int grade_score[9] = {95,90,85,80,75,70,65,60,0};
	char grade_eng[9][3] = {"A+","A","B+","B","C+","C","D+","D","F"};
	printf("학점 프로그램\n");
	printf("종료를 원하면\"999\"를 입력\n");
	printf("[학점 테이블]\n");
	printf("점수:");
	for(int i=0;i<9;i++)
	{
		if(i==8)
		{
			printf("%d\n",grade_score[i]);
	 	}
		else
		{
			printf(" %d\t",grade_score[i]);
		}
	}
	printf("학점:");
	for(int i=0;i<9;i++)
	{
		if(i==8)
		{
	 		printf("%s\n",grade_eng[i]);
		}
		else{
			printf(" %s\t",grade_eng[i]);
		}
	}
	while(true)
	{
		printf("성적을 입력하세요(0 ~ 100) : ");
		scanf("%d",&score);
		if(score == 999){
			break;
		}
		else if(score>100||score<0)
		{
			printf("** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다",score); 
			continue;
		}
		for(int i = 0;i<9;i++){
			if(score>=grade_score[i]){
				printf("학점은 %s 입니다.\n",grade_eng[i]);
				break;
			}
		}
	}
	printf("학점 프로그램을 종료합니다.");
}

