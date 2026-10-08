#include "MutantStack.hpp"
#include <iostream>
int main()
{
	MutantStack<int> a;
	for (int i = 0; i < 13; i++)
		a.push(i);
	MutantStack<int>::iterator j = a.begin();
	std::cout << *(a.begin()) << "\n" << *j << std::endl;
	const MutantStack<int> b(a);

	MutantStack<int>::const_iterator p = b.begin();
	std::cout << *(b.begin()) << "\n" << *p << std::endl;

	
}