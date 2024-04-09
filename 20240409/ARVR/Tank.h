#pragma once
#include "Unit.h"

class Tank : public Unit
{
protected:
	const char* name;
	int hp;
	int mp;
	int atk;
	bool die;
public:
	// ¹ÙÀÎµù?
	virtual void attack();

	Tank();
	~Tank();
};

