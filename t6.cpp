 #include <iostream>
using namespace std;

void PassorFail(int marks);
main(){
	int marks;
	cout<<"Enter your score: ";
	cin>>marks;
	result(marks);


}
void PassorFail(int marks){
	if(marks>50){
        cout<<"Pass";
}
	if(marks<=50){
	cout<<"Fail";

}
}