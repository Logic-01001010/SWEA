#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    for( int i=1; i<=10; i++ )
    {
        int temp;
        cin>>temp;
        
        string str;
        int sum = 0;

        cin>>str;

        for(int i=0; i<str.length(); i++)
        {
            if( (i+2) % 2 == 0 )
            sum += str[i] ^ '0';

        }

        cout<<"#"<<i<<' '<<sum<<endl;

    }
    return 0;
}