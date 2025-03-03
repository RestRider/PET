#include "Pet.h"


void Pet::SetName(std::string_view name)
{
	if (name.size() < 3) {
		throw std::invalid_argument("\nслишком короткий\n");
	}
	this->name = name;
}

std::string Pet::GetName() const
{
	return name;
}

void Pet::SetAet(double SetAet)
{
	this->aet = aet;
}

double Pet::GetAet() const
{
	return aet;
}

void Pet::SetOld(double SetOld)
{
	this->old = old;
}

double Pet::GetOld() const
{
	return old;
}
