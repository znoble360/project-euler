#include <iostream>

int main ()
{
	int lim = 4000000;
	int i, temp;
	int sum = 0;
	int prev = 1;
	int curr = 2;

	// std::cout << prev << "\n";

	while (curr < lim)
	{
		// std::cout << curr << "\n";

		if (curr % 2 == 0)
		{
			sum += curr;
		}
		temp = curr;
		curr = prev + curr;
		prev = temp;
	}

	// std::cout << "The sum of all the even numbers in the fibonacci sequence below 4 mill is:\n\t" << sum << "\n";
	std::cout << "answer for under " << lim << ": " << sum << "\n";

	return 0;
}
