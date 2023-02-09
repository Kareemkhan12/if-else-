#include <iostream>
int main()
{
	const int C = 10;
	int A = C * 2;
	int B = A;
	--B;
	std::cout << C << "\n";
	std::cout << A << "\n";
	std::cout << B << "\n";
}