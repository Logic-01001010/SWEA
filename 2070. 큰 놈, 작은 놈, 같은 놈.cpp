#include <iostream>
using namespace std;

int main(void)
{
    int T;

    cin>>T;

    for(int i=1; i<=T; i++)
    {
        int a, b;

        cin>>a;
        cin>>b;

        char result = ( (a > b)?'>':(a < b)?'<':'=' );

        cout<<'#'<<i<<' '<<result<<endl;    
    }
    return 0;
}