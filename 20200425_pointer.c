#include <stdio.h>
#include <iostream>
#include <list>
#include <cstring>

int main(){


	int *numPtr;
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr);
	printf("%p\n", &num1);
	printf("%d\n", *numPtr);


	long long *numPtr1;
	float *numPtr2;
	char *cPtr1;

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);


	char a[1000] = "adfd";
	printf("%s\n", a);
	return 0;
}

/*
참고 | 상수와 포인터
포인터에도 const 키워드를 붙일 수 있는데 const 의 위치에 따라 특성이 달라집니다. 먼저 상수를 가리키는 포인터(pointer to constant)입니다.

const int num1 = 10;    // int형 상수
const int *numPtr;      // int형 상수를 가리키는 포인터. int const *numPtr도 같음

numPtr = &num1;
*numPtr = 20;    // 컴파일 에러. num1이 상수이므로 역참조로 값을 변경할 수 없음
먼저 num1이 const int이므로 이 변수의 주소를 넣을 수 있는 포인터는 const int *로 선언해야 합니다. 그리고 num1의 주소를 numPtr에 넣은 뒤 역참조로 값을 변경하려고 해도 num1은 상수이므로 컴파일 에러가 발생합니다. 즉, pointer to constant는 메모리 주소에 저장된 값을 변경할 수 없다는 뜻입니다.

이번에는 포인터 자체가 상수인 상황입니다(constant pointer). 이때는 * 뒤에 const를 붙입니다.

int num1 = 10;    // int형 변수
int num2 = 20;    // int형 변수
int * const numPtr = &num1;    // int형 포인터 상수

numPtr = &num2;    // 컴파일 에러. 포인터(메모리 주소)를 변경할 수 없음
numPtr에 num1의 주소가 들어가 있는 상태에서 다시 num2의 주소를 넣으려고 하면 컴파일 에러가 발생합니다. numPtr은 포인터 자체가 상수이므로 다른 포인터(메모리 주소)를 할당할 수 없습니다. 즉, constant pointer는 메모리 주소를 변경할 수 없다는 뜻입니다.

마지막으로 포인터가 상수이면서 상수를 가리키는 상황입니다(constant pointer to constant). 이때는 포인터를 선언하는 자료형에도 const를 붙이고 * 뒤에도 const를 붙입니다.

const int num1 = 10;    // int형 상수
const int num2 = 20;    // int형 상수
const int * const numPtr = &num1;    // int형 상수를 가리키는 포인터 상수
                                     // int const * const numPtr도 같음

*numPtr = 30;      // 컴파일 에러. num1이 상수이므로 역참조로 값을 변경할 수 없음
numPtr = &num2;    // 컴파일 에러. 포인터(메모리 주소)를 변경할 수 없음
여기서는 numPtr을 역참조한 뒤 값을 변경하려고 해도 num1은 상수이므로 컴파일 에러가 발생합니다. 그리고 numPtr 자체도 상수이므로 num2의 주소를 넣으려고 하면 컴파일 에러가 발생합니다. 즉, constant pointer to constant는 메모리 주소도 변경할 수 없고 메모리 주소에 저장된 값도 변경할 수 없다는 뜻입니다.

*/