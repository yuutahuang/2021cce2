///week01-2.cpp scanf()Ū�r���B�r��
#include <stdio.h>
int main()
{
    printf("�{�b�n�m�߿�J�r���B�r��: ");
    char c; //�r���B�r��
    scanf("%c",&c); //Ū��Ĥ@�Ӧr��
    printf("Ū��r��: %c\n",c);

    char line[2000];
    scanf("%s",line);
    printf("Ū��r��: %s\n",line);
    return 0;
}
