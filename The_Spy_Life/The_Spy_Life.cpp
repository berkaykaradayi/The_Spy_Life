#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;

void decode(char array[],int len);

int main()
{
	string str;

	cout << "Please enter a string" << bosluk;
	//cin >> str; it only takes 1 word at a time, but we need to take whole sentence. 
	   //To get get:

	getline(cin, str);

	const int length = str.length();

	// declaring character array (+1 for null terminator) 
	char* char_array = new char[length + 1];
	

	char_array = &str[0]; // converting string to char array for operation

	

	cout << bosluk << "Entered string: " << char_array << bosluk;

	cout << "Here is your output: ";
	decode(char_array,length);


	return 0;
}

void decode(char array[], int len)
{
	//int i = 0;
	bool flag = 0;
    //char* backup_arr = new char[len + 1];
	char temp;
	for (int i = 0; i < len/2; i++) // reversing the string
	{
		temp = array[i];
		array[i] = array[len-1-i];
		array[len-1 - i] = temp;
		
	  
		//cout << " HARF: " << array[i];
	}
	
	cout <<" Reversed string: " <<array<< bosluk;

}