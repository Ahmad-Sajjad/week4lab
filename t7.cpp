#include <iostream>
using namespace std;

void odd(int num);
main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	odd(num);


}
void odd(int num){
	if(num%2==0){
        cout<<"Number "<<num<<" is even";
}
	if(num%2!=0){
	cout<<"Number "<<num<<" is odd";

}
}