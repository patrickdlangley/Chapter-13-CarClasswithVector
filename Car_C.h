// Car Header file
#ifndef Car_C_h
#define Car_C_h

#include <string>
using namespace std;

class Car_C
{
private:
	int modelYear;
	string make;
	int speed;

public:
	Car_C();  // default Constructor
	Car_C(int, string, int);   //  Constructor #2
	int Get_Model_Year() const;
	void Set_Model_Year(int);
	string Get_Make() const;
	void Set_Make(string);
	int Get_Speed() const;
	void Set_Speed(int);

	void Accelerate();
	void Brake();
};
#endif
// end Car Header file

