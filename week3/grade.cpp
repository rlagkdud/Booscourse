#include <stdio.h>

int main(void)
{
	int score = 0;
	int grade_score[9] = {95,90,85,80,75,70,65,60,0};
	char grade_eng[9][3] = {"A+","A","B+","B","C+","C","D+","D","F"};
	printf("���� ���α׷�\n");
	printf("���Ḧ ���ϸ�\"999\"�� �Է�\n");
	printf("[���� ���̺�]\n");
	printf("����:");
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
	printf("����:");
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
		printf("������ �Է��ϼ���(0 ~ 100) : ");
		scanf("%d",&score);
		if(score == 999){
			break;
		}
		else if(score>100||score<0)
		{
			printf("** %d ������ �ùٸ��� �Է��ϼ���. ������ 0 ~ 100 �Դϴ�",score); 
			continue;
		}
		for(int i = 0;i<9;i++){
			if(score>=grade_score[i]){
				printf("������ %s �Դϴ�.\n",grade_eng[i]);
				break;
			}
		}
	}
	printf("���� ���α׷��� �����մϴ�.");
}

