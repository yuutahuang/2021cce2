#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std; ///std::重複好幾次，其實可省略
int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> name[i] >> grade[i];
	}

	for (int i=0;i<n;i++){
		cout << name[i] << grade[i] << endl;
	}
}
