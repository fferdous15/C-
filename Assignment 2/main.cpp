#include <iostream>
#include<string>
using namespace std;

class Bird
{
    string name;
    string color;
    bool Can_Fly_Or_Not;
public:
    static int Count;
     Bird()
    {
        cout<<"Default Constructor"<<endl;
    Count++;
    }
     Bird(int n)
    {
        cout<<"Parameterized Constructor"<<endl;
        Count++;
    }
    void information()
    {
        cout<<"Description of the Bird is given below."<<endl;
    }
    void information(string n,string c)
    {
        cout<<"Name of the bird: "<<n<<endl;
        cout<<"Color of the bird: "<<c<<endl;
    }
    void fly_or_not()
    {
        char condition;
        cout<<"Is the bird can fly or not (type y = yes and n = no)"<<endl;
        cin>>condition;
        if(condition=='y')
        {
            Can_Fly_Or_Not=true;
        }
        else
        {
            Can_Fly_Or_Not=false;
        }
        cout<<""<<Can_Fly_Or_Not<<endl;
    }
};
int Bird::Count=0;
int main()
{
    Bird b2(0),b3,b4,b1;
    b3.information();
    b4.information("Parot","Green");
    b1.fly_or_not();
    cout<<"Number of objects: "<<Bird::Count<<endl;
}
