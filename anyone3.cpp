#include <iostream>
#include <string> 
// ��� ���� ���ڿ� �ٷ�¹� (��Ʈ�� Ŭ����)

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
	//// �ʱ�ȭ�ϴ� �縸ŭ �迭 ���� ���� �� �ִ�
	//
	//char str[128] = "Hello world"; // ���޾���
	//// ��Ʈ�� Ŭ����
	//// ���ڿ��� ������ �����Ŵ (���ڸ��� �⺻ �ڷ������λ�밡��)
	//std::string str = "Hello world";
	//std::cout << str << std::endl;

	// ������
	//int num = 10;
	//Addone(&num);
	//std::cout << num << std::endl;
	//// �����͸� Ȱ���ϸ� �ٸ� �Լ������� main �Լ� ���� ������ ���� ����

	// swap
	//int num0 = 5, num1 = 10;

	///*int temp = num0;
	//num0 = num1;
	//num1 = temp;
	//std::cout << num0 << std::endl;
	//std::cout << num1 << std::endl;*/

	//Swap(&num0, &num1); 
	// �����Լ� ���ξ� �� call by value �Ͼ�� ����
	// �����Լ����� �Ű������� ������ ������ ���� �ذ�

	//// ���� ���� / referance 
	// ���� ������ ������ ����Ű�� �̸��� �ϳ� �� �߰��� ��
	
	int num = 10;
	int& ref = num;

	std::cout << ref << std::endl;
	// ���������� �ʱ�ȭ�θ� ������ �Ҵ��� �� �ְ� ���� �Ұ���
	// �������� ���� == ����Ű�� ������ ����
	// ref =5; -> num == 5
	
	//void Swap(int* param0, int* param1)
	//{
	//	int temp = *param0;
	//	*param0 = *param1;
	//	*param1 = temp;
	//} 
	//Swap(&num0, &num1);
	//// ������ ������ �ٲ�� ������ �Ű����� �κп� &�� ���̸� ��
	
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