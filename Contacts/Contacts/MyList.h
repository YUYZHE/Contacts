#pragma once

#include <string>
#include "Contacts.h"

using namespace std;

class MyList
{
private:
	Contacts* mylist;		//ָ������
	int size;				//ʵ�ʳ���
	int capacity;			//����

	void ExpandCapacity();	//����
public:
	//����
	MyList();
	~MyList();

	//��
	void Add(Contacts& obj);

	//ɾ
	void DeleteByName(string);
	void DeleteByTelephone(string);

	//�ģ�Ĭ��ֻ��ͨ�����������޸ģ�
	void ModifyTheName(string, string);
	void ModifyTheTelephone(string, string);
	void ModifyTheDepartment(string, string);

	//��
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

