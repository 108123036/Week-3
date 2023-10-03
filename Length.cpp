#include <stdio.h>
int main ()
{
	int a,s;
	printf("enter thh number \n");
	scanf("%d",&a);
	for(s=0;a!=0;s++)
	a=a/10;
	printf("%d",s);
	
}
