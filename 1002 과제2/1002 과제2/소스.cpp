/*	18114323이정범
	2018년 10월 02일
	사칙연산 수행 클라스	*/
#include<iostream>
using namespace std;
class Cal_int		//Cal_int 라는 클래스 생성
{
public:				//수정가능한
	Cal_int(int a, int b);	//생성자
	~Cal_int();				//소멸자
	int Add(int a, int b);	//클래스안의 add
	int Sub(int a, int b);	//~~~~~~~~~ sub
	int Mul(int a, int b);	//~~~~~~~~~ Mul
	int Div(int a, int b);	//~~~~~~~~~ Div
private:			//수정불가
	int a;			//a변수(매개변수로 사용할)
	int b;			//b변수(매개변수로 사용할)
};

int Cal_int::Add(int a, int b)	//ADD의 반환값 설정
{
	return a + b;
}
int Cal_int::Mul(int a, int b)	//MUL의 반환값 설정
{
	return a * b;
}
int Cal_int::Sub(int a, int b)	//Sub의 반환값 설정
{
	return a - b;
}
int Cal_int::Div(int a, int b)	//Div의 반환값 설정
{
	return a + b;
}
Cal_int::Cal_int(int a,int b)	//매개변수가있는 생성자
{
	cout << "HELLO... It's Constructor!!" << endl;
}
Cal_int::~Cal_int()				//소멸자
{
	cout << "Good By... It's Destructor!!"<<endl;
}
int main()
{
		cout << "작성일 : 2018년 10월 02일" << endl;
		cout << "18114323이정범" << endl;
		int a, b;
		cout << "Input two Integer :: ";
		cin >> a >> b;
		Cal_int ASD(a, b);	//Cal_int의 이름은 ASD
		cout << a << "+" << b << "=" << ASD.Add(a, b) << endl;
		cout << a << "-" << b << "=" << ASD.Sub(a, b) << endl;
		cout << a << "*" << b << "=" << ASD.Mul(a, b) << endl;
		cout << a << "/" << b << "=" << ASD.Div(a, b) << endl;
}