#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int seat[10],x,y, i,j=1,k,a;
	for(i=0;i<10;i++){
		seat[i]=0;//�]�w�y���l�Ȭ�0 
	}
	while(1){
		printf("�� %d ���q��\n",j);
		printf("Please type 1 for\"first class\"\n");
		printf("Please type 2 for\"economy\"\n");
		scanf("%d",&x);
		if(x==1){//�P�_�Y���� 
			y=0;
			for(k=4;k>=0;k--){
				if(seat[k]==0){//�P�_���L��m 
					y=k+1;//�P�_���Ӧ�m���� 
				}
			}
			if(y!=0){ 
				seat[y-1]=1;
				printf("�Y���� �y�쬰%d\n\n",y); 
			}else{
				a=0;
				printf("�y��w�� �n�q�g�ٿ���?\n");
				printf("1.yes\n");
				printf("2.no\n");
				scanf("%d",&a);
				if(a==1){
					y=0;
					for(k=9;k>=5;k--){
						if(seat[k]==0){//�P�_���L��m 
							y=k+1;//�P�_���Ӧ�m���� 
						}
					}
					if(y==0){
						printf("��m�w�� �U�Z�����N�|�b�T�p�ɫ�_��\n\n");
					}else{
						seat[y-1]=1;
						printf("�g�ٿ� �y�쬰%d\n\n",y);
					}
				}else{
					printf("�U�Z�����N�|�b�T�p�ɫ�_��\n\n");
				}
			}
		}else if(x==2){//�P�_�g�ٿ� 
			y=0;
			for(k=9;k>=5;k--){
				if(seat[k]==0){//�P�_���L��m 
					y=k+1;//�P�_���Ӧ�m���� 
				}
			}
			if(y!=0){
				seat[y-1]=1;
				printf("�g�ٿ� �y�쬰%d\n\n",y);
			}else{
				a=0;
				printf("�y��w�� �n�q�Y������?\n");
				printf("1.yes\n");
				printf("2.no\n");
				scanf("%d",&a);
				if(a==1){
					y=0;
					for(k=4;k>=0;k--){
						if(seat[k]==0){//�P�_���L��m 
							y=k+1;//�P�_���Ӧ�m���� 
						}
					}
					if(y==0){
						printf("��m�w�� �U�Z�����N�|�b�T�p�ɫ�_��\n\n");
					}else{
						seat[y-1]=1;
						printf("�Y���� �y�쬰%d\n\n",y);
					}
				}else{
					printf("�U�Z�����N�|�b�T�p�ɫ�_��\n\n");
				}
			}
		}
		j++;
	}

	
	return 0;
}

