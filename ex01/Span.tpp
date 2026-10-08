template <typename Iterator>
void Span::fill(Iterator begin, Iterator end)
{
	if (arr.size() + std::distance(begin, end) > n)
		throw (std::out_of_range("Span is full"));
	while (begin != end)
	{
		arr.push_back(*begin);
		++begin;
	}
}