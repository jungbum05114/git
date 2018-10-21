/*	18114323 ������
	2018�� 10�� 21��
	�������� �ǽ�		*/
#include<iostream>
#include<string>
using namespace std;
class Item				//ItemŬ����
{
	char *title;		//title
	int price;			//price
public:
	Item(const char* title, int price);		//�Ű������������ϴ� ~~
	~Item();								//�Ҹ���
	Item(Item& a);							//���������
	void set(const char* title, int price);	//�ٲٱ�
	void show() { cout << title << "\t" << price << "��" << endl; }	//���
};
Item::Item(const char* title,int price)			//�Ű��������ִ»�����
{
	int len = strlen(title);					//����
	this->title = new char[len+1];				//�����Ҵ�
	this->price = price;					
	strcpy(this->title, title);
}
Item::~Item()			//�Ҹ���
{
	if(title)
	delete[] title;		//�����Ҵ�����
}
Item::Item(Item &a)		//���������
{
	this->price = a.price;		//���ݺ���
	int len = strlen(a.title);	//����
	this->title = new char[len + 1];	//�����Ҵ纹��
	strcpy(this->title, a.title);		//�̸�����
}
void Item::set(const char* title, int price	)		//�ٲٱ�
{
	if (strlen(title) > strlen(this->title))
	return;
	
	this->price = price;	
	strcpy(this->title, title);
}
int main()
{
	cout << "Date : 2018/10/21, Name : ������, Stu_no : 18114323\n\n";
	
	Item Fruit("Apple", 5800);
	Item Drink = Fruit;
	Drink.set("juice", 3900);
	
	Fruit.show();
	cout << endl;
	Drink.show();
}