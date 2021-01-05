#include <iostream>

int main () 
{
	int i, sum = 0;

	for (i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	std::cout << "the sum is " << sum << "\n";

	return 0;
}
