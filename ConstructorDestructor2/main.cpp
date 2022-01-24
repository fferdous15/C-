#include<iostream>
using namespace std;

class Box
{
    int ht,wd,br;
public:

    Box()
    {
        cout<<"Constructing"<<endl;
    }
    void assingvalues(int ht,int wd,int br)
    {
        cout<<"Enter Height: "<<endl;
        cin>>ht;
        cout<<"Enter width: "<<endl;
        cin>>wd;
        cout<<"Enter breadth: "<<endl;
        cin>>br;
    }
    void showValues(int ht,int wd,int br)
    {
        cout<<"Height: "<<ht<<endl;
        cout<<"Width: "<<wd<<endl;
        cout<<"Breadth: "<<br<<endl;
    }
    void volume(int ht,int wd,int br)
    {
        int area;
        cin>>ht>>wd>>br;
        area=ht*wd*br;
        cout<<"The area is: "<<area<<endl;
    }
    ~Box()
    {
        cout<<"Destroyed"<<endl;
    }

};

int main()
{
    int h,w,b;
    Box b1,b2;
    b1.assingvalues(h,w,b);
    b1.showValues(h,w,b);
    b2.assingvalues(h,w,b);
    b2.showValues(h,w,b);
    b1.volume(h,w,b);
    b2.volume(h,w,b);
}
