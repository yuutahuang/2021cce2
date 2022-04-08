#include <stdio.h>
char line[1000][20]; ///1000¦æ 20¦r¥À
int main()
{
    int N;
    scanf("%d\n\n",&N);\

    for (int i=0;i<N;i++){ ///input
        gets(line[i]);
    }
    for (int i=0;i<N;i++){ ///output
        printf("%s\n",line[i]);
    }
}
