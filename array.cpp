#include<iostream>
#include<cmath>
using namespace std;

void bubble_sort(int arr[] , int size )
{
	int i,j,temp;
	
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - i -1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
cout<<"The bubbly sorted array is:"<<"\n";
for(i = 0; i < size; i++)
{
	cout<<arr[i]<<"\t";
	
		
}
cout<<endl;
}

void selection_sort(int arr[] , int size)
{
	int i,j,min;
	for(i = 0; i < size - 1; i++)
	{
		min = i;
		for(j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(arr[min],arr[i]);
		}
	}
	cout<<"The selectively sorted array is:"<<"\n";
	for(i = 0; i < size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

int linear_search(int arr[] , int element , int size)
{
	cout<<"Enter the element you want to search for:"<<"\n";
	cin>>element;
	int i;
	int j;
	for(i = 0; i < size - 1; i++)
	{
		if(arr[i] == element)
		return i;
	}
	return 0;
	
}

int binary_search(int arr[] , int element , int size)
{
	int low = 0;
	int mid;
	int high = size - 1;
	while(low <= high)
	{
		 mid = low + (high - low) / 2;
	}
	if(arr[mid] == element)
	{
		return mid;
	}
	else if(arr[mid] < element)
	{
		mid = low + 1;
	}
	else
	{
		mid = high - 1;
	}
	return 0;
}

int main()
{
	int element;
	int arr[] = {36,18,72,54};
	int size = sizeof(arr) / sizeof(arr[0]);
	int choice;
	cout<<"1.Bubble Sort"<<"\n";
	cout<<"2.Selection Sort"<<"\n";
	cout<<"3.Linear Search"<<"\n";
	cout<<"4.Binary Search"<<"\n";
	cout<<"5.Exit"<<"\n";
	do
	{
		cout<<"Enter your choice:"<<"\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					bubble_sort(arr , size);
					break;
				}
			case 2:
				{
					selection_sort(arr , size);
					break;
				}
			case 3:
				{
					int lr = linear_search(arr , element , size);
					if(lr == 0)
					{
						cout<<"Element not found!"<<"\n";
					}
					else
					{
						cout<<"Element found at"<<" "<<lr<<"th position"<<"\n";
					}
					break;
				}
			case 4:
				{
					int br = binary_search(arr , element , size);
					if(br == 0)
					{
						cout<<"Element not found!"<<"\n";
					}
					else
					{
						cout<<"Element found at"<<" "<<br<<"th position"<<"\n";
					}
					break;
				}
			case 5:
				{
					cout<<"Thank you!!!"<<"\n";
					break;
				}
		}
	}while(choice != 5);

	return 0;
	
}
