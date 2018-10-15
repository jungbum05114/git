/*	18114323 이정범
	제출일 : 2018년 10월 16일
	문자열 뒤집기				*/
#include<iostream>
#include<string>
using namespace std;
class Reverse		//Reverse 케이스선언
{					//private 제한되있는
	string text;	// 문자열 text선언
	int size;		// 정수형 size 선언
public:				//public 어디서든
	Reverse()		//생성자
	{
		cout << "입력한 문자를 거꾸로 출력하는 프로그램" << endl;
	}
	void reverse_str();		//Reverse_str 선언부
	~Reverse()				//소멸자
	{
		cout << "Excellent!!" << endl;
	}
};
void Reverse::reverse_str()	//Reverse_str 구현부
{

	for (;1;)		//항상 참
	{
		cout << "문자열 입력 <exit 입력시 종료> >>" << endl;
		getline(cin, text, '\n');				//cin으로 입력시 띄우기로 나뉘어짐 
		if (text == "exit") break;				//만약 text에 exit입력시 폴문 끝내기
		size = text.length();					//size 에는 sring에 종속되있는 length를 사용하여 text의 문자수 저장
		cout << "입력한 문자열의 역순 출력" << endl;
		for (int i = size - 1; i >= 0; i--) {	//i 는 size -1부터 0보다작거나 
			cout << text[i];					//0보다 같거나 작아질때까지 i--
		}
		cout << endl;
	}
}
int main()
{
	cout << "작성일 : 2018/10/09" << endl << "학번 : 18114323	이름 : 이정범" ;
	Reverse Test;						//Reverse 케이스를 사용하는 Test 선언
	cout << endl;
	Test.reverse_str();					//Test에 종속되있는 reverse_str 사용

}