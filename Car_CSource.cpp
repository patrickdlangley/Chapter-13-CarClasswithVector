/*
Main Program using Class Car
*/

#include "Car_C.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Display_Car(Car_C& linc);

int main()
{
	const int THREE = 3, FIVE = 5, TWO = 2;
	int MODEL_YEAR = 1957;
	string MODEL = "Chevrolet Impala";
	int SPEED = 50;

	// example #1-create a single Car object
	Car_C automobile(MODEL_YEAR, MODEL, SPEED);

	cout << "\nThe initial speed is " << automobile.Get_Speed() << " miles per hour" << endl;

	for (int i = 0; i < FIVE; i++)
	{
		automobile.Accelerate();
		cout << "\nAs we accelerate, the current speed is " << automobile.Get_Speed() << " miles per hour";
	}
	cout << endl;
	for (int i = 0; i < THREE; i++)
	{
		automobile.Brake();
		cout << "\nAs we brake, the current speed is " << automobile.Get_Speed() << " miles per hour";
	}

	cout << "\nThe car's model year is    " << automobile.Get_Model_Year();
	cout << "\nThe car's make is          " << automobile.Get_Make();
	cout << "\nThe car's current speed is " << automobile.Get_Speed();

	// example #2-create a vector of Car_C objects
	int year;
	string make;
	int speed;

	vector<Car_C> vehicle;
	Car_C car;

	cout << endl;
	for (int v = 0; v < FIVE; v++)  // fill a Car_C object with data then insert the object into the vector
	{
		cout << "\nEnter car #" << v + 1 << "'s model year>";
		cin >> year;
		car.Set_Model_Year(year);

		cout << "\nEnter car #" << v + 1 << "'s make>";
		cin.ignore();
		getline(cin, make);
		car.Set_Make(make);

		cout << "\nEnter car #" << v + 1 << "'s speed>";
		cin >> speed;
		car.Set_Speed(speed);

		vehicle.push_back(car);
	}
	cout << endl;
	for (int c = 0; c < vehicle.size(); c++)
	{
		for (int t = 0; t < TWO; t++)
		{
			vehicle[c].Accelerate();
			cout << "\nAs we accelerate, the speed of car #" << c + 1 << " is " << vehicle[c].Get_Speed() << " miles per hour";
		}
		cout << endl;
	}

	// example #2a-create a vector of 5 Car_C objects by intializing the vector size (FIVE), which creates 5 objects
	
	vector<Car_C> vehicles (FIVE); // creates 5 Car_C objects in the vector using the default constructor

	// display first object in vector to show default values
	cout << endl << vehicles[0].Get_Model_Year() << " " << vehicles[0].Get_Make() << " " << vehicles[0].Get_Speed();

	cout << endl;
	for (int v = 0; v < FIVE; v++)
	{ 
		cout << "\nEnter car #" << v + 1 << "'s model year>";
		cin >> year;
		vehicles[v].Set_Model_Year(year);

		cout << "\nEnter car #" << v + 1 << "'s make>";
		cin.ignore();
		getline(cin, make);
		vehicles[v].Set_Make(make);

		cout << "\nEnter car #" << v + 1 << "'s speed>";
		cin >> speed;
		vehicles[v].Set_Speed(speed);		
	}
	cout << endl;
	for (int c = 0; c < vehicles.size(); c++)
	{
		for (int t = 0; t < TWO; t++)
		{
			vehicles[c].Accelerate();
			cout << "\nAs we accelerate, the speed of car #" << c + 1 << " is " << vehicles[c].Get_Speed() << " miles per hour";
		}
		cout << endl;
	}

	// example #3-dynamically allocate memory for an array of Car objects
	Car_C* car_p;
	car_p = new Car_C[THREE];
	car_p[0].Set_Speed(30);
	(*(car_p + 1)).Set_Speed(31);
	(*(car_p + 2)).Set_Speed(32);
	cout << endl;
	for (int i = 0; i < THREE; i++)
	{
		car_p[i].Accelerate();
		cout << "\nAs we accelerate each dynamic car, the current speed of car #" << i + 1 << " is " << car_p[i].Get_Speed() << " miles per hour";
	}
	delete[] car_p;

	//Example #4-pass object to function and return via reference variable
	Car_C lincoln(2000, "Continental", 5);
	Display_Car(lincoln);
	cout << "\n\nThe car's current speed is " << lincoln.Get_Speed();


	cout << endl << endl;
	system("pause");
	return (0);
}
void Display_Car(Car_C& linc)
{
	cout << "\n\nThe car's model year is    " << linc.Get_Model_Year();
	cout << "\nThe car's make is          " << linc.Get_Make();
	cout << "\nThe car's current speed is " << linc.Get_Speed();
	linc.Accelerate();
}
