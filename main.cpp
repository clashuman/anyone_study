#include <iostream>


int main_lesson1()
{
	int var0 = 0, var1 = 12, var2 = 15;
	// ���Կ����� ' = ' == ������ ���� ����(�ʱ�ȭ)
	// �������� ��� ������, �ּ��� C�� ����
	
	//std::cout << "Hello World" << std::endl;
	//std::cout << var0 << std::endl;

	// if�� (�񱳿�����) // C�ʹ� ȣ����� ����
	if(var1<var2)
		std::cout << "first" << std::endl;
	else if (var1>var2)
		std::cout << "second" << std::endl;
	else
		std::cout << "third" << std::endl;
	// f10�� ���� ����׸� �������� �� �� ����
	// �� ������ �����ϸ� f5�� ���� ����


	return 0;
}



// ���� �ڷ��� 
// ������ ũ��(Byte), ���� ����
// bool      1          0 ~ 1
// char      1        -128 ~ 127
// short     2      -32768 ~ 32767
// int     4(����)  �� -21�� ~ 21��
// long    8(����)  �� -900�� ~900��
// float     4         7�ڸ� �Ǽ�
// double    8        15�ڸ� �Ǽ�



