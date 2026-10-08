#include "Span.hpp"
#include <algorithm>
#include <stdexcept>


Span::Span() : arr(), n(0)
{
}
Span::Span(unsigned int N) : arr(), n(N)
{
}

Span::Span(const Span& other) : arr(other.arr), n(other.n)
{
}

Span&	Span::operator=(const Span& other)
{
	if (this == &other)
		return (*this);
	if (other.arr.size() > n)
		throw(std::out_of_range("Span size is too small"));
	arr = other.arr;
	return (*this);
}

Span::~Span()
{
}


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
