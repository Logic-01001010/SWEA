#include <iostream>

using namespace std;

int main(void)
{
 
    int N, TC;
    int toggle = false;

	cin>>TC;
	
	for(int _=1; _<=TC; _++)
	{
	    cin>>N;
	
	    for(int a=1; a<=9; a++)
	    {
	
	        for(int b=1; b<=9; b++)
	        {
	            if( (a*b) == N )
	            {
	                cout<<'#'<<_<<" Yes"<<endl;
	                toggle = true;
	                break;
	            }
	            if(a==9 && b==9)
	                cout<<'#'<<_<<" No"<<endl;
  
	        }
		
			if(toggle)
			{
				toggle = false;
				break;
			}
			
	    }
	    
	    
	}

    return 0;
}
