#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		virtual ~MutantStack();
		
		typename Container::iterator begin();
		typename Container::iterator end();

		typename Container::const_iterator begin() const;
		typename Container::const_iterator end() const;
};

#include "MutantStack.tpp"

#endif