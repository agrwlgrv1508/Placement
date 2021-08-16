#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    char gender;
    student()
    {
        cout<<"Default Constructor"<<endl;
    }
    student(string s,int a,char g)
    {
        cout<<"Parameterized Constructor"<<endl;
       name=s;
       age=a;
       gender=g;
    }
    student (student &a)
    {
        cout<<"Copy constructor"<<endl;
       name=a.name;
       age=a.age;
       gender=a.gender;
    }
    void printinfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
    bool operator == (student &b){
   if(name==b.name && age==b.age && gender==b.gender)
   {
       return true;
   }
   return false;
    }
    
    ~ student()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
   student b("rahul",18,'M');
    student a("Gourav",18,'M');
   // a.printinfo();
    student c=a;
   // c.printinfo();
    if(c==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }
    return 0;
}
