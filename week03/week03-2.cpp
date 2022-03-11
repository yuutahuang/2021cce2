#include <stdio.h>
#include <string.h>
char line[15]="123454321";
char *p1 ,*p2; // pointer
int palindrome()
{
    int n=strlen(line);
    for (int i=0;i<n;i++){
        p1 = & line[i]; ///pointer指標 & 表示變數的address住址
        p2 = & line[n-1-i];
                if (line[i]!=line[n-1-i]) return 0;
	 }
    return 1;
}

int main()
{
    ///while (scanf("%s",line) == 1)
        int p=palindrome();
	    if (p==1) printf("%s -- is a palindrome.\n\n",line);
	    if (p==0) printf("%s -- is not a palindrome.\n\n",line);

}
