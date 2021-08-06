#include <iostream>


using namespace std;

void PRNT_INITIAL(string str)
{
	
	for(int i=0; i<str.length(); i++)
	{
		if( i == 0 )
			printf("%c", str[i] ^ 32 );
		else if( str[i] == ' ' )
			printf("%c", str[i+1] ^ 32);
	}
	
}

int main(void)
{
	int T;
	string str;
	
	cin>>T;
	cin.ignore();
	
	for(int i=1; i<=T; i++)
	{
		
		getline(cin, str);
		
		printf("#%d ", i);
		PRNT_INITIAL(str);
		printf("\n");
		
	}
	
	return 0;	
}
