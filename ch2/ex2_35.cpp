#include <iostream>
#include <typeinfo>

int main()
{
	const int i = 42;
	auto j  = i; // j는 int
	j = 10; // const int가 아니라는 것 확인할 수 있다.
	const auto &k = i; // k는 const int&
	// k = 10; k가 참조하는 변수의 값 바꿀 수 없다. 
	auto *p = &i; // p는 const int*
	// *p = 10; p가 가리키는 변수의 값을 바꿀 수 없다. 
	const auto j2 = i, &k2 = i; // j2는 const int, k2는 const int&
	// j2 = 10; const이므로 값 바꿀 수 없다
	// k2 = 10; const 레퍼런스이므로 참조하는 변수의 값 바꿀 수 없다. 
}