//문자형 배열을 생각해보자. 배열의 요소에는 문자 H, E, L, L, O가 저장되어 있고 맨 끝에는 0을 저장시킨다. 저장된 문자들의 개수를 세어서 반환하는 함수 my_strlen(char *p)를 작성하고 테스트해보자. 이것은 실제로 C언어가 문자열을 저장하는 방법이다.
/*
저장된 문자열 = HELLO
문자열의 길이 = 5
*/

#include <stdio.h>

int my_strlen(char* p);

int main(void)
{
	char A[6] = { 'H', 'E', 'L', 'L', 'O', 0};

	printf("저장된 문자열 = ");
	
	for (int i = 0; i < sizeof(A); i++)
		printf("%c", A[i]);

	printf("\n문자열의 길이 = %d", my_strlen(A));

	return 0;
}

int my_strlen(char* p)
{
	int i = 0;

	for (i = 0; p[i] != 0; i++);

	return i;
}