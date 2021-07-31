#include <iostream>

using namespace std;

int main(void)
{   

    int N=0, T=0;
    int a=0, b=0, c=0, d=0, e=0;

	cin>>T;

	for(int i=0; i<T; i++)
	{
	

	    cin>>N;
		
	    for( ; N != 1 ; )
	    {
	
	        if( N % 11 == 0 )
	        {
	            e++;
	            N /= 11.0;
	        }
	
	        else if( N % 7 == 0 )
	        {
	            d++;
	            N /= 7.0;
	        }
	
	        else if( N % 5 == 0 )
	        {
	            c++;
	            N /= 5.0;
	        }
	
	        else if( N % 3 == 0 )
	        {
	            b++;
	            N /= 3.0;
	        }
	
	        else if( N % 2 == 0 )
	        {
	            a++;
	            N /= 2.0;
	        }
	
	
	    }
	
	
	    cout<<'#'<<i+1<<' '<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
		a=0, b=0, c=0, d=0, e=0;
	}
	
    return 0;
}
