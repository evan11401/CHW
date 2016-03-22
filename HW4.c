#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int perfect(int x);
int main(void){
	int i,j,ans;
    
    for(i=1;i<1000;i++){
    	perfect(i);
	}

	
    
    system("pause");
    return 0;
}
perfect(x){
	int n,g,num=0;
	for(n=1;n<x;n++){
		if((x%n)==0){
			num=num+n;
		}
	}
	if(x==num){
		for(g=1;g<x;g++){
			if((x%g)==0){
				printf("%d\t",g);
			}
		}
		printf("%d\n",x);
	}
}



