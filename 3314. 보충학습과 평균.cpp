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
	int T;
	int sum=0;
	int tmp;
	
	cin>>T;
	
	for(int i=1; i<=T; i++)
	{
		
		for(int j=0; j<5; j++)
		{
			cin>>tmp;
			if( tmp >= 40 )
				sum += tmp;
			else
				sum += 40;			
		}
		
		printf("#%d %d\n", i, sum / 5);
		sum = 0;	
		
	}
	
	return 0;	
}
