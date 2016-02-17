#include<stdio.h>
void divisor(int n,int x,int y){
	int i;
	for(i=1;i<=n;i++){
		if((i%x == 0) && (i%y != 0))
			printf("%d ",i);
	}
}
int main()
{
	int t,x,n,y,i;
	scanf("%d",&t);
	for (i = 1; i <= t ; i++)
	{
		scanf("%d",&n);
		scanf("%d",&x);
		scanf("%d",&y);
		divisor(n,x,y);
		printf("\n");
	}
	return 0;
}