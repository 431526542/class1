#include<iostream>
#include"Counter.h"
#include"User.h"
#include"Person.h"

using namespace std;

void g(const Counter& c)
{
	//const�� Ŭ������ �����ϸ� ȣ���ϴ� Ŭ������ �Լ��� ���� ���� const���� �Ѵ�.
	cout << " Counter = " << c.GetCount() << endl; 
}
int main()
{
	Counter c1;
	c1.counting();
	c1.counting();
	cout << " c1 Count = " << c1.GetCount() << endl;
	c1.counting();
	g(c1);
	
	Person* p1 = new Person("ö��", "�����");
	Person* p2 = new Person("����", "��⵵");
	p1->printAddr();
	p2->printAddr();
	p1->changeAddr("�������ý���");
	p1->changeName("�˷����");
	p1->printAddr();

	delete p1;
	delete p2;























	/*
	������
	-����, ����ü, Ŭ���� � ��ü�� ����Ű�� ����
	*/

	int a = 10;
	//int* : ����ų ��ü �ڷ���//ptr : ������ ������ �̸�
	int* ptr;
	//& : �ּҰ� ��� ������
	ptr = &a;
	//ptr�� ����Ű�� �ִ� ���� 20�� �ִ´�.//ptr�� �ּҰ�//*ptr�� ����Ű�� �ִ� ��
	*ptr = 20;
	cout << " a�� ����? " << a << endl;

	/*
	* �������� �޸� �Ҵ�
	* -������ �޸𸮿� ������ �Ҵ�
	*/

	/*
	new : ���� �޸� �Ҵ� ������
	*/
	int* intPtr;
	intPtr = new int;
	*intPtr = 10;

	delete intPtr; //�޸� ��ȯ ������
	intPtr = nullptr; //c������ null = 0, c++������ nullptr = ����ִ� ��� �ܾ�

	/*
	�迭�� ���� �޸� �Ҵ�
	*/
	int* intArrPtr;
	intArrPtr = new int[4]; //�ּҰ��� ���� ���� ���� 0�� ����Ų��
	*intArrPtr = 10; // �ּҰ� 0�� 10
	*(intArrPtr + 1) = 20;  // �ּҰ��� +1�Ͽ� 1�� 20
	intArrPtr[2] = 30; //�ּҰ� 2�� 30

	delete [] intArrPtr; //new int�� �Ҵ�� �޸� ���� ��ȯ
	intArrPtr = nullptr; //�� ���ֱ�

	/*
	L-valaue ���� ���*/
	//(1)
	int x = 10, y = 20;
	int& xRef = x;
	xRef = 100;
	xRef = y;
	
	//(2) ���� �����ϴ�
	/*
	int x = 10, y = 20;
	int *xRef = &x;
	*xRef = 100;
	*xRef = y;
	*/
}