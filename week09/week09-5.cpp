#include <stdio.h>
#include <string.h>
int grade[100];
char name[100][30];
char tmpname[30];
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%s %d",name[i],&grade[i]);
	}

	for (int k=0;k<n-1;k++){
		for (int i=0;i<n-1;i++){
			if (grade[i]<grade[i+1]){
				int tmp = grade[i];
				grade[i] = grade[i+1];
				grade[i+1] = tmp;

				strcpy( tmpname,name[i] );
				strcpy( name[i],name[i+1]);
				strcpy( name[i+1],tmpname);
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%s %d\n",name[i],grade[i]);
	}
}
