#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    string str;
	char aeiou[5] = {'a', 'e', 'i', 'o', 'u'};
    int T;
    
    cin>>T;
    
	for(int _=1; _<=T; _++)
	{
		
		cin>>str;
	    
	    for(int i=0; i<str.length(); i++)
	    {
	
	        for(int j=0; j<5; j++)
	        {
	
	            if( str[i] == aeiou[j] )
	            {
	                str.replace(str.find( aeiou[j] ), 1, "");
	                i--;
	                continue;
	            }
	
	        }
	
	
	    }
	
	    cout<<'#'<<_<<' '<<str<<endl;
    }

    return 0;
}
