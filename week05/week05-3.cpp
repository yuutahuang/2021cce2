#include <stdio.h>
#include <stdlib.h> ///qsort()
///int a[100];�|�۰ʲM��0
int comp(const void *p1,const void *p2)///����Ϊ��禡comp()
{
    int a = *(int*)p1, b = *(int*)p2;
    if (a>b) return +1;
    if (a<b) return -1;
    if (a==b) return 0;
}
int main()
{
    int a[100];///�����ýX
    for (int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);

    for (int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
