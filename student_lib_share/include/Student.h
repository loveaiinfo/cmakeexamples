#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student{
public:
    Student(const string& name):mName(name){
        cout << "Student::constructor" << endl;
    }

    ~Student(){
        cout << "Student::destructor" << endl;
    }

    const string& getName()const;
private:
    string mName;

};

#endif
