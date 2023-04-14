#include <iostream>

int main_lesson2()
{
	// 반복문
	// while, do while, for 기본 세 종류

	int i = 0;
	//while (i < 10)
	//{
	//	std::cout << i << std::endl;
	//	++i; // 전위 증가 연산자
	//	// i++; 후위 증가 연산자 
	//}

	//do
	//{
	//	std::cout << i << std::endl;
	//	++i; // 전위 증가 연산자
	//	// i++; 후위 증가 연산자 
	//} while (i < 10);

	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 3)
	//		break; // 탈출
	//		//continue -> 해당조건만 스킵
	//	std::cout << i << std::endl;
	//}
	//// 이제야 떠오른 for의 장점
	//// for는 횟수 조절 가능
	//// while 얘는 그냥 거짓일 때까지라 
	//// 구문 내에 증감구문 따로 필요


	//// && == and 조건 모두 만족시 참
	//// || == or 조건 중 하나라도 충족시 참
	//// !(조건) == NOT 조건을 반대로 반환 (참<->거짓)
	//
	//int var = 1;
	//switch (var)
	//{
	//case 1:
	//	std::cout << "1" << std::endl;
	//	break;
	//case 2:
	//	std::cout << "2" << std::endl;
	//	break;
	//case 3:
	//	std::cout << "3" << std::endl;
	//	break; // 안넣으면 다음 케이스도 실행됨
	//}

	// 안리얼의 실습문제
	// 0부터 100까지의 수를 더한 값을 출력하자

	/*int sum = 0;
	for (int i = 0; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;*/

	// 0부터 100까지 중에서 모든 홀수를 출력하자
	/*for (int i = 0; i <= 100; i++)
	{
		if(i %2 ==1)
			std::cout << i << std::endl;
	}*/

	// 100부터 0까지 중 7 과 8의 배수인 수들을 큰 순서대로 출력하자
	/*for (int i = 100; i >= 0; i--)
	{
		if(i%8 == 0 || i%7 == 0)
			std::cout << i << std::endl;
	}*/
	
	// 2부터 100까지 중 소수를 모두 출력하자
	for (int i = 2; i <= 100; i++)
	{
		int b = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				b = 1;
				break;
			}
			if (b==0)
				std::cout << i << std::endl;
			
		}

	}
	
	

	return 0;
}