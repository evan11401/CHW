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
				printf("�g�z�H��\n");
				printf("�п�J�g�~\n");
				scanf("%f",&y);
				printf("�~���� %.4f ��\n",y);
				break;
			}
			case 2 :{
				printf("���~�u\n");
				printf("�п�J�C�p�ɤu��\n");
				scanf("%f",&z);
				printf("�п�J�u�@�ɼ�\n");
				scanf("%f",&h);
				if(h<40){
					sar=z*h;
				}else{
					sar=40*z+(h-40)*1.5*z;
				}
				printf("�~���� %.4f ��\n",sar);
				break;
			}
			case 3:{
				printf("��Ī��u\n");
				printf("�п�J��g�P����B\n");
				scanf("%f",&sale);
				printf("�~���� %.4f ��\n",250+0.057*sale);
				break;
			}
			case 4:{
				printf("�s�u\n");
				printf("�п�J��g�P����\n");
				scanf("%f",&am);
				printf("�п�J�C��S��\n");
				scanf("%f",&rev);
				printf("�~���� %.4f ��\n",am*rev);
				break;
			}
			default:break;
		}
	}
	return 0;
}
