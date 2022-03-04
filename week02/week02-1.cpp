///week02-1.cpp step01-1
///先能讀字串，再配while迴圈
#include <stdio.h>
#include <string.h>
char line[2000];
int main()
{
	while (scanf("%s",line) == 1){
		printf("%s -- is a palindrome.\n\n",line);
	}
}
