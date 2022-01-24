#include<iostream>
using namespace std;
void swapFunction(int a,int b);
int main()
{
    int m,n;
    cout<<"Enter the values:"<<endl;
    cin>>m>>n;
    swapFunction(m,n);
    cout<<"In main function: "<<endl;
    cout<<m<<"  "<<n<<endl;
}

void swapFunction(int a,int b)
{
    int s;
    s=a;
    a=b;
    b=s;
    cout<<"In swap function: "<<endl;
    cout<<a<<"  "<<b<<endl;
}
