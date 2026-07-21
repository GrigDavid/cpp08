#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;
		template <typename Iterator>
		void fill(Iterator begin, Iterator end);
	private:
		std::vector<int> arr;
		const unsigned int n;
};

#include "Span.tpp"

#endif