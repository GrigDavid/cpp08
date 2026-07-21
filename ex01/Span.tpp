template <typename Iterator>
void Span::fill(Iterator begin, Iterator end)
{
	if (arr.size() + std::distance(begin, end) > n)
		throw;
	while (begin != end)
	{
		arr.push_back(*begin);
		++begin;
	}
}