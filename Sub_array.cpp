#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int s;
	int arr[] = {6,1,2,4,3,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Enter the desired sum:"<<"\n";
	cin>>s;
	int i,j;
	bool found = false;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(arr[i] + arr[j] == s)
			{
				cout<<arr[i]<<" "<<arr[j]<<"\n";
				found = true;
			}
		}
	}
	if(!found)
	{
		cout<<"No pairs found!!"<<"\n";
	}
return 0;	
}
