#include <stdio.h>

int jump_search(int arr[], int n, int x)
{
	int step = 0;

	while (step * step < n)
	{
		step++;
	}


	int prev = 0;

	while (prev < n && arr[step - 1 < n ? step - 1 : n - 1] < x)
	{
		prev  = step;
		step  += step;

		if (prev >= n)
			return -1
	}

	while (prev < n && arr[prev] < x) 
	{
		prev++;

		if (prev == step)
		{
			return -1;
		}
	}

	if (prev < n && arr[prev] == x)
	{
		return prev;
	}

	return -1;
}

