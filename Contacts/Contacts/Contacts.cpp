#include "Contacts.h"

Contacts::Contacts()
{
	name		= "��Ч��";
	telephone	= "��Ч��";
	department	= "��Ч��";
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
