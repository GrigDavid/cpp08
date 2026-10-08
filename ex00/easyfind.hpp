#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <stdexcept>
#include <algorithm>
template <typename T>
typename T::iterator easyfind(T& t, const int n);

template <typename T>
typename T::const_iterator easyfind(const T& t, const int n);
#include "easyfind.tpp"

#endif