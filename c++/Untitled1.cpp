#include <iostream>
using namespace std;
void ifbit(int arr[],int n,int pos)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]&(1<<pos))
            cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,pos;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    cout<<"Enter the position"<<endl;
    cin>>pos;
    ifbit(arr,9,pos);

    return 0;
}
