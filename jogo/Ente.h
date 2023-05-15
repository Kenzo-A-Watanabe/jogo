#pragma once
#include<iostream>
class Ente
{
protected:
	int id;
public:
	Ente();
	~Ente();
	virtual void exe() = 0;
	void print();
};

