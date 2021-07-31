#include <iostream>
using namespace std;

int main(void)
{
    int T=0, a=0, b=0;

    cin>>T;

    for(int i=1; i<=T; i++)
    {
        cin>>a;
        cin>>b;

        cout<<'#'<<i<<' '<<a/b<<' '<<a%b<<endl;
    }
    return 0;
}
