#include "CmdManager.h"
#include<iostream>

#include<string>
#include<utility>
using namespace std;
void CmdManager::Init(){
    manager.AddCourse("Linux");
    manager.AddCourse("NodeJs");
    manager.AddCourse("C++");
    manager.AddCourse("Spark");
    manager.AddCourse("Hadoop");
    manager.AddCourse("ruby");
    manager.AddCourse("java");
    cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintHelp,"Help Info"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintCourses,"print all Courses"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintCourseNum,"print total course numbers"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintLongName,"print the longest course name"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_RemoveLastCourse,"remove last courses"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_AddCourse,"Add course"));
    cmdMap.insert(pair<CourseCmd,string>(Cmd_Exit,"Exit"));
}
void CmdManager::PrintAllHelp(){
    cout << "Cmd List:" << endl;
    for(auto iter = cmdMap.begin();iter!=cmdMap.end();iter++){
        cout <<iter->first << " : " <<iter->second<<endl;
    }

}
void CmdManager::PrintCmdHelp(const CourseCmd cmd) const{
    auto iter = cmdMap.find(cmd);
    if(iter!=cmdMap.end()){
        cout <<iter->first << " : " <<iter->second<<endl;

    }else{
        cout <<"Not found the command"<<endl;
    }

}
bool CmdManager::HandleCmd(const CourseCmd cmd){
    auto iter = cmdMap.find(cmd);
    if(iter == cmdMap.end()){
        cout << "not found"<<endl;
        return true;
    }
    switch(cmd){
        case Cmd_PrintHelp: PrintAllHelp();break;
        case Cmd_PrintCourses:manager.PrintAllCourseInfo();break;
        case Cmd_PrintCourseNum: cout << manager.GetCourseNum()<<endl;break;
        case Cmd_PrintLongName:manager.PrintLongNameCourse();break;
    	case Cmd_RemoveLastCourse: manager.RemoveLastCourse();break;
   	    case Cmd_Exit: return false;break;
		
    }
    return true;
}


