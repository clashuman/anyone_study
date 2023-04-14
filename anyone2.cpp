#include <iostream>

int Sum(int param0, int param1)
{
	return param0 + param1;
}
int Sum(int param0, int param1, int param2)
{
	return param0 + param1 + param2;
}
// 함수 오버로딩 
// 매개 변수의 개수가 다르거나 
// 갯수는 같고 자료형이 다를 경우에도 적용됨
// 오버로딩 된 함수는 호출시 함수목록을 볼 수 있음

int main_lesson3()
{
	//Sum()
	
	// bool (1byte)
	/*bool b = true;

	int var = 10;
	b = var == 10;
	
	if(b)
		std::cout << "var == 10" << std::endl;*/
	// 그 외의 char, int, float, double 등은 c와 비슷함
	// cout는 character output, endl은 end line의 약자

	// cin 클래스 (입력)
	/*int num = 0;
	
	std::cin >> num;
	std::cout << num << std::endl;*/

	return 0;
}

// 함수 선언은 헤더파일에, 확장자 h를 사용
// 함수 정의는 소스파일에, 소스파일은 c나 cpp확장자 사용
// ex) 함수 "Printf"를 관리하려면
// 솔수션 탐색기의 헤더파일에 파일을 생성해 함수 선언을 넣고
// 소스파일에는 include문, 함수 정의를 입력한다
// 사용할 함수는 main이 있는 파일에 추가하면 됨
// 외부코드는 < >, 프로그램 내부코드는 " "
// 헤더파일에 #pragma once 넣으면 cpp파일들에 한번씩만 포함됨
// 여러번 넣어 오류가 발생하는 것을 방지