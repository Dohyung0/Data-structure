#include <stdio.h>

int main(void) {
	char s1[20];
	printf("문자열을 입력하세요: ");
	scanf_s("%s", s1, 20);
	printf("입력된 문자열은\n\"%s\"\n입니다.", s1);
	int a = 0;
	while (s1[a]!='\0') {
		a = a + 1;
	}
	printf("입력된 문자열의 길이는 = %d", a);
	return 0;
}