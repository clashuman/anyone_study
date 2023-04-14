#include <iostream>
#include <string> 
// 고급 언어에서 문자열 다루는법 (스트링 클래스)

//void Addone(int* ptr)
//{
//	*ptr += 1;
//}

void Swap(int *param0, int *param1)
{
	int temp = *param0;
	*param0 = *param1;
	*param1 = temp;
}
int main()
{
	//int arr[] = { 0,0,0,0 };
	//// 초기화하는 양만큼 배열 갯수 정할 수 있다
	//
	//char str[128] = "Hello world"; // 저급언어용
	//// 스트링 클래스
	//// 문자열을 간단히 저장시킴 (숫자마냥 기본 자료형으로사용가능)
	//std::string str = "Hello world";
	//std::cout << str << std::endl;

	// 포인터
	//int num = 10;
	//Addone(&num);
	//std::cout << num << std::endl;
	//// 포인터를 활용하면 다른 함수에서도 main 함수 내의 변수에 접근 가능

	// swap
	//int num0 = 5, num1 = 10;

	///*int temp = num0;
	//num0 = num1;
	//num1 = temp;
	//std::cout << num0 << std::endl;
	//std::cout << num1 << std::endl;*/

	//Swap(&num0, &num1); 
	// 스왑함수 따로쓸 때 call by value 일어나기 쉬움
	// 스왑함수에서 매개변수를 포인터 변수로 쓰면 해결

	//// 참조 변수 / referance 
	// 변수 공간에 변수를 가르키는 이름이 하나 더 추가된 것
	
	int num = 10;
	int& ref = num;

	std::cout << ref << std::endl;
	// 참조변수는 초기화로만 변수를 할당할 수 있고 수정 불가능
	// 참조변수 수정 == 가르키는 변수값 수정
	// ref =5; -> num == 5
	
	//void Swap(int* param0, int* param1)
	//{
	//	int temp = *param0;
	//	*param0 = *param1;
	//	*param1 = temp;
	//} 
	//Swap(&num0, &num1);
	//// 포인터 변수로 바뀌기 전에서 매개변수 부분에 &만 붙이면 됨
	
	// ex)
	//void Swap(int& param0, int& param1)
	//{
	//	int temp = param0;
	//	param0 = param1;
	//	param1 = temp;
	//}
	//Swap(num0, num1);

	return 0;
}