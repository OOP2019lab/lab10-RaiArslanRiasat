#include<string>
using namespace std;
//#include"student.h"
class student;
#ifndef COURSE_H
#define COURSE_H

class course
{
	string  course_name;
	string course_number;
	student **st;
	int noofs;
	int maxnoofs;
	void addstudent(student *);
public:
	void dropstuents(student *);
	void addstudent1(student *);
	course(string, string);
	friend ostream & operator<<(ostream &out, const course &co);
	friend class student;
	string getname()
	{
		return course_name;
	}
	int getnoofs()
	{
		return noofs;
	}
};
#endif