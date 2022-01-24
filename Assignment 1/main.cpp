#include <iostream>
#include<string>
using namespace std;

class Creature
{
    int Number_of_Eyes,Number_of_Legs;
    string Color;
public:
    static int Count;
    Creature()
    {
        cout<<"Default Constructor"<<endl;
    Count++;
    }
Creature(int n)
    {
        cout<<"Parameterized Constructor"<<endl;
        Count++;
    }
    void Values()
    {
        cout<<"Description of the unknown creature is given below."<<endl;
    }
    void Values(int noe,int nol,string clr)
    {
        cout<<"Number of eyes: "<<noe<<endl;
        cout<<"Number of legs: "<<nol<<endl;
        cout<<"Color of the creature: "<<clr<<endl;
    }

};

int Creature::Count=0;
int main()
{
   Creature c1,c2(0),c3,c4;
   c3.Values();
   c4.Values(4,8,"Green");
   cout<<"Number of objects: "<<Creature::Count<<endl;
}
