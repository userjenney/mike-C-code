#include <iostream>
#include "people.h"

People::People () 
{
	std::string name = "m";
	int age = 0;
}

People::People (std::stirng & m_name, int & m_age)
{
	std::string & m_name = name;
	int & m_age = age;
	std::cout << "please input a name\n";
	std::cin >> m_name;
	std::cout "next input a age\n";
	std::cin >> m_age;
}

void People::menu () 
{
	std::cout << "what do you want to do?"
		  << "1) make he be down\n";
	work ();
}

void People::work () 
{
       int i;

       while (i=100)
       {
	       i = 0;
	       i++;
	       std::cout << m_name 
	                 << "is a loser"
			 << std::endl;
       };

}

