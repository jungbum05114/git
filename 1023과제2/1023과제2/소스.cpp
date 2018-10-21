/*	18114323 이정범
	2018년 10월 21일
	깊은복사 실습		*/
#include<iostream>
#include<string>
using namespace std;
class Item				//Item클래스
{
	char *title;		//title
	int price;			//price
public:
	Item(const char* title, int price);		//매개변수가존재하는 ~~
	~Item();								//소멸자
	Item(Item& a);							//복사생성자
	void set(const char* title, int price);	//바꾸기
	void show() { cout << title << "\t" << price << "원" << endl; }	//출력
};
Item::Item(const char* title,int price)			//매개변수가있는생성자
{
	int len = strlen(title);					//길이
	this->title = new char[len+1];				//동적할당
	this->price = price;					
	strcpy(this->title, title);
}
Item::~Item()			//소멸자
{
	if(title)
	delete[] title;		//동적할당종료
}
Item::Item(Item &a)		//복사생성자
{
	this->price = a.price;		//가격복사
	int len = strlen(a.title);	//길이
	this->title = new char[len + 1];	//동적할당복사
	strcpy(this->title, a.title);		//이름복사
}
void Item::set(const char* title, int price	)		//바꾸기
{
	if (strlen(title) > strlen(this->title))
	return;
	
	this->price = price;	
	strcpy(this->title, title);
}
int main()
{
	cout << "Date : 2018/10/21, Name : 이정범, Stu_no : 18114323\n\n";
	
	Item Fruit("Apple", 5800);
	Item Drink = Fruit;
	Drink.set("juice", 3900);
	
	Fruit.show();
	cout << endl;
	Drink.show();
}