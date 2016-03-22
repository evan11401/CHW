#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b=1,c=10,d=1,e=0,g=1,k=0;
	scanf("%d",&a);
	while(a/c>=1){
		d++;
		c=c*10;
	}//判斷位數 
	int ans[d-1]; 
	c=10;
	for(int i=0;i<d;i++){
		ans[i]=(a%c)/b;
		c=10*c;
		b=10*b;
		//拆開每位數字 放入陣列中 
		while(k<i){
			g=g*2;
			k++;
		}
	
		e=e+ans[i]*g; 
	}
	printf("%d",e);
	
	system("pause");
	return 0;
}
