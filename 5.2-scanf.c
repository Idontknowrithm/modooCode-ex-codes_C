/* scanf �� ���� */
#pragma warning(disable : 4996)
#include <stdio.h>
int main() {
	char ch;  // ����

	short sh;  // ����
	int i;
	long lo;

	float fl;  //�Ǽ�
	double du;

	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);

	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %d , float : %f, double : %f \n", lo, fl, du);
	return 0;
}