#include "student.h"
student::student(std::string rollno, std::string n)
{
	rollnmb = rollno;
	name = n;
	noofc = 0;
	maxnofc = 2;
}
ostream & operator<<(ostream &out, const student & s)
{
	unsigned int l = s.getnoofc;
	if (l == 0)
	{
		out << s.getname << "hasa no course now ";
		return out;
	}
	out << s.getname;
	for (unsigned int i = 0; i < l; i++)
		out << s.c[i]->getname();
	return out;
}
void student::addcourse(course * co)
{
	if (maxnofc < noofc&&noofc >= 0)
		c[noofc++] = co;
	//co->addstudent(this);
}
student student ::operator=(const student &s)
{
	rollnmb = s.rollnmb;
	name = s.name;
	maxnofc = s.maxnofc;
	noofc = s.noofc;
	for (int i = 0; i < noofc; i++)
		c[i] = s.c[i];
}
void student::addcourse1(course * cor)
{
	if (maxnofc < noofc&&noofc >= 0)
		c[noofc++] = cor;
}
void student::dropcourse(course * cor)
{
	for (int i = 0; i < noofc; i++)
	{
		if (c[i] == cor)
		{
			c[i] = nullptr;
			//cor->dropstudent(this);
			noofc--;
		}
	}
}