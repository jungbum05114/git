#include<iostream>
#include <string>
using namespace std;
class Reverse
{
	string text;
	int size;
public:
	Reverse()
	{
		cin >> text;
		cout << "입력한 문자를 거꾸로 출력하는 프로그램" << endl;
	}
	void reverse_str();
	~Reverse()
	{
		cout << "Excellent!!" << endl;
	}
};
void Reverse::reverse_str()
{
	
}
int main()
{
	cout <<"문자열 입력<exit 입력시 종료> >>"<<endl;
	Reverse();
}