#include "Example.h"
#include <iostream>
#include <string>


class Example
{


	// Field member to Example class - unique to all Example objects
	std::string name;


public: // make sure the p on public is lower case, this is a case keyword as is most if not all keywords

	// Default constructor - shares the name of the class and has no paramters

	Example()
	{
		std::cout << "example object made" << std::endl;
		name = "Bob";
		std::cout << "name: " << name << std::endl;

		// local variable to the Example default constructor
		std::string name = "steve";

		std::cout << name << std::endl;

	}

	void Greeting()
	{
		std::cout << "Hey, my name is, " << name << std::endl; //bob
	}

};
