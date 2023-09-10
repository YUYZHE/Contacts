#include "MyList.h"
#include <iostream>

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

MyList::MyList()
{
	mylist	 = NULL;
	size	 = 0;
	capacity = 0;
}

MyList::~MyList()
{
	delete[] mylist;
}

void MyList::Add(Contacts& obj)
{
    if (size >= capacity)
    {
        ExpandCapacity();
    }

    mylist[size++] = obj;
}

//获取下标后删除（从后往前移动）
void MyList::DeleteByName(string name)
{
    int index = GetIndexByName(name);
    if (index == -1)
        return;
    for (int i = index; i < size - 1; i++)
    {
        mylist[i] = mylist[i + 1];
    }
    size--;
}

void MyList::DeleteByTelephone(string telephone)
{
    int index = GetIndexByTelephone(telephone);
    if (index == -1)
        return;
    for (int i = index; i < size - 1; i++)
    {
        mylist[i] = mylist[i + 1];
    }
    size--;
}

//找到下标后修改
void MyList::ModifyTheName(string name, string modname)
{
    int index = GetIndexByName(name);
    if (index == -1)
        return;
    mylist[index].SetName(modname);
}

void MyList::ModifyTheTelephone(string name, string modtelephone)
{
    int index = GetIndexByName(name);
    if (index == -1)
        return;
    mylist[index].SetTelephone(modtelephone);
}

void MyList::ModifyTheDepartment(string name, string moddepartment)
{
    int index = GetIndexByName(name);
    if (index == -1)
        return;
    mylist[index].SetDepartment(moddepartment);
}

//遍历寻找
void MyList::SearchByName(string name)
{
    for (int i = 0; i < size; i++)
    {
        if (mylist[i].GetName() == name)
        {
            Display(i);
            return;
        }
    }
    cout << "None!";
}

void MyList::SearchByTelephone(string telephone)
{
    for (int i = 0; i < size; i++)
    {
        if (mylist[i].GetTelephone() == telephone)
        {
            Display(i);
        }
    }
    cout << "None!";
}

int MyList::GetLen()
{
	return size;
}

int MyList::GetIndexByName(string name)
{
    for (int i = 0; i < size; i++)
    {
        if (mylist[i].GetName() == name)
            return i;
    }
    return -1;
}

int MyList::GetIndexByTelephone(string telephone)
{
    for (int i = 0; i < size; i++)
    {
        if (mylist[i].GetTelephone() == telephone)
            return i;
    }
    return -1;
}

void MyList::Display(int index)
{
    cout << mylist[index].GetName() << endl;
    cout << mylist[index].GetTelephone() << endl;
    cout << mylist[index].GetDepartment() << endl;
}

void MyList::AllDisplay()
{
    for (int i = 0; i < size; i++)
    {
        cout << mylist[i].GetName() << endl;
        cout << mylist[i].GetTelephone() << endl;
        cout << mylist[i].GetDepartment() << endl << endl;
    }
}
