#include<iostream>
#include<string>
#include<fstream>
int main()
{
	std::ifstream myfile("shopping_list.txt");
	std::string mystring;
	if(myfile.is_open())
{
		char mychar;
	while(myfile){
		mychar=myfile.get();
		std::cout<<mychar;
		std::cout << ": " << myfile.tellg() << ", " ;
	}}
}
