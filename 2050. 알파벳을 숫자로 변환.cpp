#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string str;
	
	cin>>str;
	
	for(int i=0; i<str.length(); i++)
	{
		
		if( str[i] >= 'A' && str[i] <= 'Z' )
			printf("%d ", str[i] - 'A' + 1);
		else if( str[i] >= 'a' && str[i] <= 'z' )
			printf("%d ", str[i] - 'a' + 1);
	}
	
	return 0;	
}
