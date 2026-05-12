#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout<<"Parent Constructor"<<endl;
    }

    ~Person(){
        cout<<"Parent destructor"<<endl;
    }
};

class Student : public Person{
    //name , age, rollno
public:
    int rollno;

    Student(){
        cout<<"Child Constructor"<<endl;
    }

    ~Student(){
        cout<<"Child destructor"<<endl;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;

    }

};

int main(){
    Student s1;
    s1.name = "Rahul Kumar";
    s1.age=21;
    s1.rollno=1234;

    s1.getInfo();
    return 0;
}