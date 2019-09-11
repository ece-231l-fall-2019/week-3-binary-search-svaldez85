#include <vector>
#include "search.h"
#include <iostream>

bool binarySearch(const std::vector<int>& set, int value)
{
	// TODO:
	// implement me
	
	unsigned int end = set.size();
	unsigned int begin = 0;
	unsigned int mid = end / 2;
	do
	{
		if(set[mid] > value)
		{
			end = mid;
		}
		else if (set[mid] < value)
		{
			begin = mid + 1;
		}
		else
			return true;
		mid = (end - begin)/2 + begin;
	}while(end != mid);

	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	// TODO:
	// implement me
	const int *mid = begin + (end - begin) / 2;
	do
        {
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
                        return true;
		mid = begin + (end - begin) / 2;

	
	}while(end != mid);

	return false;
}

