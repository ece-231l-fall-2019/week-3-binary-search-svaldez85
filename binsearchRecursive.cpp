#include <vector>
#include "search.h"
#include <iostream>

bool binarySearchRecursive(const std::vector<int>& set, int value)
{
        // TODO:
        // implement me

        unsigned int end = set.size();
        unsigned int begin = 0;
        unsigned int mid = end / 2;
	std::vector<int> new_set;
	
        if(set[mid] > value)
        {
                end = mid;
        }
        else if (set[mid] < value)
        {
                begin = mid + 1;
        }
        else if (set[mid] == value)
	{
		return true;	
	}
	
	
	for (unsigned int i = begin; i < end; i++)
		new_set.push_back(set[i]);
	

	if (new_set.size() == 0)
		return false;
	else
		binarySearchRecursive(new_set, value);
	

	return false;
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
        // TODO:
        // implement me
        const int *mid = begin + (end - begin) / 2;
        if(*mid > value)
        {
                end = mid;

	}
        else if (*mid < value)
        {
                begin = mid;
                begin++;
	}
	else
	{
		return true;
	}

	if (end == begin)
		return false;
	else
	{
//		std::cout << *begin << " " << *end << std::endl;
		binarySearchRecursive(begin, end, value);
	}
	return false;

}


