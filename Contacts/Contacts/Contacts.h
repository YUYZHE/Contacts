#pragma once

#include <string>

using namespace std;

class Contacts
{
private:
	//基本信息
	string name;
	string telephone;
	string department;
public:
	//构造、get、set
	Contacts();
	Contacts(string, string, string);

	string GetName();
	string GetTelephone();
	string GetDepartment();

	void SetName(string);
	void SetTelephone(string);
	void SetDepartment(string);
};

