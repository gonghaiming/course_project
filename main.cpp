
#include "CmdManager.h"

#include<iostream>

int main(int argc, const char *argv[])
{
    CmdManager cmdManager;
    cmdManager.Init();
    cmdManager.PrintAllHelp();
    int cmd;
    cout << "New Command: ";
    while(cin >>cmd){
        if(cin.good()){
            if(!cmdManager.HandleCmd(CourseCmd(cmd))){
                cout << "Good bye" <<endl;
                break;
            }
            
        }else{
            cout <<"input not allow,you are only allow number,eg 1"<<endl;
        }
        cmdManager.PrintAllHelp();
        cout <<"New Command :";
    }
    return -1;
}

