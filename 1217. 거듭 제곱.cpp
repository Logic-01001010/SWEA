#include <iostream>


using namespace std;


int power(int n, int m)
{
	if( m <= 0)
		return 1;
	return n * power(n, m-1);
}

int main(void)
{
	int n, m;
	int count = 0;
	int T;
	
	
	
	while(1)
	{
	scanf("%d", &T);
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	printf("#%d %d\n", T, power(n, m));
	
	count++;
	
	if(count >= 10)
		break;
	
	}
	
	return 0;	
}
