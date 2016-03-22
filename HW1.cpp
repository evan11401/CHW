#include <stdio.h>
int main(){
	
	int x;
	scanf("%d",&x);
	int a,b,c,d,e;
	a=x%10/1;
	b=(x%100)/10;
	c=(x%1000)/100;
	d=(x%10000)/1000;
	e=x/10000;
	printf("%d",e);
	printf("   ");
	printf("%d",d);
	printf("   ");
	printf("%d",c);
	printf("   ");
	printf("%d",b);
	printf("   ");
	printf("%d",a);
	return 0;
} 
