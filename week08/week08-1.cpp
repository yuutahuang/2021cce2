#include <stdio.h>

char nation[2000][80];
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%s",nation[i]);
		char name[80];
		gets(name);
	}

	for (int i=0;i<n;i++){
		printf("%s\n",nation[i]);
	}
}

