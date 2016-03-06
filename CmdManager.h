#ifndef CMSYS_CMDMANAGER_H
#define CMSYS_CMDMANAGER_H
#include "CourseManager.h"
#include "Cmd.h"

#include<map>
#include<istream>

class CmdManager{
private:
    CourseManager manager;
    map<CourseCmd,string>cmdMap;
public:
    CmdManager() = default;
    void Init();
    CourseManager &GetCourseManager(){
        return manager;
    };
    void PrintAllHelp();
    void PrintCmdHelp(const CourseCmd cmd) const;
    bool HandleCmd(const CourseCmd cmd);

};

#endif
