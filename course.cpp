#include "student.h"
#include"course.h"
course::course(string cname, string cnmb)
{
	course_name = cname;
	course_number = cnmb;
	maxnoofs = 4;
	noofs = 0;
}
ostream & operator << (ostream & out, const course & c)
{
	unsigned int l = c.getnoofs;
	if (l == 0)
	{
		out << c.getname << "hasa no student now ";
		return out;
	}
	out << c.getname;
	for (unsigned int i = 0; i < l; i++)
		out << c.st[i]->getname();
	return out;
}

void course::addstudent(student *s)
{
	if (noofs < maxnoofs&&noofs >= 0)
	{
		st[noofs++] = s;
	}
}
void course::addstudent1(student *s)
{
	if (noofs < maxnoofs&&noofs >= 0)
	{
		st[noofs++] = s;
	}
	s->addcourse(this);
}
void course::dropstuents(student * s)
{
	for(int i=0;i<noofs;i++)
		if (this->st[i] != st[i])
		{
			if (st[i] == s)
			{
				st[i] = nullptr;
				s->dropcourse(this);
				noofs--;

			}
		}
	
}