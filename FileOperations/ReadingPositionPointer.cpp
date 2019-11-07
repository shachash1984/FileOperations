#include <iostream>
#include<fstream>
#include <string>

using namespace std;

//int main()
//{
//	/*
//		tellg - tell get - tell where is the reading pointer
//		seekg - seek get - set reading pointer at specified position
//
//		seekg(how_many_bytes_from_the_flag_place, flag);
//
//		possible flags;
//		ios::beg - (begin) set from the begin (default)
//		ios::end - set from the end
//		ios::cur - (current) set from current place
//	*/
//
//	fstream file;
//	file.open("sample.txt", ios::in | ios::binary);
//
//
//
//	if (file.is_open())
//	{
//
//		string buffer;
//
//		file.seekg(0, ios::end);
//		streampos sizeOfFile = file.tellg();
//		file.seekg(0);
//
//		do
//		{
//			file >> buffer;
//			cout << buffer << endl;
//		} while (!file.eof());
//
//		if (file.eof())
//		{
//			file.clear();
//			cout << file.tellg() << endl;
//
//
//			cout << "The size of the file: " << sizeOfFile << " bytes" << endl;
//		}
//	}
//	else
//		cout << "The file hasnt been opened properly\n";
//
//
//
//	return 0;
//}