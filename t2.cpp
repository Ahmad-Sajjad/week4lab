#include <iostream>
using namespace std;
void inchesToFeet(float measurement);
main(){
	float measurement;
	cout<<"Enter the measurement in inches: ";
	cin>>measurement;
	feet(measurement);
}
void inchesToFeet(float measurement)
	{
	float tofeet;
	tofeet = measurement/12;
	cout<<"Equivalent in feet: "<<tofeet;
	}

