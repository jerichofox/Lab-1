#include <stdio.h>
#include <locale.h>

void main()
{  
	setlocale(LC_ALL, "RUS");   

	puts("��� ���������");   

	puts("Hello World!");         

	puts("������� Enter ��� �����������...");   
	getchar();
	puts("����������� ���������");

	return 0;   
}