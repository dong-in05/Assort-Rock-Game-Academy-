#include<iostream> //��ó�� ������

/*
	C++���� �Լ��� ����Ϸ���
	�ݵ�� �� �Լ��� ������ �̸� ���� �Ͽ��� �Ѵ�.
*/

using namespace std;  //�̰��� ������ std::cout�� cout�� ������ �� �ִ�

// ' ; '  �������� ����

int main() {
	//C++ �ڵ忡�� main (�̸��� ����) �Լ��� �־���Ѵ�

	cout << "Hello, world" << endl;		//cout�� ��� endl�� �� �ٲ�
															// "<<" �������� ���� '=' �����ϵ�

		//char : ���� ������
	char a = '!';
	char c[] = { 'a','b','c','d', '\0'};
	cout << c << endl;
	//null ���� '\0'

	bool b = 0;	// 1�� true 0�� false 0�� �����ϰ� ��� ���� 1�θ� �����Ѵ�
	bool b1 = 1;
	bool b2= 4414;
	
	cout << b << " " << b1 << " " << b2 << endl;

	return 0;
}