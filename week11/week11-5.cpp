#include <iostream>/// cin||cout
#include <vector> ///vector<???> STL�\��
using namespace std;
int main()
{
    vector<int> v;///v�Ovector�̭���int
    ///�S��v���X�ӡAv=0��
    v.push_back(10);///��10��i�h,v��1��
    v.push_back(11);///��11��i�h,v��2��
    v.push_back(15);///��15��i�h,v��3��
    for (int i=0;i<3;i++){
        cout << v[i] << endl;
    }
}
