#include <iostream>
using namespace std;
void fuel(float distance);

main(){

float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}

void fuel(float distance)
{
float fuel_needed;
fuel_needed = distance * 10;
cout<<"Fuel needed: "<<fuel_needed;
}