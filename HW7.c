#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>


int main() {
	while(1){
		char string[100][100], temp[100], ans[100][100],big[100];
		int i = 0, j, m, n, y, x, an[100], dec, bi, po;
		puts("�п�J�@��r(��J^z�H����):");
		while(scanf("%s", string[i]) != EOF){
			i++;
		}
		for(m=0;m<i;m++){
			string[m][0]=tolower(string[m][0]);
		} 
		for(m=0; m<i-1; m++){
			for(n=m+1; n<i; n++){
				if(string[m][0] > string[n][0]){
					strcpy(temp, string[m]);
					strcpy(string[m], string[n]);
					strcpy(string[n], temp);
	
				}
			}
		}
		
		x=0;
		dec=1;
		for(m=0; m<i; m=m+y+1){
			y=0;
			strcpy(ans[x], string[m]);
			for(n=m+1; n<i; n++){
				dec=strcmp(string[m],string[n]);
				if(dec==0){
					y++;
				}
			}
			an[x]=y+1;
			x++;
		}
		puts("�Ӧr����:");
		for(m=0; m<x; m++){
			printf("%s ��%d��\n", ans[m],an[m]);
		}
		po=0;
		puts("�ӥX�{���Ƥj�p��:");
		for(m=0;m<x;m++){
			for(n=0;n<x;n++){
				if(n==0){
					strcpy(big, ans[n]);
					po=n;
					bi=an[n];
				}else if(an[n]>=bi){
					strcpy(big, ans[n]);
					bi=an[n];
					po=n;
				}
			}
			printf("%s ��%d��\n",ans[po],an[po]);
			an[po]=0;
		}
		puts("");
		}
	return 0;
}
