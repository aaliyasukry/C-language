#include<stdio.h>
int main(){
	int num1,num2;
	float answer;
	char op;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	printf("Operator : ");
	scanf("%s",&op);
	
	printf("Enter next number: ");
	scanf("%d", &num2);
	
	switch(op){
		case '+': printf("Answer: %d\n",num1+num2);
		break;
		case '-': printf("Answer: %d\n",num1-num2);
		break;
		case 'x':
		case '*': printf("Answer: %d\n",num1+num2);
		break;
		break;
		case '/': answer=num1/num2;
		 printf("Answer: %.1f\n",answer);
		break;
		default: printf("Error");
		break;
		
	}
	return 0;
	
}