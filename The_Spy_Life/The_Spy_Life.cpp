#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;

void decode(char char_array[]);

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
	char* backup_arr = new char[length + 1];

	char_array = &str[0]; // converting string to char array for operation

	backup_arr = char_array;

	cout << bosluk << "Entered string: " << char_array << bosluk;

	cout << "Here is your output: ";
	decode(char_array);


	return 0;
}

void decode(char char_array[])
{
	int i = 0;
	bool flag = 0;




}