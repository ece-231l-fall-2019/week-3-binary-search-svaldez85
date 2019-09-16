
void bubbleSort(int *begin, int *end)
{
	while (begin != end)
	{
		int *check = begin + 1;

		while (check!= end)
		{
			if (*check < *begin)
			{
				int value = *check;
				*check = *begin;
				*begin = value;
			}
			check++;
		}
		begin++;
	}

}

