#include <vector>
#include "search.h"
#include <iostream>

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
        // TODO:
        // implement me
        const int *mid = begin + (end - begin) / 2;
	if (mid == end)
		return false;
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

	return binarySearchRecursive(begin, end, value);

}


