#include "Student.hpp"

void    Student::attendClass(Classroom* p_classroom)
{
	if (p_classroom && !getRoom())
	{
		setRoom(p_classroom);
		p_classroom->enter(this);
	}
}

void    Student::exitClass()
{
	if (getRoom())
		setRoom(NULL);
}

Course* Student::searchCourse(Course* p_course)
{
	for (size_t i = 0; i < _subscribedCourses.size(); ++i)
		if (_subscribedCourses[i] == p_course)
			return _subscribedCourses[i];

	return NULL;
}
