#include <iostream>
using namespace std;

void result(int marks);
main(){
	int marks;
	cout<<"Enter your score: ";
	cin>>marks;
	result(marks);


}
void result(int marks){
	if(marks>50){
        cout<<"Pass";
}
	if(marks<=50){
	cout<<"Fail";

}
}