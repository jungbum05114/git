/*	18114323 ������
	������ : 2018�� 10�� 16��
	���ڿ� ������				*/
#include<iostream>
#include<string>
using namespace std;
class Reverse		//Reverse ���̽�����
{					//private ���ѵ��ִ�
	string text;	// ���ڿ� text����
	int size;		// ������ size ����
public:				//public ��𼭵�
	Reverse()		//������
	{
		cout << "�Է��� ���ڸ� �Ųٷ� ����ϴ� ���α׷�" << endl;
	}
	void reverse_str();		//Reverse_str �����
	~Reverse()				//�Ҹ���
	{
		cout << "Excellent!!" << endl;
	}
};
void Reverse::reverse_str()	//Reverse_str ������
{

	for (;1;)		//�׻� ��
	{
		cout << "���ڿ� �Է� <exit �Է½� ����> >>" << endl;
		getline(cin, text, '\n');				//cin���� �Է½� ����� �������� 
		if (text == "exit") break;				//���� text�� exit�Է½� ���� ������
		size = text.length();					//size ���� sring�� ���ӵ��ִ� length�� ����Ͽ� text�� ���ڼ� ����
		cout << "�Է��� ���ڿ��� ���� ���" << endl;
		for (int i = size - 1; i >= 0; i--) {	//i �� size -1���� 0�����۰ų� 
			cout << text[i];					//0���� ���ų� �۾��������� i--
		}
		cout << endl;
	}
}
int main()
{
	cout << "�ۼ��� : 2018/10/09" << endl << "�й� : 18114323	�̸� : ������" ;
	Reverse Test;						//Reverse ���̽��� ����ϴ� Test ����
	cout << endl;
	Test.reverse_str();					//Test�� ���ӵ��ִ� reverse_str ���

}