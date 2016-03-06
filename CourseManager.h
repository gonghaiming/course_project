#ifndef CMSYS_COURSEMANAGER_H
#define CMSYS_COURSEMANAGER_H
#include "Course.h"
#include<vector>
using namespace std;
class CourseManager{
private:
    vector<Course> courseList;
    int FindCourse(int cid);
    int FindCourse(const string &name);
public:
    CourseManager() = default;
    CourseManager(vector<Course> &courseVect);

    inline int GetCourseNum(){;
        return courseList.size();
    };

    void AddCourse(const string &name);
    void AddCourse(const Course &course);

    void RemoveById(int cid);
    void RemoveByName(const string &name);

    void RemoveLastCourse();

    void PrintAllCourseInfo();

    void PrintLongNameCourse();
};





#endif
