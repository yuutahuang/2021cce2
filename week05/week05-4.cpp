#include <stdio.h>
char line[2000];
int main()
{
    int t;
    scanf("%d\n\n",&t);

    for (int i=1;i<=t;i++){
    	if (t>1) printf("\n");

    	printf("�{�bŪ���%d�Ϫ����\n",i);
	    while(gets(line)){
	        if (line[0]==0) break;
	    }
	}
}
