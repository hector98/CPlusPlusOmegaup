#include <iostream>

int main()
{
		int num, sum;
		std::cin >> num;

		if(num%2 == 0)
		{
				sum = (num/2)*(num/2);
		}
		else
		{
				num ++;
				sum = (num/2)*(num/2);
		}

		std::cout << sum << std::endl;

		return 0;
}
