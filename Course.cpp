#include "Course.h"
#include<iostream>
using namespace std;
int Course::currentId = 1;
Course::Course(const Course &course){
    id = course.id;
    name = course.name;
}
Course::Course(){
    id = currentId++;
    name = "";
}
Course::Course(const string &cname):Course(){
    name = cname;
}

void Course::PrintInfo(){
    cout << "Course: " << id << " : " << name << endl;
}

ostream & operator <<(ostream &out,Course &course){
    out << "Course: "<<course.id <<" : "<<course.name<<endl;
    return out;
}

void ProjectCourse::PrintInfo(){
    cout << "Course: " << id << " : "<< name <<" "<<tag << endl;
}
void JudgeCourse::PrintInfo(){
    cout <<"Course: " <<id << " : " << name << " " <<time<<endl;
}

