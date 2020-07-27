#include <stdio.h>

int main() {
	int inp_num = 0;
	char grade1[9][3] = {"A+","A","B+","B","C+","C","D+","D","F"};
	int grade2[9] = {95,90,85,80,75,70,65,60,0};
	printf("학점 프로그램\n종료를 원하면 \"999\"를 입력\n[ 학점 테이블 ]\n");
	printf("점수 : %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",grade2[0],grade2[1],grade2[2],grade2[3],grade2[4],grade2[5],grade2[6],grade2[7],grade2[8]);
	printf("학점 : %s\t%s \t%s\t%s \t%s\t%s \t%s\t%s \t%s\n",grade1[0],grade1[1],grade1[2],grade1[3],grade1[4],grade1[5],grade1[6],grade1[7],grade1[8]);
	while(1){
		printf("성적을 입력하세요 (0 ~ 100) : ");
		scanf("%d",&inp_num);
		if(inp_num==999){
			break;
		}else if(inp_num>100||inp_num<0){
			printf("** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n",inp_num);
			continue;
		}
		if(inp_num>=grade2[0]){
			printf("성적은 %s 입니다.\n",grade1[0]);
		}else if(inp_num>=grade2[1]){
			printf("성적은 %s 입니다.\n",grade1[1]);
		}else if(inp_num>=grade2[2]){
			printf("성적은 %s 입니다.\n",grade1[2]);
		}else if(inp_num>=grade2[3]){
			printf("성적은 %s 입니다.\n",grade1[3]);
		}else if(inp_num>=grade2[4]){
			printf("성적은 %s 입니다.\n",grade1[4]);
		}else if(inp_num>=grade2[5]){
			printf("성적은 %s 입니다.\n",grade1[5]);
		}else if(inp_num>=grade2[6]){
			printf("성적은 %s 입니다.\n",grade1[6]);
		}else if(inp_num>=grade2[7]){
			printf("성적은 %s 입니다.\n",grade1[7]);
		}else{
			printf("성적은 %s 입니다.\n",grade1[8]);
		}
	}
	printf("학점 프로그램을 종료합니다.");
  return 0;
}
