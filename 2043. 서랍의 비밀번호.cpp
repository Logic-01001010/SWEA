#include <iostream>
using namespace std;

int main(void)
{
    int p, k;
    cin>>p;
    cin>>k;

    int result = p - k;

    if( result < 0 )
        result = result * -1;

    cout<<result+1;

    return 0;
}
