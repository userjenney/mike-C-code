#ifndef PEOPLE_H_
#define PEOPLE_H_

class People 
{
           :
               std::string name;
	       int age;
	       
     public:
	       People ();
	       People (std::string & m_name, int & m_age);
	       ~People ();
               void menu ();
	       void work ();
}

