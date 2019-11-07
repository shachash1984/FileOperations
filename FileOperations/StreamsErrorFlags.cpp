#include <iostream>
#include<fstream>
#include <string>

using namespace std;

//int main()
//{
//	/*
//		bad() - badbit(1) - returns true if there is an error, like writing to file which was opened only for reading
//		fail() - failbit(4) - returns true if we try to assign string to int (or any other illegal action)  while reading from file or when badbit situation happened
//
//		eof() - eofbit(2) - returns true if the file opened to read has reached it's end
//		good() - goodbit(0) -returns true if any of the above flags are false
//
//		rdstate() - Read State
//		clear() - clears the state
//	*/
//
//	fstream file;
//	file.open("sample.txt", ios::in);
//
//	
//
//	if (file.is_open())
//	{/*
//		file << "error text";
//		cout << file.bad();
//		file.clear();
//		string tmp;
//		file >> tmp;
//		cout << tmp;*/
//		
//		string buffer("");
//		
//
//		do
//		{
//			file >> buffer;
//			cout << buffer << endl;
//		} while (!file.eof());
//
//		cout << (file.rdstate() ^ ifstream::eofbit) << endl;
//
//		if (file.rdstate() ^ ifstream::eofbit == 0)
//			file.clear();
//
//		
//
//		if (file.fail())
//		{
//			cout << "file fail\n";
//		}
//		else if (file.good())
//		{
//			cout << "file good\n";
//		}
//	}
//	else
//		cout << "The file hasnt been opened properly\n";
//
//
//
//	return 0;
//}