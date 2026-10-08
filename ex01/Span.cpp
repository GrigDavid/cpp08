#include "Span.hpp"
#include <climits>
#include <algorithm>
// #include <exception>
#include <stdexcept>

Span::Span(unsigned int N) : arr(), n(N)
{
}

Span::~Span()
{
};


void Span::addNumber(int num)
{
	if (n == arr.size())
		throw (std::out_of_range("Span is full"));
	arr.push_back(num);
}

int Span::shortestSpan() const
{
	if (arr.size() < 2)
		throw (std::out_of_range("Span has less than 2 elements"));
	std::vector<int> tmp = arr;

	std::sort(tmp.begin(), tmp.end());
	int min = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp.at(i + 1) - tmp.at(i) < min)
			min = tmp.at(i + 1) - tmp.at(i);
	}
	return (min);
}
int Span::longestSpan() const
{
	if (arr.size() < 2)
		throw (std::out_of_range("Span has less than 2 elements"));
	std::vector<int> tmp = arr;

	std::sort(tmp.begin(), tmp.end());
	return (*(--tmp.end()) - *tmp.begin());
}
