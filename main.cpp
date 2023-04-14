#include <iostream>


int main_lesson1()
{
	int var0 = 0, var1 = 12, var2 = 15;
	// 대입연산자 ' = ' == 변수에 값을 저장(초기화)
	// 기초적인 산술 연산자, 주석은 C와 동일
	
	//std::cout << "Hello World" << std::endl;
	//std::cout << var0 << std::endl;

	// if문 (비교연산자) // C와는 호출법의 차이
	if(var1<var2)
		std::cout << "first" << std::endl;
	else if (var1>var2)
		std::cout << "second" << std::endl;
	else
		std::cout << "third" << std::endl;
	// f10을 통해 디버그를 한줄한줄 할 수 있음
	// 값 수정도 가능하며 f5를 눌러 종료


	return 0;
}



// 변수 자료형 
// 종류와 크기(Byte), 숫자 범위
// bool      1          0 ~ 1
// char      1        -128 ~ 127
// short     2      -32768 ~ 32767
// int     4(주의)  약 -21억 ~ 21억
// long    8(주의)  약 -900경 ~900경
// float     4         7자리 실수
// double    8        15자리 실수



