#include "Pet.h"


void Pet::SetName(std::string_view name)
{
	if (name.size() < 3) {
		throw std::invalid_argument("\n������� ��������\n");
	}
	this->name = name;
}

std::string Pet::GetName() const
{
	return name;
}
