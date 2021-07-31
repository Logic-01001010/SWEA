#include <iostream>

using namespace std;


int main(void)
{
	int T;
	int N; 
	int toggle;
	int sum = 0;
	    
	cin>>T;
	
	for(int _=1; _<=T; _++)
	{

	
	    cin>>N;
	    
	    toggle = false;
	    sum = 0;
	
	    for(int i=1; i<=N; i++)
	    {
	        if(toggle)
	        {
	        	sum += i * - 1;
	        	toggle = false;
	        }
			else
			{
	        	sum += i;
	        	toggle = true;
			}

	    }
	
	    cout<<"#"<<_<<' '<<sum<<endl;
	}
	
    return 0;
}
