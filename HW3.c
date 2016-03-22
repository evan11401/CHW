#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	float y,z,h,sar,sale,am,rev;
	while(scanf("%d",&x)!=EOF){
		switch(x)
		{
			case 1:{
				printf("經理人員\n");
				printf("請輸入週薪\n");
				scanf("%f",&y);
				printf("薪水為 %.4f 元\n",y);
				break;
			}
			case 2 :{
				printf("時薪工\n");
				printf("請輸入每小時工資\n");
				scanf("%f",&z);
				printf("請輸入工作時數\n");
				scanf("%f",&h);
				if(h<40){
					sar=z*h;
				}else{
					sar=40*z+(h-40)*1.5*z;
				}
				printf("薪水為 %.4f 元\n",sar);
				break;
			}
			case 3:{
				printf("抽傭金工\n");
				printf("請輸入當週銷售金額\n");
				scanf("%f",&sale);
				printf("薪水為 %.4f 元\n",250+0.057*sale);
				break;
			}
			case 4:{
				printf("零工\n");
				printf("請輸入當週銷售件數\n");
				scanf("%f",&am);
				printf("請輸入每件酬勞\n");
				scanf("%f",&rev);
				printf("薪水為 %.4f 元\n",am*rev);
				break;
			}
			default:break;
		}
	}
	return 0;
}
