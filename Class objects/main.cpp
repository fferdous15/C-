#include <iostream>

using namespace std;
class student
{
    string id, name;
    float cgpa;
    int credit;
public:
    void get();
    void set();
};
void student::set()
{
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Enter ID: "<<endl;
    cin>>id;
    cout<<"Enter credit: "<<endl;
    cin>>credit;
    cout<<"Enter cgpa: "<<endl;
    cin>>cgpa;
}
void student::get()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Credit: "<<credit<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}
int main()
{
    student s1,s2;
    s1.set();
    s2.set();
    s1.get();
    s2.get();
}



##########################################################


#include <iostream>
using namespace std;

class Management{
    public:
    int car_nmbr;
    int amount;
    string car_type;

    void setNmbr();
    void getNmbr();

    void setAmount();
    void getAmount();

    void setType();
    void getType();

    void setRoad();
    void getRoad();
};

void Management::setNmbr()
{
    cout<<"Enter car number: "<<endl;
    cin>>car_nmbr;
}

void Management::getNmbr()
{
    cout<<"Car number: "<<car_nmbr<<endl;
}

void Management::setAmount()
{
    cout<<"Enter amount: "<<endl;
    cin>>amount;
}

void Management::getAmount()
{
    cout<<"Amount: "<<amount<<endl;
}

void Management::setType()
{
    cout<<"Enter car type: "<<endl;
    cin>>car_type;
}

void Management::getType()
{
    cout<<"Car type: "<<car_type<<endl;
}

int main() {
    Management m;

    m.setNmbr();
    m.setAmount();
    m.setType();

    m.getNmbr();
    m.getAmount();
    m.getType();
}
