#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string str;
    int sum=0;
    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        sum += str[i]-'0';
    }

    cout<<sum;

    
    return 0;
}