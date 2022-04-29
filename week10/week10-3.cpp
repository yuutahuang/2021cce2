#include <stdio.h>
#include <string.h> //strcpy()
class record{ //C++物件，用class宣告
public: //公開欄位，可被別人main()使用
    char name[30];
    int grade;

};
record student[100]; //有100筆學生資料
/*char name[100][30],tmpname[30];
char grade[100];*/
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int n;
    fscanf(fin, "%d",&n);
    for (int i=0;i<n;i++){
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);
    }

    for (int k=0; k<n-1; k++){
		for (int i=0; i<n-1; i++){
			if (student[i].grade < student[i+1].grade){
                record tmp = student[i];
                student[i] = student[i+1];
                student[i+1] = tmp;
				/*int tmp = grade[i];
				grade[i] = grade[i+1];
				grade[i+1] = tmp;

				strcpy( tmpname,name[i] );
				strcpy( name[i],name[i+1]);
				strcpy( name[i+1],tmpname);*/
			}
		}
	}

    for (int i=0; i<n; i++){
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}
