/*	18114323������
	2018�� 10�� 02��
	��Ģ���� ���� Ŭ��	*/
#include<iostream>
using namespace std;
class Cal_int		//Cal_int ��� Ŭ���� ����
{
public:				//����������
	Cal_int(int a, int b);	//������
	~Cal_int();				//�Ҹ���
	int Add(int a, int b);	//Ŭ�������� add
	int Sub(int a, int b);	//~~~~~~~~~ sub
	int Mul(int a, int b);	//~~~~~~~~~ Mul
	int Div(int a, int b);	//~~~~~~~~~ Div
private:			//�����Ұ�
	int a;			//a����(�Ű������� �����)
	int b;			//b����(�Ű������� �����)
};

int Cal_int::Add(int a, int b)	//ADD�� ��ȯ�� ����
{
	return a + b;
}
int Cal_int::Mul(int a, int b)	//MUL�� ��ȯ�� ����
{
	return a * b;
}
int Cal_int::Sub(int a, int b)	//Sub�� ��ȯ�� ����
{
	return a - b;
}
int Cal_int::Div(int a, int b)	//Div�� ��ȯ�� ����
{
	return a + b;
}
Cal_int::Cal_int(int a,int b)	//�Ű��������ִ� ������
{
	cout << "HELLO... It's Constructor!!" << endl;
}
Cal_int::~Cal_int()				//�Ҹ���
{
	cout << "Good By... It's Destructor!!"<<endl;
}
int main()
{
		cout << "�ۼ��� : 2018�� 10�� 02��" << endl;
		cout << "18114323������" << endl;
		int a, b;
		cout << "Input two Integer :: ";
		cin >> a >> b;
		Cal_int ASD(a, b);	//Cal_int�� �̸��� ASD
		cout << a << "+" << b << "=" << ASD.Add(a, b) << endl;
		cout << a << "-" << b << "=" << ASD.Sub(a, b) << endl;
		cout << a << "*" << b << "=" << ASD.Mul(a, b) << endl;
		cout << a << "/" << b << "=" << ASD.Div(a, b) << endl;
}