#include "Contacts.h"
#include "MyList.h"

int main()
{
	//创建测试对象
	Contacts c1("qwe", "123", "sfd");
	Contacts c2("gjt", "253", "dxh");
	Contacts c3("ghd", "547", "Awe");
	Contacts c4("she", "57", "dbg");
	Contacts c5("herh", "26", "nsgf");
	Contacts c6("shrer", "546745347", "shej");
	
	MyList mylist;

	//增
	mylist.Add(c1);
	mylist.Add(c2);
	mylist.Add(c3);
	mylist.Add(c4);
	mylist.Add(c5);
	mylist.Add(c6);
	mylist.AllDisplay(); 

	//删
	mylist.DeleteByName("qwe");
	mylist.AllDisplay();
	mylist.DeleteByTelephone("253");
	//mylist.AllDisplay();

	//改
	mylist.ModifyTheDepartment("ghd", "dhg");
	mylist.ModifyTheTelephone("she", "990");
	mylist.ModifyTheDepartment("herh", "gheyurkgu");
	//mylist.AllDisplay();

	//查
	mylist.SearchByName("shrer");
	mylist.SearchByTelephone("26");

	mylist.AllDisplay();

	return 0;
}