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
		cout << "�Է��� ���ڸ� �Ųٷ� ����ϴ� ���α׷�" << endl;
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
	cout <<"���ڿ� �Է�<exit �Է½� ����> >>"<<endl;
	Reverse();
}