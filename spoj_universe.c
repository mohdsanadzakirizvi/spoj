#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ar,c,len,tmp,i;
	c=0;
	len=10;
	ar=(int *)calloc(10,sizeof(int));
	while(1){
		if(c<len){
			scanf("%d",&tmp);
			if(tmp!=42)
				ar[c]=tmp;
			else 
				break;
			c++;
		}
		else{
			ar=(int *)realloc(ar,(len+10)*sizeof(int));
			len+=10;
		}
	}
	for(i=0;i<c;i++)
		printf("%d\n",ar[i]);
	free(ar);
	return 0;
}