#include <iostream>
#include<fstream>
#include <string>

using namespace std;

//int main()
//{
//	/*
//		tellp - tell put - tell where is the writing pointer
//		seekp - seekput - set writing pointer at specified position
//
//		seekp(how_many_bytes_from_the_flag_place, flag);
//
//		possible flags;
//		ios::beg - (begin) set from the begin (default)
//		ios::end - set from the end
//		ios::cur - (current) set from current place
//	*/
//
//	fstream file;
//	file.open("sample.txt", ios::out | ios::binary);
//
//
//
//	if (file.is_open())
//	{
//
//		string tmp = "text about nothing";
//		file << tmp;
//		cout << file.tellp() << endl;
//
//		file.seekp(0, ios::beg);
//		file << "@";
//	}
//	else
//		cout << "The file hasnt been opened properly\n";
//
//
//
//	return 0;
//}