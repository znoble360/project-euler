#include <iostream>

int main ()
{
	const int fourmill = 4000000;
	int i, temp;
	int sum = 0;
	int prev = 1;
	int curr = 2;

	std::cout << prev << "\n";

	while (curr < fourmill)
	{
		std::cout << curr << "\n";

		if (curr % 2 == 0)
		{
			sum += curr;
		}
		temp = curr;
		curr = prev + curr;
		prev = temp;
	}

	std::cout << "The sum of all the even numbers in the fibonacci sequence below 4 mill is:\n\t" << sum << "\n";

	return 0;
}
