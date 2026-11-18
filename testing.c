

void selection_sort(int *arr, int n)
{
	int min_index;
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < (n - 1))
	{
		min_index = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;	
			}
			j++;
		}
		tmp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = tmp;
		i++;
	}
}
#include <stdio.h>
int main()
{
	int arr[5] = {3,5,2,6,1};
	selection_sort(arr, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d ",arr[i]);
		i++;
	}
	
}