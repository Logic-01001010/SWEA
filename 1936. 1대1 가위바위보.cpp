#include <iostream>
using namespace std;
 
int main(void)
{
    
    int a, b;

    cin>>a;
    cin>>b;

    // 가위: 1
    // 바위: 2
    // 보: 3
    
    // A가 이기는 수
    if( (a == 1 && b == 3) || (a == 2 && b == 1 ) || (a == 3 && b == 2))
        cout<<"A";
    else
        cout<<"B";

    return 0;
}
