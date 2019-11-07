#include <iostream>
#include<fstream>

using namespace std;

//int main()
//{
//	fstream file;
//	file.open("sample.txt", ios::out | ios::ate | ios::in);
//
//	/*
//		ios::in - INPUT READING
//		ios::out OUTPUT _WRITE TO FILE, if there is no file then create it, if there is a file then truncate it UNLESS IT occurs with ios::in
//		ios::trunc - TRUNCATE - truncating (cutting everything inside)
//		ios::ate - At The End - sets pointer at the end of file - the place of the ptr can be changed. it's possible to read and write in that mode
//		ios::app - append - not possible to remove content, nor adding something in another place other than end of file
//		ios::binary - opens the file as a binary file
//	*/
//
//	/*
//		DEFAULT MODE (FLAGS)
//		fstream - ios::out | ios::in
//		ifstream - ios::in
//		ofstream - ios::out
//	*/
//
//	if (file.is_open())
//	{
//		file << "sample text\n";
//		file << "sample text\n";
//	}
//	else
//		cout << "The file hasnt been opened properly\n";
//
//
//
//	return 0;
//}