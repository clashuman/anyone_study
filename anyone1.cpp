#include <iostream>

int main_lesson2()
{
	// �ݺ���
	// while, do while, for �⺻ �� ����

	int i = 0;
	//while (i < 10)
	//{
	//	std::cout << i << std::endl;
	//	++i; // ���� ���� ������
	//	// i++; ���� ���� ������ 
	//}

	//do
	//{
	//	std::cout << i << std::endl;
	//	++i; // ���� ���� ������
	//	// i++; ���� ���� ������ 
	//} while (i < 10);

	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 3)
	//		break; // Ż��
	//		//continue -> �ش����Ǹ� ��ŵ
	//	std::cout << i << std::endl;
	//}
	//// ������ ������ for�� ����
	//// for�� Ƚ�� ���� ����
	//// while ��� �׳� ������ �������� 
	//// ���� ���� �������� ���� �ʿ�


	//// && == and ���� ��� ������ ��
	//// || == or ���� �� �ϳ��� ������ ��
	//// !(����) == NOT ������ �ݴ�� ��ȯ (��<->����)
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
	//	break; // �ȳ����� ���� ���̽��� �����
	//}

	// �ȸ����� �ǽ�����
	// 0���� 100������ ���� ���� ���� �������

	/*int sum = 0;
	for (int i = 0; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;*/

	// 0���� 100���� �߿��� ��� Ȧ���� �������
	/*for (int i = 0; i <= 100; i++)
	{
		if(i %2 ==1)
			std::cout << i << std::endl;
	}*/

	// 100���� 0���� �� 7 �� 8�� ����� ������ ū ������� �������
	/*for (int i = 100; i >= 0; i--)
	{
		if(i%8 == 0 || i%7 == 0)
			std::cout << i << std::endl;
	}*/
	
	// 2���� 100���� �� �Ҽ��� ��� �������
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