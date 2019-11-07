#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main()
{
	/*
		read(where to read, how many bytes to read);
	*/

	fstream file;
	file.open("sample.txt", ios::in | ios::ate);



	if (file.is_open())
	{
		
	}
	else
		cout << "The file hasnt been opened properly\n";



	return 0;
}