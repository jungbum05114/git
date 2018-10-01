/*	18114323이정범
	2018년10월02일
	tower클래스 작성	*/
#include<iostream>
using namespace std;
class Tower
{
	public:				//수정가능한
		Tower();		//생성자
		Tower(int a);		//생성자
		~Tower();		//소멸자
		int getHeight();	//멤버함수
	private:			//수정이불가능한
		int height;			//높이
};
Tower::Tower()				//매개변수가없는 생성자
{
	height = 10;
}
Tower::Tower(int a)			//매개변수가 있는생성자
{
	height = a;
}
Tower::~Tower()				//소멸자
{
	cout << height << "미터 Tower 소멸" << endl;	
}

int Tower::getHeight()		//멤버함수
{
	return height;			//높이값을 반환한다.
}
int main()
{
	cout << "작성일:2018년 10월 02일"<< endl;
	cout << "학번 : 18114323." << "	" << "이름 : 이정범" << endl;

	Tower myTower;			//Tower에 myTower라는 함수선언?
	Tower seoulTower(55);	//Tower에 seoulTower라는 함수선언과 매개변수 55

	cout << "myTower의 높이는 " << myTower.getHeight() << "미터입니다." << endl;
	cout << "seoulTower의 높이는 " << seoulTower.getHeight() << "미터입니다." << endl;
}