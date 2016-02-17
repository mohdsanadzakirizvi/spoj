#include<stdio.h>
void simple_sum(int a,int b){
	int sum,i;
	for(i=a,sum=0;i<=b;i++){
		sum += i*i;
	}
	printf("%d", sum);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	simple_sum(a,b);
	return 0;
}