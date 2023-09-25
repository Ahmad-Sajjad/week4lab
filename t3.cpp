#include <iostream>
using namespace std;
void howManyStickers( int length);

main(){
	int length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>length;
	sticker(length);
	
}

void howManyStickers(int length)
{
	int sticker_needed;
	sticker_needed = length * length * 6;
	cout<<"Number of stickers needed: "<<sticker_needed;
}