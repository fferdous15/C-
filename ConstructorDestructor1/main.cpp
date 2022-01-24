#include <iostream>
using namespace std;

class Box
{
    int height,width,breadth;
public:
    void assignValues(int h, int w,int b)
    {
        height=h;
        width=w;
        breadth=b;
    }
    void showInfo()
    {
        cout<<"Height= "<<height<<endl;
        cout<<"Width= "<<width<<endl;
        cout<<"Breadth= "<<breadth<<endl;
    }
    void area()
    {
        cout<<"Area= "<<height*width<<endl;
    }
    void volume()
    {
        cout<<"Volume= "<<height*width*breadth<<endl;
    }
};


int main()
{
    Box b1,b2;
    int ht,wd,bd;
    cout<<"Enter height: ";
    cin>>ht;
    cout<<"Enter width: ";
    cin>>wd;
    cout<<"Enter breadth: ";
    cin>>bd;
    b1.assignValues(ht,wd,bd);
    b1.showInfo();
    b1.area();
    b1.volume();
    b2.assignValues(ht,wd,bd);
    b2.showInfo();
    b2.area();
    b2.volume();
}
