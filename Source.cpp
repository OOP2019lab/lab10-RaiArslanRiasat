#include"course.h"
#include"student.h"
void main()
{
	student *s1=new student("Anam", "11-1182");
	student *s2 = new student("Arslam", "18-1182");
	course *c = new course("CS","118");
	course *c2 = new course("EE", " 110");
	s1->addcourse(c);
	c2->addstudent1(s2);
	s1->dropcourse(c2);
	//cout << *s1;
}