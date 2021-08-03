#include <iostream>
#include <algorithm>

using namespace std;



int main(void)
{
	int arr[100001];
	
	int N;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr+N);
	
	printf("%d", arr[N/2]);
	
	return 0;	
}
