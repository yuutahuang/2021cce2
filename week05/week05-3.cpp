#include <stdio.h>
#include <stdlib.h> ///qsort()
///int a[100];會自動清為0
int comp(const void *p1,const void *p2)///比較用的函式comp()
{
    int a = *(int*)p1, b = *(int*)p2;
    if (a>b) return +1;
    if (a<b) return -1;
    if (a==b) return 0;
}
int main()
{
    int a[100];///內附亂碼
    for (int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);

    for (int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
