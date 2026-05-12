#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties/attributes
private:
    double salary;
public:
//non-parameterized
    // Teacher(){
    //     dept="computer science";
    // }

//parameterized
    Teacher(string name, string dept, string subject,double salary){
        this->name=name;//obj = function parameter
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

//copy constructor
Teacher(Teacher &orgObj){ //pass by reference
    cout<<"I am custom copy constructor"<<endl;
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->subject = orgObj.subject;
    this->salary=orgObj.salary;
}

    string name;
    string dept;
    string subject;


    //methods/ member functions
    void changeDept(string newDept){
        dept=newDept;
    }

    //setter - sets private value
    void setsal(double sal){
        salary=sal;
    }

    //getter - gets private value
    double getsal(){
        return salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }


};

class Account{
private:
    double balance;
    string password; //data hiding

public:
    string accountId;
    string username;

};

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }

};

int main(){
    // Teacher t1("Shruti","Computer science","C++",25000);//constructor call

    // Teacher t2(t1);//default copy constructor
    // t2.getInfo();
    // t1.name = "Shruti";
    // t1.subject = "C++";
    // t1.setsal(25000);

    // cout<<t1.dept<<endl;
    // cout<<t1.getsal()<<endl;

    // t1.getInfo();

    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    return 0;
}