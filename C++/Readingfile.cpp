#include<iostream>
#include<fstream>
#include<string>
int main()
{
	std::ifstream myfile("shopping_list.txt");
	std::string mystring;
	if(myfile.is_open())
	while(myfile)
	{
		myfile >> mystring; // pipe file's content into stream
		std::cout << mystring; // pipe stream's content to standard output
	}
}
