#include<iostream>
#include"Counter.h"
#include"User.h"
#include"Person.h"

using namespace std;

void g(const Counter& c)
{
	//const로 클래스를 참조하면 호출하는 클래스에 함수의 형태 또한 const여야 한다.
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
	
	Person* p1 = new Person("철수", "서울시");
	Person* p2 = new Person("광수", "경기도");
	p1->printAddr();
	p2->printAddr();
	p1->changeAddr("센프란시스코");
	p1->changeName("알렉산더");
	p1->printAddr();

	delete p1;
	delete p2;























	/*
	포인터
	-변수, 구조체, 클레스 등에 객체를 가르키는 변수
	*/

	int a = 10;
	//int* : 가리킬 객체 자료형//ptr : 포인터 변수의 이름
	int* ptr;
	//& : 주소값 계산 연산자
	ptr = &a;
	//ptr이 가르키고 있는 곳에 20을 넣는다.//ptr은 주소값//*ptr은 가리키고 있는 곳
	*ptr = 20;
	cout << " a의 값은? " << a << endl;

	/*
	* 동적으로 메모리 할당
	* -강제로 메모리에 공간을 할당
	*/

	/*
	new : 동적 메모리 할당 연산자
	*/
	int* intPtr;
	intPtr = new int;
	*intPtr = 10;

	delete intPtr; //메모리 반환 연산자
	intPtr = nullptr; //c에서는 null = 0, c++에서는 nullptr = 비어있다 라는 단어

	/*
	배열을 동적 메모리 할당
	*/
	int* intArrPtr;
	intArrPtr = new int[4]; //주소값은 제일 낮은 값인 0를 가르킨다
	*intArrPtr = 10; // 주소값 0에 10
	*(intArrPtr + 1) = 20;  // 주소값에 +1하여 1에 20
	intArrPtr[2] = 30; //주소값 2에 30

	delete [] intArrPtr; //new int에 할당된 메모리 전부 반환
	intArrPtr = nullptr; //꼭 해주기

	/*
	L-valaue 참조 방법*/
	//(1)
	int x = 10, y = 20;
	int& xRef = x;
	xRef = 100;
	xRef = y;
	
	//(2) 많이 불편하다
	/*
	int x = 10, y = 20;
	int *xRef = &x;
	*xRef = 100;
	*xRef = y;
	*/
}