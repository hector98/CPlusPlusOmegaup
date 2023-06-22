#include <iostream> 
#include <math.h>

int main()
{
		int a, b, c;
		std::cin >> a >> b >> c;

		double res = std::sqrt(std::pow((a + b), c));

		std::cout << res << std::endl;
		
		return 0;
}
