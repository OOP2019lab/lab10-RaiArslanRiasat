#include <string>
using namespace std;
class course;
//#include "course.h" 

#ifndef STUDENT_H
#define STUDENT_H

class student
{
	string rollnmb;
	string  name;
	string username;
	course **c;
	int noofc;
	int maxnofc;
	void addcourse1(course *);
public:
	friend class course;
	void dropcourse(course *);
	void addcourse(course *);
	student operator=(const student &);
	student(string, string);
	friend ostream & operator<<(ostream &out, const student &s);
	string getname()
	{
		return name;
	}
	int getnoofc()
	{
		return noofc;
	}
};
#endif
