#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	Span sp(15);

	for (int i = 0; i < 100; i += 10)
		sp.addNumber(i);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> v;
	for (int i = 100; i < 200; i += 20)
		v.push_back(i);
	sp.fill(v.begin(), v.end());
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try{
		sp.addNumber(2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}