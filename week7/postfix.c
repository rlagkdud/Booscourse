#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int capacity;
    char* array;
} Stack;

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char *)malloc(stack->capacity*sizeof(char));
    return stack;
}

int isFull(Stack* stack) {
    return stack->top == stack->capacity-1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, char item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
//    printf("%c pushed to stack\n", item);
}

int pop(Stack* stack) {
    // 이곳을 채워주세요!
    if(isEmpty(stack))
	{
    	return -9999;	
	}
    int tmp = stack->array[stack->top];
    stack->top = stack->top-1;
//    printf("%c pop to stack\n", tmp);
    return tmp;
}

int peek(Stack* stack) {
    // 이곳을 채워주세요!
    if(isEmpty(stack)){
//    	printf("this is empty\n");
    	return; 
	}
    return stack->array[stack->top];
}

int weight(char operate)
{
	switch(operate)
	{
		case '(':
			return 0;
		case '+': case'-':
			return 1;
		case '*': case'/':
			return 2;
	}
 } 
 
int compare(int a,int b)
{
	if(a<=b)
	{
		return 1;	
	}
	else return 0;
}

Stack* postfix(Stack *poststack,char *a){
//	printf("%s\n",a);
	Stack *tmpstack = createStack(100);
	for(int i = 0;i<strlen(a);i++){
//		printf("%c\n",a[i]);
		switch(a[i])
		{
			case '(':
//				printf("oper");
				push(tmpstack,a[i]);
				break;
			case ')':
				while(peek(tmpstack)!='(')
				{
//					printf("oper -> num");
					push(poststack,pop(tmpstack));
					
				}
				pop(tmpstack);
				break;
			case '+': case '-': case '*': case '/':
				if(isEmpty(tmpstack))
				{	
//					printf("isempty");
					push(tmpstack,a[i]);
				}
				else
				{
//					printf("oper  ");
					while(compare(weight(a[i]),weight(peek(tmpstack))))
					{
//						printf("%c %c\n",a[i],peek(tmpstack));
						push(poststack,pop(tmpstack));
						
					}
						push(tmpstack,a[i]);
					
				}
				break;
			default:
//				printf("num  ");
				push(poststack,a[i]);
				break;
						
		}
	}
	while(!(isEmpty(tmpstack))){
//		printf("oper -> num");
		push(poststack,pop(tmpstack));
	}
	return poststack;
}

int main()
{
	Stack* post = createStack(100);
	char *prefix;
	char *result;
	prefix = (char *)malloc(sizeof(char) * 100);
	result = (char *)malloc(sizeof(char) * 100);
	scanf("%s",prefix);
	post = postfix(post,prefix);
	for(int i=0;i<post->top+1;i++){
		result[i] = post->array[i];
	}
	printf("%s",result);
	
}
