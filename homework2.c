#include <stdio.h>

int main(void) {
	char s1[20];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", s1, 20);
	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.", s1);
	int a = 0;
	while (s1[a]!='\0') {
		a = a + 1;
	}
	printf("�Էµ� ���ڿ��� ���̴� = %d", a);
	return 0;
}