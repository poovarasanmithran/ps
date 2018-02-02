#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	printf("enter the  1st time\n");
	scanf("%d %d",&a,&b);
	printf("enter the 2nd time\n");
	scanf("%d %d",&c,&d);
	e=a-c;
	f=b-d;
	printf("%d %d",e,f);	
	return 0;
}
