#pragma once //한번만 컴파일 하도록 해준다.

/*
캡슐화
객체의 내부 구현부와 외부 사용자 부분을 분리
내부는 은닉하여 가릴수 있고
사용자 부분만 도출하여 사용에 편리 하도록 함
*/

/*
클래스 이름 : 카운터
기능
-숫자를 1씩 증가 (입출력값 필요없음)
-0으로 초기화 (입출력값 필요없음)
-현재 카운팅한 값을 알려줌(입력값 없음, 출력값 존재)
*/
class Counter 
{
	int count; //카운팅하는 값을 저장

public:
	// 생성자 = 이름이랑 똑같이 만든다, 초기화 방법
	Counter():count{0} //안전한 방법
	{
		count = 0;
	}

	//숫자 1씩 증가.
	void counting()
	{
		count++;
	}

	// count가 0으로 초기화 된다.
	void reset()
	{
		count = 0;
	}

	//count값 알려준다. 
	int GetCount() const
	{
		return count;
	}
private:
protected:



};