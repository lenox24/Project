#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//������ - 1
	char ch;
	int tmp;
	double db;

	*&ch = 'P'; //*&�� ��� ����
	*&tmp = 100;
	*&db = 3.14;
	printf("ch�� ����� ���� : %c\n", ch);
	printf("tmp�� ����� ���� : %d\n", tmp);
	printf("db�� ����� ���� : %lf\n", db);

	tmp = 300;
	printf("tmp�� ����� ���� : %d\n", tmp);
	
	//������ - 2
	int a = 100, b = 0;
	b = *&a;
	printf("b�� ����� �� : %d\n",b);
	//������ &a�� ����Ű�� �ּ��� ���� b�� ����

	//������ - 3
	int c = 10, d = 20;
	*&c = *&d;
	printf("c�� ����� �� : %d\n", d);
	//c = 20 ��, c = d;
	
	system("pause");
}