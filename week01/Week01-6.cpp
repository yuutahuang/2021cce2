#include <stdio.h>
#include <string.h>
char line[2000];
int main()
{
    int sum = 0;
    while(scanf("%s",line) == 1){
        int n = strlen(line);
        int ans = 0;
        for (int j=0;j<n;j++){
            if (line[j] == '2') ans++;
        }
        printf("%d\n",ans);
        sum += ans;
    }
    printf("Total: %d\n",sum);

}
