#include <iostream>
#include <vector>
using namespace std;
class student{
public:
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin >> n;
	vector<student> stu(n); ///�ҥ� vector ���ܼ� stu,�i�H��n��
	///���Ostudent, stu�o���ܼ�,�i��n��student
	for (int i=0;i<n;i++){
		cin >> stu[i].name >> stu[i].grade;
	}

	for (int i=0;i<n;i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
