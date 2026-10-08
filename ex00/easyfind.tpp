template <typename T>
typename T::iterator easyfind(T& t, const int n)
{
	typename T::iterator tmp = std::find(t.begin(), t.end(), n);
	if (tmp == t.end())
		throw std::runtime_error("Value not found");
	return (tmp);
}

template <typename T>
typename T::const_iterator easyfind(const T& t, const int n)
{
	typename T::const_iterator tmp = std::find(t.begin(), t.end(), n);
	if (tmp == t.end())
		throw std::runtime_error("Value not found");
	return (tmp);
}