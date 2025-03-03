#ifndef _PET_HPP_
#define _PET_HPP_
#include<iostream>
#include <string>
#include <string_view>
#include <format>
class Pet
{
public:
	  


	void SetName(std::string_view name);
	std::string GetName() const;

	void SetAet(double SetAet);
	double GetAet() const;

	void SetOld(double SetOld);
	double GetOld() const;

private:
	std::string name{};
	double old = 0;
	double aet = 100;



};
#endif _PET_HPP_ 
