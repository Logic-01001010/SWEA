#include <iostream>

using namespace std;

int main(void)
{
    int T;

    cin>>T;

    for(int _=1; _<=T; _++)
    {

        int arr[10] = {0, };
        int input;
        int max = 0;

        for(int i=0; i<10; i++)
        {
            cin>>input;
            arr[i] = input;
        }

        for(int i=0; i<10; i++)
        {
            if( max < arr[i] )
                max = arr[i];
        }

        cout<<'#'<<_<<' '<<max<<endl;

    }



    return 0;
}
