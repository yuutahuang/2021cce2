///week01-2.cpp scanf()讀字元、字串
#include <stdio.h>
int main()
{
    printf("現在要練習輸入字元、字串: ");
    char c; //字元、字母
    scanf("%c",&c); //讀到第一個字母
    printf("讀到字元: %c\n",c);

    char line[2000];
    scanf("%s",line);
    printf("讀到字串: %s\n",line);
    return 0;
}
