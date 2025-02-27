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




private:
	std::string name{}; 



};
#endif _PET_HPP_ 
