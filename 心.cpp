#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <tchar.h>

int main() {
	system("color F4");  //����������ɫ��F4Ϊ��ɫ
	double x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1214) //���õĲ�����������״���������е��������ı䰮�ĵ���״
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0)//���ķ��� 
			{
				printf("*");
				Sleep(1);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}