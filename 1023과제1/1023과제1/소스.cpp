/*	18114323이정범
	2018년 10월 21일
	참조에 의한 호출 과제		*/
#include<iostream>
using namespace std;
class Rectangle			//Rectangle 클래스
{
	int width, height;		//가로세로
public:
	Rectangle() { width = height = 1; }	//매개변수가없는 ~~
	Rectangle(int width, int height) { this->width = width, this->height = height; }//매개변수가 존재하는
	int getarea() { return width * height; }	//계산식
};
void swap(Rectangle &a, Rectangle &b)//참조에의한 호출
{
	Rectangle tmp;	//저장할 임시저장소
	tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a, b;		//입력받을 값 두개
	cout << "18114323이정범" << endl;
	cout << "Rectangle_a의 가로와 세로 입력 >> ";
	cin >> a>> b;
	Rectangle A(a, b);		//A라는 rectangle 클래스
	cout << "Rectangle_b의 가로와 세로 입력 >> ";
	cin >> a>> b;			//B라는 rectangle 클래스
	Rectangle B(a, b);
	cout << "사각형_a의 면적 = " << A.getarea()<<", " << "사각형_b의 면적 = " << B.getarea() << endl<<endl;
	cout << "'참조에 의한 호출'을 이용한 swap<> 실행" << endl << endl;
	swap(A, B);				//스왑적용
	cout << "사각형_a의 면적 = " << A.getarea()<<", " << "사각형_b의 면적 = " << B.getarea() << endl;
}