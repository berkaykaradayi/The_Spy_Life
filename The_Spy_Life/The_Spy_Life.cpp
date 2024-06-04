#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;

void reverse(char array[],int len);

void decode(char reveresed_array[], int boyut);

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

	reverse(char_array,length);


	return 0;
}

void reverse(char array[], int len)
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


	decode(array,len); //sending reversed string to function to decode op.

}

void decode(char reveresed_array[], int boyut) // This function removes symbols and numerical values and obtains a clean string.
{
	int k = 0;
	
	cout << "Here is your output: ";
	while (reveresed_array[k] !='\0')
	{
		if (isalpha(reveresed_array[k]) )
		{
			cout << reveresed_array[k];
			k++;
		}
		else if (reveresed_array[k] != ' ' && !(isalpha(reveresed_array[k])) )
		{			
			k++;
		}
		else
		{
			cout <<" ";
			k++;
		}
		
	}

}