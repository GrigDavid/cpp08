#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void subjectTest()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main()
{
	std::srand(std::time(NULL));
	Span sp(10000);

	for (int i = 0; i < 10000; ++i)
		sp.addNumber(std::rand() % 100000);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> v;
	Span sp2(10000);
	for (int i = 0; i < 10000; ++i)
		v.push_back(i * 10);
	
	sp2.addRange(v.begin(), v.end());
	
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	try
	{
		sp2.addNumber(2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span shortSpan(3);
	try
	{
		std::cout << shortSpan.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	shortSpan.addNumber(1);
	try
	{
		std::cout << shortSpan.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		shortSpan.addRange(v.begin(), v.end());
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//subjectTest();
	return (0);
}