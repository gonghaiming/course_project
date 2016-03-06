#include "CourseManager.h"
int CourseManager::FindCourse(int cid){
    int index = 0;
    for(auto iter = courseList.begin();iter!=courseList.end();iter++){
        if(iter->GetId() == cid){
            return cid;
        }
        index++;
    }
    return index;
}

int CourseManager::FindCourse(const string &name){
    int index = 0;
    for(auto iter = courseList.begin();iter!=courseList.end();iter++){ 
        if(iter->GetName() == name){
            return index;
        }
        index++;
    }
    return index;
}

CourseManager::CourseManager(vector<Course>&courseVect){
    for(auto iter = courseVect.begin();iter!=courseVect.end();iter++){  
       courseList.push_back(*iter);
}
}

void CourseManager::RemoveById(int cid){
    int index = FindCourse(cid);
    if(index>=0 && index < courseList.size())
        courseList.erase(courseList.begin()+index);
    else
        cout << "Not found" <<endl;
}
void CourseManager::RemoveByName(const string &name){
    int index = FindCourse(name);
    if(index >=0 && index < courseList.size()){
        courseList.erase(courseList.begin()+index);
    }
}

void CourseManager::RemoveLastCourse(){
    if(courseList.size() >0){
        courseList.pop_back();
    }else{
        cout <<"empty courses"<<endl;
    }
}

void CourseManager::PrintAllCourseInfo(){
    for(auto iter = courseList.begin();iter!=courseList.end();iter++){
        iter->PrintInfo();
    }
}

void CourseManager::PrintLongNameCourse(){
    int maxLen = 0;
    for(auto iter = courseList.begin();iter!=courseList.end();iter++){ 
        int temp = iter->GetName().size();
        maxLen = temp >maxLen ? temp : maxLen;
    }
    for(auto iter = courseList.begin();iter!=courseList.end();iter++){  
        if(iter->GetName().size() == maxLen){
            iter->PrintInfo();
        }
    }
}
void CourseManager::AddCourse(const string &name){
    courseList.push_back(Course(name));
}
void CourseManager::AddCourse(const Course &course){
    courseList.push_back(course);
}








