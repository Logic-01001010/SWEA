#include <iostream>


using namespace std;


int count(int n)
{
	
	if( n < 0 )
		return 0;
	else
	{
		printf("%d ", n);
		count( n - 1 );
	}
}

int main(void)
{
	int n;
	cin>>n;
	
	count(n);
	
	return 0;	
}
