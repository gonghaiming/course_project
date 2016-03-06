!_TAG_FILE_FORMAT	2	/extended format; --format=1 will not append ;" to lines/
!_TAG_FILE_SORTED	1	/0=unsorted, 1=sorted, 2=foldcase/
!_TAG_PROGRAM_AUTHOR	Darren Hiebert	/dhiebert@users.sourceforge.net/
!_TAG_PROGRAM_NAME	Exuberant Ctags	//
!_TAG_PROGRAM_URL	http://ctags.sourceforge.net	/official site/
!_TAG_PROGRAM_VERSION	5.8	//
$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(){$\/;"	f	class:Course	signature:()$/;"	m	class:__anon5::__anon6	file:	access:private
$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(const Course &course){$\/;"	f	class:Course	signature:(const Course &course)$/;"	m	class:__anon5	file:	access:private
$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(const string &cname):Course(){$\/;"	f	class:Course	signature:(const string &cname)$/;"	m	class:__anon5::__anon6::__anon7	file:	access:private
$	cpp	/^Course::PrintInfo	Course.cpp	\/^void Course::PrintInfo(){$\/;"	f	class:Course	signature:()$/;"	m	class:__anon5::__anon6::__anon7::__anon8	file:	access:private
$	tags	/^Course	Course.h	\/^class Course {$\/;"	c$/;"	m	class:__anon12	file:	access:private
$	tags	/^Course::SetId	Course.h	\/^    inline SetId(int courseId){id = courseId};$\/;"	f	class:Course	access:public	signature:(int courseId)$/;"	m	class:__anon12::__anon13::__anon14	file:	access:private
$	tags	/^ProjectCourse::GetTag	Course.h	\/^    inline string GetTag(){$\/;"	f	class:ProjectCourse	access:public	signature:()$/;"	m	class:__anon12::__anon13::__anon14::__anon15::__anon16	file:	access:private
$	tags	/^SetName	Course.h	\/^    inline SetName(const string &newName){$\/;"	f	class:Course	access:public	signature:(const string &newName)$/;"	m	class:__anon12::__anon13::__anon14::__anon15::__anon16::__anon17	file:	access:private
CMSYS_COURSE_H	Course.h	2;"	d
Course	Course.cpp	/^Course::Course(){$/;"	f	class:Course	signature:()
Course	Course.cpp	/^Course::Course(const Course &course){$/;"	f	class:Course	signature:(const Course &course)
Course	Course.cpp	/^Course::Course(const string &cname):Course(){$/;"	f	class:Course	signature:(const string &cname)
Course	Course.h	/^    Course();$/;"	p	class:Course	access:public	signature:()
Course	Course.h	/^    Course(const Course &course);$/;"	p	class:Course	access:public	signature:(const Course &course)
Course	Course.h	/^    Course(const string &name);$/;"	p	class:Course	access:public	signature:(const string &name)
Course	Course.h	/^class Course {$/;"	c
Course	tags	/^Course	Course.h	\/^    Course ();$\/;"	p	class:Course	access:public	signature:()$/;"	p	file:	signature:()
Course::Course	Course.cpp	/^Course::Course(){$/;"	f	class:Course	signature:()
Course::Course	Course.cpp	/^Course::Course(const Course &course){$/;"	f	class:Course	signature:(const Course &course)
Course::Course	Course.cpp	/^Course::Course(const string &cname):Course(){$/;"	f	class:Course	signature:(const string &cname)
Course::Course	Course.h	/^    Course();$/;"	p	class:Course	access:public	signature:()
Course::Course	Course.h	/^    Course(const Course &course);$/;"	p	class:Course	access:public	signature:(const Course &course)
Course::Course	Course.h	/^    Course(const string &name);$/;"	p	class:Course	access:public	signature:(const string &name)
Course::GetId	Course.h	/^    inline int GetId(){return id;};$/;"	f	class:Course	access:public	signature:()
Course::GetName	Course.h	/^    inline string GetName(){return name;};$/;"	f	class:Course	access:public	signature:()
Course::PrintInfo	Course.cpp	/^void Course::PrintInfo(){$/;"	f	class:Course	signature:()
Course::PrintInfo	Course.h	/^    virtual void PrintInfo();$/;"	p	class:Course	access:public	signature:()
Course::SetId	Course.h	/^    inline void SetId(int courseId){id = courseId;};$/;"	f	class:Course	access:public	signature:(int courseId)
Course::SetName	Course.h	/^    inline void SetName(const string &newName){$/;"	f	class:Course	access:public	signature:(const string &newName)
Course::currentId	Course.cpp	/^int Course::currentId = 1;$/;"	m	class:Course	file:
Course::currentId	Course.h	/^    static int currentId;$/;"	m	class:Course	access:protected
Course::id	Course.h	/^    int id;$/;"	m	class:Course	access:protected
Course::name	Course.h	/^    string name;$/;"	m	class:Course	access:protected
Course::operator <<	Course.h	/^    friend  ostream & operator <<(ostream &out,Course &course);$/;"	p	class:Course	access:friend	signature:(ostream &out,Course &course)
Course::read	Course.h	/^    friend void read(istream &inputStream,Course &course);$/;"	p	class:Course	access:friend	signature:(istream &inputStream,Course &course)
Course::~Course	Course.h	/^    virtual ~Course ();$/;"	p	class:Course	access:public	signature:()
GetId	Course.h	/^    inline int GetId(){return id;};$/;"	f	class:Course	access:public	signature:()
GetName	Course.h	/^    inline string GetName(){return name;};$/;"	f	class:Course	access:public	signature:()
GetTag	Course.h	/^    inline string GetTag(){$/;"	f	class:ProjectCourse	access:public	signature:()
GetTime	Course.h	/^        inline int GetTime(){$/;"	f	class:JudgeCourse	access:public	signature:()
JudgeCourse	Course.h	/^class JudgeCourse:public Course{$/;"	c	inherits:Course
JudgeCourse::GetTime	Course.h	/^        inline int GetTime(){$/;"	f	class:JudgeCourse	access:public	signature:()
JudgeCourse::PrintInfo	Course.cpp	/^void JudgeCourse::PrintInfo(){$/;"	f	class:JudgeCourse	signature:()
JudgeCourse::PrintInfo	Course.h	/^        virtual void PrintInfo();$/;"	p	class:JudgeCourse	access:public	signature:()
JudgeCourse::SetTime	Course.h	/^        inline void SetTime(int newTime){$/;"	f	class:JudgeCourse	access:public	signature:(int newTime)
JudgeCourse::time	Course.h	/^        int time;$/;"	m	class:JudgeCourse	access:private
PrintInfo	Course.cpp	/^void Course::PrintInfo(){$/;"	f	class:Course	signature:()
PrintInfo	Course.cpp	/^void JudgeCourse::PrintInfo(){$/;"	f	class:JudgeCourse	signature:()
PrintInfo	Course.cpp	/^void ProjectCourse::PrintInfo(){$/;"	f	class:ProjectCourse	signature:()
PrintInfo	Course.h	/^        virtual void PrintInfo();$/;"	p	class:JudgeCourse	access:public	signature:()
PrintInfo	Course.h	/^    virtual void PrintInfo();$/;"	p	class:Course	access:public	signature:()
PrintInfo	Course.h	/^    virtual void PrintInfo();$/;"	p	class:ProjectCourse	access:public	signature:()
PrintInfo	cpp	/^PrintInfo	Course.cpp	\/^void ProjectCourse::PrintInfo(){$\/;"	f	class:ProjectCourse	signature:()$/;"	f	class:__anon5::__anon6::__anon7::__anon8::ProjectCourse	file:	access:private	signature:()
ProjectCourse	Course.h	/^class ProjectCourse:public Course{$/;"	c	inherits:Course
ProjectCourse::GetTag	Course.h	/^    inline string GetTag(){$/;"	f	class:ProjectCourse	access:public	signature:()
ProjectCourse::PrintInfo	Course.cpp	/^void ProjectCourse::PrintInfo(){$/;"	f	class:ProjectCourse	signature:()
ProjectCourse::PrintInfo	Course.h	/^    virtual void PrintInfo();$/;"	p	class:ProjectCourse	access:public	signature:()
ProjectCourse::SetTag	Course.h	/^    inline void SetTag(const string &courseTag){$/;"	f	class:ProjectCourse	access:public	signature:(const string &courseTag)
ProjectCourse::tag	Course.h	/^    string tag;$/;"	m	class:ProjectCourse	access:private
SetId	Course.h	/^    inline void SetId(int courseId){id = courseId;};$/;"	f	class:Course	access:public	signature:(int courseId)
SetName	Course.h	/^    inline void SetName(const string &newName){$/;"	f	class:Course	access:public	signature:(const string &newName)
SetTag	Course.h	/^    inline void SetTag(const string &courseTag){$/;"	f	class:ProjectCourse	access:public	signature:(const string &courseTag)
SetTime	Course.h	/^        inline void SetTime(int newTime){$/;"	f	class:JudgeCourse	access:public	signature:(int newTime)
__anon12::$	tags	/^Course	Course.h	\/^class Course {$\/;"	c$/;"	m	class:__anon12	file:	access:private
__anon12::__anon13::__anon14::$	tags	/^Course::SetId	Course.h	\/^    inline SetId(int courseId){id = courseId};$\/;"	f	class:Course	access:public	signature:(int courseId)$/;"	m	class:__anon12::__anon13::__anon14	file:	access:private
__anon12::__anon13::__anon14::__anon15::__anon16::$	tags	/^ProjectCourse::GetTag	Course.h	\/^    inline string GetTag(){$\/;"	f	class:ProjectCourse	access:public	signature:()$/;"	m	class:__anon12::__anon13::__anon14::__anon15::__anon16	file:	access:private
__anon12::__anon13::__anon14::__anon15::__anon16::__anon17::$	tags	/^SetName	Course.h	\/^    inline SetName(const string &newName){$\/;"	f	class:Course	access:public	signature:(const string &newName)$/;"	m	class:__anon12::__anon13::__anon14::__anon15::__anon16::__anon17	file:	access:private
__anon12::__anon13::__anon14::id	tags	/^Course::SetId	Course.h	\/^    inline SetId(int courseId){id = courseId};$\/;"	f	class:Course	access:public	signature:(int courseId)$/;"	m	class:__anon12::__anon13::__anon14	file:	access:private
__anon5::$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(const Course &course){$\/;"	f	class:Course	signature:(const Course &course)$/;"	m	class:__anon5	file:	access:private
__anon5::__anon6::$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(){$\/;"	f	class:Course	signature:()$/;"	m	class:__anon5::__anon6	file:	access:private
__anon5::__anon6::__anon7::$	cpp	/^Course::Course	Course.cpp	\/^Course::Course(const string &cname):Course(){$\/;"	f	class:Course	signature:(const string &cname)$/;"	m	class:__anon5::__anon6::__anon7	file:	access:private
__anon5::__anon6::__anon7::__anon8::$	cpp	/^Course::PrintInfo	Course.cpp	\/^void Course::PrintInfo(){$\/;"	f	class:Course	signature:()$/;"	m	class:__anon5::__anon6::__anon7::__anon8	file:	access:private
__anon5::__anon6::__anon7::__anon8::ProjectCourse::PrintInfo	cpp	/^PrintInfo	Course.cpp	\/^void ProjectCourse::PrintInfo(){$\/;"	f	class:ProjectCourse	signature:()$/;"	f	class:__anon5::__anon6::__anon7::__anon8::ProjectCourse	file:	access:private	signature:()
__anon5::__anon6::__anon7::__anon8::out	cpp	/^operator <<	Course.cpp	\/^ostream & operator <<(ostream &out,Course &course){$\/;"	f	signature:(ostream &out,Course &course)$/;"	m	class:__anon5::__anon6::__anon7::__anon8	file:	access:private
currentId	Course.cpp	/^int Course::currentId = 1;$/;"	m	class:Course	file:
currentId	Course.h	/^    static int currentId;$/;"	m	class:Course	access:protected
format	cpp	/^!_TAG_FILE_FORMAT	2	\/extended format; --format=1 will not append ;" to lines\/$/;"	v
format	tags	/^!_TAG_FILE_FORMAT	2	\/extended format; --format=1 will not append ;" to lines\/$/;"	v
id	Course.h	/^    int id;$/;"	m	class:Course	access:protected
id	tags	/^Course::SetId	Course.h	\/^    inline SetId(int courseId){id = courseId};$\/;"	f	class:Course	access:public	signature:(int courseId)$/;"	m	class:__anon12::__anon13::__anon14	file:	access:private
name	Course.h	/^    string name;$/;"	m	class:Course	access:protected
operator <<	Course.cpp	/^ostream & operator <<(ostream &out,Course &course){$/;"	f	signature:(ostream &out,Course &course)
operator <<	Course.h	/^    friend  ostream & operator <<(ostream &out,Course &course);$/;"	p	class:Course	access:friend	signature:(ostream &out,Course &course)
out	cpp	/^operator <<	Course.cpp	\/^ostream & operator <<(ostream &out,Course &course){$\/;"	f	signature:(ostream &out,Course &course)$/;"	m	class:__anon5::__anon6::__anon7::__anon8	file:	access:private
read	Course.h	/^    friend void read(istream &inputStream,Course &course);$/;"	p	class:Course	access:friend	signature:(istream &inputStream,Course &course)
tag	Course.h	/^    string tag;$/;"	m	class:ProjectCourse	access:private
time	Course.h	/^        int time;$/;"	m	class:JudgeCourse	access:private
~Course	Course.h	/^    virtual ~Course ();$/;"	p	class:Course	access:public	signature:()
