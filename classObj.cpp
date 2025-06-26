#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;

class person
{

public:
    string name;
    int age;
    void display1()
    {
        cout << "Name : : " << name << endl;
        cout << "age : : " << age << endl;

    }
};

class student : public person
{
    public: 
    int id;
    void display2()
    {
        cout << "ID : : " << id << endl;
        display1();
    }
};

 
int main () {
    student s1;
    s1.id=1001;
    s1.name="Robiul";
    s1.age=25;
    s1.display2();

 
 
return 0;
}