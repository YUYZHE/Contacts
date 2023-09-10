#include "Contacts.h"

Contacts::Contacts()
{
	name		= "无效！";
	telephone	= "无效！";
	department	= "无效！";
}

Contacts::Contacts(string name, string telephone, string department)
{
	this->name		 = name;
	this->telephone	 = telephone;
	this->department = department;
}

string Contacts::GetName()
{
	return name;
}

string Contacts::GetTelephone()
{
	return telephone;
}

string Contacts::GetDepartment()
{
	return department;
}

void Contacts::SetName(string name)
{
	this->name = name;
}

void Contacts::SetTelephone(string telephone)
{
	this->telephone = telephone;
}

void Contacts::SetDepartment(string department)
{
	this->department = department;
}
