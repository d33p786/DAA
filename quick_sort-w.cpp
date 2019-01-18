
#include<iostream>

using namespace std;

class Quick_Sort
{
	private:
		
		int pivot;
	
	public:
		
		void swap(int arry[],int low, int high)
		{
			int  temp;
			temp = arry[low];
			arry[low] = arry[high];
			arry[high] = temp;
		}
		
		int partition(int arry[], int low, int high)
		{
			int p = high;
			
			int i = low;
			int j;
			for(j = low; j <= high ; j++)
			{
				if(arry[j] < arry[p])
				{
					swap(arry,i,j);
					i++;	
				}
			}
			
			swap(arry,i,high);
			
			return i;
		}
		
		void quick_sort(int arry[], int low, int high)
		{

if(low < high)
{

			pivot = partition(arry, low, high);
			
			quick_sort(arry,low,pivot - 1);
			quick_sort(arry,pivot + 1,high);
		}}
	
};

int main()
{
	
	Quick_Sort qs;
	int n, low, high;
	
	cout << "\nEnter size of array :: ";
	cin >> n;
	
	int arry[n];
	
	cout << "\nEnter Elements :: ";
	for(int i = 0; i < n; i++)
	{
		cout << "\nEnter " << i + 1 << " element : ";
		cin >> arry[i];
	}
	
	low = 0;
	high = n - 1;

	qs.quick_sort(arry,  low, high);
	
	for(int i =0;i<n;i++)
	{
		cout<<arry[i];
	}
	
	return 0;
}
