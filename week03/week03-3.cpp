#include <stdio.h>
#include <string.h>
char line[200];
char table[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tables[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror(char c)
{
    for (int i=0;table[i]!=0;i++){
        if (c == table[i]) return tables[i];
    }
    return ' ';
}

int mirrored()
{
    int n=strlen(line);
    for (int i=0;i<n;i++){
        if(mirror(line[i]) != line[n-1-i]) return 0;
    }
    return 1;
}
int palindrome()
{
    int n=strlen(line);
    for (int i=0;i<n;i++){
        if (line[i] != line[n-1-i]) return 0;
    }
    return 1;
}
int main()
{
    while (scanf("%s",line) == 1){
        int p=palindrome();
        int m=mirrored();
        if (p==1 && m==1) printf("%s -- is a mirrored palindrome.\n\n",line);
        else if (p==1 && m==0) printf("s -- is a regular palindrome.\n\n",line);
        else if (p==0 && m==1) printf("%s -- is a mirrored string.\n\n",line);
        else printf("%s -- is not a palindrome.\n\n",line);
    }
}
