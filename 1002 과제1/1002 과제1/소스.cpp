/*	18114323������
	2018��10��02��
	towerŬ���� �ۼ�	*/
#include<iostream>
using namespace std;
class Tower
{
	public:				//����������
		Tower();		//������
		Tower(int a);		//������
		~Tower();		//�Ҹ���
		int getHeight();	//����Լ�
	private:			//�����̺Ұ�����
		int height;			//����
};
Tower::Tower()				//�Ű����������� ������
{
	height = 10;
}
Tower::Tower(int a)			//�Ű������� �ִ»�����
{
	height = a;
}
Tower::~Tower()				//�Ҹ���
{
	cout << height << "���� Tower �Ҹ�" << endl;	
}

int Tower::getHeight()		//����Լ�
{
	return height;			//���̰��� ��ȯ�Ѵ�.
}
int main()
{
	cout << "�ۼ���:2018�� 10�� 02��"<< endl;
	cout << "�й� : 18114323." << "	" << "�̸� : ������" << endl;

	Tower myTower;			//Tower�� myTower��� �Լ�����?
	Tower seoulTower(55);	//Tower�� seoulTower��� �Լ������ �Ű����� 55

	cout << "myTower�� ���̴� " << myTower.getHeight() << "�����Դϴ�." << endl;
	cout << "seoulTower�� ���̴� " << seoulTower.getHeight() << "�����Դϴ�." << endl;
}