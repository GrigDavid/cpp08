#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <iterator>
#include <cstddef>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span& other);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end);
	private:
		Span();
		std::vector<int> arr;
		unsigned int n;
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
	if (arr.size() + static_cast<size_t>(std::distance(begin, end)) > n)
		throw (std::out_of_range("Span is full"));
	while (begin != end)
	{
		arr.push_back(*begin);
		++begin;
	}
}

#endif