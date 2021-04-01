// Car class Implementation file
#include "Car_C.h"
#include <iostream>
#include <string>

using namespace std;

Car_C::Car_C() // default Constructor
{
	modelYear = 0;
	make = "";
	speed = 0;
}
Car_C::Car_C(int year, string mk, int sp)   //  Constructor #2
{
	modelYear = year;
	make = mk;
	speed = sp;
}
int Car_C::Get_Model_Year() const
{
	return (modelYear);
}
void Car_C::Set_Model_Year(int year)
{
	modelYear = year;
}
string Car_C::Get_Make() const
{
	return (make);
}
void Car_C::Set_Make(string mk)
{
	make = mk;
}
int Car_C::Get_Speed() const
{
	return (speed);
}
void Car_C::Set_Speed(int sp)
{
	speed = sp;
}
void Car_C::Accelerate()
{
	speed += 5;
}
void Car_C::Brake()
{
	speed -= 5;
}
// end Implementation file
