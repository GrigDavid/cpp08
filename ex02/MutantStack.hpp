#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		MutantStack();
		MutantStack(const MutantStack& other);
		~MutantStack();
		
		MutantStack& operator=(const MutantStack& other);

		typename Container::iterator begin();
		typename Container::iterator end();

		typename Container::const_iterator begin() const;
		typename Container::const_iterator end() const;
};

#include "MutantStack.tpp"

#endif