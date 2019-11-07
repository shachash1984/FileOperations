#include <iostream>
#include<fstream>
#include <string>

using namespace std;

//int main()
//{
//	/*
//		getline(where to store the extracted chars, how many chars should be taken, delimiter) - extracts seperators and deletes them
//		get(where to store the extracted chars, how many chars should be taken, delimiter) - DOESNT extracts seperators and deletes them
//		get() - gets one char and returns it
//		ignore(how_many_chars_to_extract AND TO IGNORE THEM, seperator) - extracts chars
//	*/
//
//	fstream file;
//	file.open("sample.txt", ios::in | ios::binary);
//
//
//
//	if (file.is_open())
//	{
//		char first, second;
//		char buffer[100];
//		/*while (file.getline(buffer, 100))
//		{
//			cout << buffer << endl;
//		}*/
//		/*while (file.get(buffer, 100, '\n'))
//		{
//			file.ignore(1);
//			cout << buffer << endl;
//		}*/
//		do
//		{
//			first = file.get();
//			file.ignore(40, ' ');
//			second = file.get();
//			file.ignore(40, '\n');
//
//			cout << first << second << endl;
//		} while (!file.eof());
//		
//		
//	}
//	else
//		cout << "The file hasnt been opened properly\n";
//
//
//
//	return 0;
//}