#ifndef CMSYS_COURSE_H
#define CMSYS_COURSE_H

#include <string>
#include<iostream>
using namespace std;

class Course {
    friend void read(istream &inputStream,Course &course);
    friend  ostream & operator <<(ostream &out,Course &course);
public:
    Course();
    Course(const string &name);
    Course(const Course &course);
    virtual ~Course (){};
    virtual void PrintInfo();
    inline void SetName(const string &newName){
        name = newName;
    };
    inline void SetId(int courseId){id = courseId;};
    inline int GetId(){return id;};
    inline string GetName(){return name;};

protected:
    int id;
    string name;
    static int currentId;
};
class ProjectCourse:public Course{
public:
    inline void SetTag(const string &courseTag){
        tag = courseTag;
    };
    inline string GetTag(){
        return tag;
    };
    virtual void PrintInfo();
    
private:
    string tag;
};
class JudgeCourse:public Course{
private:
        int time;
public:
        inline void SetTime(int newTime){
            time = newTime;
        };
        inline int GetTime(){
            return time;
        };
        virtual void PrintInfo();
};
#endif
