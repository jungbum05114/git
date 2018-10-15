/*	18114323이정범
	제출일 : 2018년 10월 16일
	동적할당					*/
#include<iostream>
using namespace std;
class Sample	//클래스 샘플선언
{
	int *p;		//동적할당을 위한 포인터
	int size;	//size변수
public:			//퍼블릭 어디서든 접근이가능한
	Sample(int n)	//매개변수가있는 생성자
	{
		size = n;	p = new int[size];			//동적할당을위한 사이즈
		cout << size << "개의 요소를 가진 정수 배열 동적 생성" << endl;
	}
	void read();								//read 선언부
	void write();								//write 선언부
	int big();									//big 선언부
	int small();								//small 선언부
	~Sample();									//소멸자
};
void Sample::read()								//read 구현부
{
	for (int i = 0; i < size; i++)				//size 만큼 반복해라 입력을
	{
		cin >> p[i];
	}

}
void Sample::write()							//write 구현부
{
	for (int i = 0; i < size; i++)				//size만큼반복 입력
	{
		cout << "[" << i << "]" << " -> " << p[i] << endl;
	}
}
	
int Sample::big()								//big 구현부
{
	int max= p[0];								//초기화는 무조건 첫번쨰들어가는수로
	for (int i = 0; i < size; i++)				//size동안 반복해라
	{
		if (max < p[i])							//만약 맥스가 p[i]보다작으면
		{
			max = p[i];							//max에 p[i]를 대입해라
		}
	}
	return max;									//max 값을 반환해라
}
int Sample::small()								//small 구현부
{
	int min = p[0];								//초기화는무조건 첫번쨰들어가는수로
	for (int i = 0; i < size; i++)				//size동안 반복해라
	{
		if (min > p[i])							//만약 min이 p[i]보다작으면
		{
			min = p[i];							//min에 p[i]를 대입해라
		}
	}
	return min;									//min값을 반환해라
}
Sample::~Sample()								//소멸자 구현부
{
	  cout << "동적으로 생성된 배열 객체 소멸!!" << endl;
}
int main()
{
	cout << "작성일 : 2018/10/15, 학번 : 18114323, 이름 : 이정범" << endl << endl;
	int n;
	cout << "배열의 크기 >> ";
	cin >> n;

	Sample s(n);			//s값은 샘플에 케이스
	s.read();				//read불러오기
	s.write();				//write불러오기
	cout << "가장 큰 수 : " << s.big() << endl;
	cout << "가장 작은 수 : " << s.small() << endl;
}