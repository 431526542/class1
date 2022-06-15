#pragma once


class Person
{
	char* name;
	char* addr;

public:
	Person(const char* name,const char* addr);
	~Person();

	void printAddr();
	void changeAddr(const char* newAddr);
	void changeName(const char* newName);
};

