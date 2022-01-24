#include <iostream>
using namespace std;

void swapValues(int &a, int &b);

int main()
{
    int m,n;
    cout<<"Enter two values: ";
    cin>>m>>n;
    swapValues(m,n);
    cout<<"In main function: "<<endl;
    cout<<m<<" "<<n<<endl;
}

void swapValues(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"In swap function"<<endl;
    cout<<a<<" "<<b<<endl;
}
