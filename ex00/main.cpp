#include "easyfind.hpp"
#include <iostream>
#include <vector>
int main()
{
	std::vector<int> a;

	a.push_back(5);
	a.push_back(22);
	a.push_back(6);
	a.push_back(10);
	a.push_back(2);
	a.push_back(0);

	std::cout << *(--easyfind(a, 20)) << std::endl;
	return (0);
}