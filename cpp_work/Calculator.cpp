#include <iostream>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main(void)
{
	int a, b;
	int num;
	
	std::cout << "첫번째 정수를 입력: ";
	std::cin >> a;

	std::cout << "두번째 정수를 입력: ";
	std::cin >> b;

	std::cout << "어떤 연산을 하시겠습니까?" << std::endl;
	std::cout << "1: 덧셈" << std::endl << "2: 뺄셈" << std::endl << "3: 곱셈" << std::endl << "4: 나눗셈" << std::endl;
	std::cin >> num;

	switch (num)
	{
	case 1:
		std::cout << "계산결과: " << a << "+" << b << "=" << Add(a, b)<<std::endl;
		break;
	case 2:
		std::cout << "계산결과: " << a << "-" << b << "=" << Sub(a, b) << std::endl;
		break;
	case 3:
		std::cout << "계산결과: " << a << "*" << b << "=" << Mul(a, b) << std::endl;
		break;
	case 4:
		if (a > b) {
			std::cout << "계산결과: " << a << "/" << b << "=" << Div(a, b) << std::endl;
			break;
		}
		else {
			std::cout<<"계산결과: " << b << "/" << a << "=" << Div(b, a);
			break;
		}
	}
}