/*	18114323������
	������ : 2018�� 10�� 16��
	�����Ҵ�					*/
#include<iostream>
using namespace std;
class Sample	//Ŭ���� ���ü���
{
	int *p;		//�����Ҵ��� ���� ������
	int size;	//size����
public:			//�ۺ� ��𼭵� �����̰�����
	Sample(int n)	//�Ű��������ִ� ������
	{
		size = n;	p = new int[size];			//�����Ҵ������� ������
		cout << size << "���� ��Ҹ� ���� ���� �迭 ���� ����" << endl;
	}
	void read();								//read �����
	void write();								//write �����
	int big();									//big �����
	int small();								//small �����
	~Sample();									//�Ҹ���
};
void Sample::read()								//read ������
{
	for (int i = 0; i < size; i++)				//size ��ŭ �ݺ��ض� �Է���
	{
		cin >> p[i];
	}

}
void Sample::write()							//write ������
{
	for (int i = 0; i < size; i++)				//size��ŭ�ݺ� �Է�
	{
		cout << "[" << i << "]" << " -> " << p[i] << endl;
	}
}
	
int Sample::big()								//big ������
{
	int max= p[0];								//�ʱ�ȭ�� ������ ù�������¼���
	for (int i = 0; i < size; i++)				//size���� �ݺ��ض�
	{
		if (max < p[i])							//���� �ƽ��� p[i]����������
		{
			max = p[i];							//max�� p[i]�� �����ض�
		}
	}
	return max;									//max ���� ��ȯ�ض�
}
int Sample::small()								//small ������
{
	int min = p[0];								//�ʱ�ȭ�¹����� ù�������¼���
	for (int i = 0; i < size; i++)				//size���� �ݺ��ض�
	{
		if (min > p[i])							//���� min�� p[i]����������
		{
			min = p[i];							//min�� p[i]�� �����ض�
		}
	}
	return min;									//min���� ��ȯ�ض�
}
Sample::~Sample()								//�Ҹ��� ������
{
	  cout << "�������� ������ �迭 ��ü �Ҹ�!!" << endl;
}
int main()
{
	cout << "�ۼ��� : 2018/10/15, �й� : 18114323, �̸� : ������" << endl << endl;
	int n;
	cout << "�迭�� ũ�� >> ";
	cin >> n;

	Sample s(n);			//s���� ���ÿ� ���̽�
	s.read();				//read�ҷ�����
	s.write();				//write�ҷ�����
	cout << "���� ū �� : " << s.big() << endl;
	cout << "���� ���� �� : " << s.small() << endl;
}