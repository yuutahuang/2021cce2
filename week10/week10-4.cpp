#include <stdio.h>
#include <vector>
#include <algorithm>
class record{ //C++����A��class�ŧi
public: //���}���A�i�Q�O�Hmain()�ϥ�
    char name[30];
    int grade;

};
bool compare(record a, record b)
{
    return (a.grade > b.grade);
}
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int n;
    fscanf(fin, "%d",&n);
    std::vector<record>student(n);
    for (int i=0;i<n;i++){
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);
    }

    std::sort(student.begin(),student.end(),compare);

    for (int i=0; i<n; i++){
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}

