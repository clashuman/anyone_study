#include <iostream>

int Sum(int param0, int param1)
{
	return param0 + param1;
}
int Sum(int param0, int param1, int param2)
{
	return param0 + param1 + param2;
}
// �Լ� �����ε� 
// �Ű� ������ ������ �ٸ��ų� 
// ������ ���� �ڷ����� �ٸ� ��쿡�� �����
// �����ε� �� �Լ��� ȣ��� �Լ������ �� �� ����

int main_lesson3()
{
	//Sum()
	
	// bool (1byte)
	/*bool b = true;

	int var = 10;
	b = var == 10;
	
	if(b)
		std::cout << "var == 10" << std::endl;*/
	// �� ���� char, int, float, double ���� c�� �����
	// cout�� character output, endl�� end line�� ����

	// cin Ŭ���� (�Է�)
	/*int num = 0;
	
	std::cin >> num;
	std::cout << num << std::endl;*/

	return 0;
}

// �Լ� ������ ������Ͽ�, Ȯ���� h�� ���
// �Լ� ���Ǵ� �ҽ����Ͽ�, �ҽ������� c�� cppȮ���� ���
// ex) �Լ� "Printf"�� �����Ϸ���
// �ּ��� Ž������ ������Ͽ� ������ ������ �Լ� ������ �ְ�
// �ҽ����Ͽ��� include��, �Լ� ���Ǹ� �Է��Ѵ�
// ����� �Լ��� main�� �ִ� ���Ͽ� �߰��ϸ� ��
// �ܺ��ڵ�� < >, ���α׷� �����ڵ�� " "
// ������Ͽ� #pragma once ������ cpp���ϵ鿡 �ѹ����� ���Ե�
// ������ �־� ������ �߻��ϴ� ���� ����