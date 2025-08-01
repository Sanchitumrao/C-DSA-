#include<stdio.h>
int stack[5],top=-1;
void push();
void pop();
int main(){
    int i=0,j=0;
    while(i<=5){
    	push();
    	i++;
	}
	while(j<=5){
    	pop();
    	j++;
	}
	return 0;
	
}
void push(){
	int item;
	if(top<4){
		printf("Enter a number:\n");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
	else{
		printf("Stack Overflow\n");
	}
}
void pop(){
	int item;
	if(top>=0){
		item=stack[top];
		top=top-1;
		printf("Deleted number is %d\n",item);
	}
	else{
		printf("Stack underflow or Stack is empty");
	}
}
