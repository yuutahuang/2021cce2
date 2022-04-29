#include <stdio.h>
// scanf() зяжи fscanf(fin,)
// `FILE * fopen("input.txt","r")
char name[100][30];
char grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int n;
    //scanf("%d",&n);
    fscanf(fin, "%d",&n);
    for (int i=0;i<n;i++){
        fscanf(fin,"%s %d",name[i],&grade[i]);
    }

    for (int i=0;i<n;i++){
        printf("%s %d\n",name[i],grade[i]);
    }
}
