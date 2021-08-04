#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	
	int T;
	int N;
	int tmp;
	
	int arr[50];
	
	cin>>T;
	
	
	for(int i=1; i<=T; i++)
	{
		
		cin>>N;	
		
		for(int j=0; j<N; j++)
		{
			cin>>tmp;
			arr[j] = tmp;
		}
		
		sort(arr, arr+N);
		
		cout<<"#"<<i;
		
		for(int k=0; k<N; k++)
		{
			cout<<" ";
			cout<<arr[k];	
		}
		
		cout<<endl;
		
	}	
	
	return 0;
}
