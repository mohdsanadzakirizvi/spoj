#include <stdio.h>
void print(char input[]){
	int i,k;
	for(i=0,k=0;input[i]!='\0';i++)
		k++;
	for(i=0;i<k/2;i+=2)
		printf("%c",input[i]);
}
int main(void) {
	int t,i,j;
	char input[100];
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%s",input);
		print(input);
		printf("\n");
	}
	return 0;
}