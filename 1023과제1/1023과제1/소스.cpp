/*	18114323������
	2018�� 10�� 21��
	������ ���� ȣ�� ����		*/
#include<iostream>
using namespace std;
class Rectangle			//Rectangle Ŭ����
{
	int width, height;		//���μ���
public:
	Rectangle() { width = height = 1; }	//�Ű����������� ~~
	Rectangle(int width, int height) { this->width = width, this->height = height; }//�Ű������� �����ϴ�
	int getarea() { return width * height; }	//����
};
void swap(Rectangle &a, Rectangle &b)//���������� ȣ��
{
	Rectangle tmp;	//������ �ӽ������
	tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a, b;		//�Է¹��� �� �ΰ�
	cout << "18114323������" << endl;
	cout << "Rectangle_a�� ���ο� ���� �Է� >> ";
	cin >> a>> b;
	Rectangle A(a, b);		//A��� rectangle Ŭ����
	cout << "Rectangle_b�� ���ο� ���� �Է� >> ";
	cin >> a>> b;			//B��� rectangle Ŭ����
	Rectangle B(a, b);
	cout << "�簢��_a�� ���� = " << A.getarea()<<", " << "�簢��_b�� ���� = " << B.getarea() << endl<<endl;
	cout << "'������ ���� ȣ��'�� �̿��� swap<> ����" << endl << endl;
	swap(A, B);				//��������
	cout << "�簢��_a�� ���� = " << A.getarea()<<", " << "�簢��_b�� ���� = " << B.getarea() << endl;
}