/* �����µ��� ȭ���� �ٲٱ� */
#include <stdio.h>
int main() {
	double celsius;  // �����µ�

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf_s("%lf", &celsius);  // ���� �µ��� �Է� �޴´�.

	printf("���� %f ���� ȭ���� %f �� �Դϴ� \n", celsius, 9 * celsius / 5 + 32);
	return 0;
}