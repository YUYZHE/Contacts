#pragma once

#include <string>
#include "Contacts.h"

using namespace std;

class MyList
{
private:
	Contacts* mylist;		//指针数组
	int size;				//实际长度
	int capacity;			//容量

	void ExpandCapacity();	//扩容
public:
	//构造
	MyList();
	~MyList();

	//增
	void Add(Contacts& obj);

	//删
	void DeleteByName(string);
	void DeleteByTelephone(string);

	//改（默认只能通过姓名进行修改）
	void ModifyTheName(string, string);
	void ModifyTheTelephone(string, string);
	void ModifyTheDepartment(string, string);

	//查
	void SearchByName(string);
	void SearchByTelephone(string);

	//get
	int GetLen();
	int GetIndexByName(string);
	int GetIndexByTelephone(string);

	//display
	void Display(int);
	void AllDisplay();
};

