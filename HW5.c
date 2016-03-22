#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int seat[10],x,y, i,j=1,k,a;
	for(i=0;i<10;i++){
		seat[i]=0;//設定座位初始值為0 
	}
	while(1){
		printf("第 %d 次訂票\n",j);
		printf("Please type 1 for\"first class\"\n");
		printf("Please type 2 for\"economy\"\n");
		scanf("%d",&x);
		if(x==1){//判斷頭等艙 
			y=0;
			for(k=4;k>=0;k--){
				if(seat[k]==0){//判斷有無位置 
					y=k+1;//判斷哪個位置為空 
				}
			}
			if(y!=0){ 
				seat[y-1]=1;
				printf("頭等艙 座位為%d\n\n",y); 
			}else{
				a=0;
				printf("座位已滿 要訂經濟艙嗎?\n");
				printf("1.yes\n");
				printf("2.no\n");
				scanf("%d",&a);
				if(a==1){
					y=0;
					for(k=9;k>=5;k--){
						if(seat[k]==0){//判斷有無位置 
							y=k+1;//判斷哪個位置為空 
						}
					}
					if(y==0){
						printf("位置已滿 下班飛機將會在三小時後起飛\n\n");
					}else{
						seat[y-1]=1;
						printf("經濟艙 座位為%d\n\n",y);
					}
				}else{
					printf("下班飛機將會在三小時後起飛\n\n");
				}
			}
		}else if(x==2){//判斷經濟艙 
			y=0;
			for(k=9;k>=5;k--){
				if(seat[k]==0){//判斷有無位置 
					y=k+1;//判斷哪個位置為空 
				}
			}
			if(y!=0){
				seat[y-1]=1;
				printf("經濟艙 座位為%d\n\n",y);
			}else{
				a=0;
				printf("座位已滿 要訂頭等艙嗎?\n");
				printf("1.yes\n");
				printf("2.no\n");
				scanf("%d",&a);
				if(a==1){
					y=0;
					for(k=4;k>=0;k--){
						if(seat[k]==0){//判斷有無位置 
							y=k+1;//判斷哪個位置為空 
						}
					}
					if(y==0){
						printf("位置已滿 下班飛機將會在三小時後起飛\n\n");
					}else{
						seat[y-1]=1;
						printf("頭等艙 座位為%d\n\n",y);
					}
				}else{
					printf("下班飛機將會在三小時後起飛\n\n");
				}
			}
		}
		j++;
	}

	
	return 0;
}

