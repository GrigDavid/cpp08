#include "MutantStack.hpp"
#include <iostream>
#include <list>

void	subjectTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void subjectTestList()
{
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}


int main()
{
	std::cout << "subject test with mutantStack" << std::endl;
	subjectTest();

	std::cout << "\n\nsubject test with list" << std::endl;
	subjectTestList();

	std::cout << "\n\nmy tests" << std::endl;
	MutantStack<int> a;
	std::stack<int> b;
	MutantStack<int> *p = &a;

	for (int i = 1; i < 100; i+=i)
	{
		a.push(i);
	}
	b = a;
	b.pop();
	std::cout << "stack size: " << b.size() << " mutantStack size: " << a.size() << std::endl;
	(*p).pop();
	std::cout << "stack size: " << b.size() << " mutantStack size: " << a.size() << std::endl;
	a.push(42);
	MutantStack<int>::iterator it = a.begin();
	while (it != a.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	const MutantStack<int> c(a);
	MutantStack<int>::const_reverse_iterator rit = c.rbegin();
	while (rit != c.rend())
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	return 0;

}