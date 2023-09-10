# Contacts

[TOC]

## 前提

**环境：**

**Windows 11**

**Visual Studio 2022**

**C++**

## 一、 需求分析

		+ **有一个通讯录，每个记录包含姓名、电话和单位名称。**
		+ **设计相应的学生顺序表需要对某个记录进行插入、修改和删除运算，实现相关算法。**

## 二、 设计

+ **通讯录类**
	- 学生信息

+ **容器类**
	- 增删改查……扩容

+ **测试函数**

## 三、 实现

### 1、 Contacts

**基本信息与get、set**

~~~C++
/*.h*/
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
~~~

`.cpp省略`

### 2、 MyList

**动态指针数组、增删改查等基本函数声明**

~~~C++
/*.h*/
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
~~~

**`.cpp`主要部分**

~~~C++
//扩容
void MyList::ExpandCapacity()
{
    int NewCapacity = (capacity == 0) ? 1 : capacity * 2;//二倍扩容
    Contacts* NewArray = new Contacts[NewCapacity];

    for (int i = 0; i < size; i++) 
    {
        NewArray[i] = mylist[i];
    }

    //复制过去
    delete[] mylist;
    mylist = NewArray;
    capacity = NewCapacity;
}
~~~

~~~C++
其余皆为基本遍历操作
~~~

### 3、 测试

~~~C++
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
	mylist.AllDisplay();

	//改
	mylist.ModifyTheDepartment("ghd", "dhg");
	mylist.ModifyTheTelephone("she", "990");
	mylist.ModifyTheDepartment("herh", "gheyurkgu");
	mylist.AllDisplay();

	//查
	mylist.SearchByName("shrer");
	mylist.SearchByTelephone("26");
	mylist.AllDisplay();

	return 0;
}
~~~

## 四、总结

**1、 借此重新熟悉了C++**

**2、 自定义了可扩容数组**

**3、 未解决警告：**

![image-20230910203948369](C:/Users/YU/AppData/Roaming/Typora/typora-user-images/image-20230910203948369.png)