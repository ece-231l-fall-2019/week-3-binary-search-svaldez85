#include <vector>

bool linearSearch(const std::vector<int>& set, int value)
{
	for(unsigned int i = 0; i < set.size(); i++)
        {
	       if(set[i] == value)
                        return true;
        }

	return false;
}


bool linearSearch(const int *begin, const int *end, int value)
{
        while(begin != end)
	{
		if (*begin == value)
			return true;
		begin++;
	}
	return false;
}
