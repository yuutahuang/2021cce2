///week02-1.cpp step01-1
///����Ū�r��A�A�twhile�j��
#include <stdio.h>
#include <string.h>
char line[2000];
int main()
{
	while (scanf("%s",line) == 1){
		printf("%s -- is a palindrome.\n\n",line);
	}
}
