CC = g++
CFLAGS = -std=c++11 -c
all:Course.o CourseManager.o CmdManager.o main.o
	$(CC) -std=c++11  $^ -o cmsys

Course.o:Course.cpp
	$(CC) $(CFLAGS) Course.cpp -o Course.o
CourseManager.o:CourseManager.cpp
	$(CC) $(CFLAGS) CourseManager.cpp -o CourseManager.o
CmdManager.o:CmdManager.cpp
	$(CC) $(CFLAGS) CmdManager.cpp -o CmdManager.o
main.o:main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o
clean:
	rm *.o 
