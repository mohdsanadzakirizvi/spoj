#include<stdio.h>
char stack[400];
int top;
int priority(char sym){
	switch(sym){
		case '^':
			return 6;
		case '*':
		case '/':
			return 4;
		case '+':
		case '-':
			return 2;
		default:
			return 0;
	}
}
void push(char sym){
	if(top!=399)
		stack[++top]=sym;
	else
		printf("STACK OVERFLOW");
}
char pop(){
	if(top!=-1)
		return stack[top--];
	else
		printf("STACK UNDERFLOW");
}
int main(){
	char inp[400],pos[400],sym,temp;
	int i,j,k,t;
	j=0;top=-1;
	scanf("%d",&t);
	for(k=1;k<=t;k++){
		scanf("%s",inp);
		for(i=0;inp[i]!='\0';i++){
			sym=inp[i];
			if(sym == '(')
				push(sym);
			else if (sym == ')'){
				temp=pop();
				while(temp!='(' && top!=-1){
					if(temp!='(')
						pos[j++] = temp;
					temp=pop();
				}
			}
			else if (isalpha(sym))
				pos[j++]= sym;
			else {
				while(top!=-1 && (priority(sym)<=priority(stack[top]))){
					temp=pop();
					pos[j++]=temp;
				}
				push(sym);
			}

		}
		while(top!=-1){
			temp = pop();
			if(temp!='(')
				pos[j++] = temp;
		}
		pos[j] = '\0';
		printf("%s\n",pos);
		j=0;
	}
	return 0;
}
