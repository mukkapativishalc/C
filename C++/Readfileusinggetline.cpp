#include<iostream>
#include<fstream>
#include<string>
int main(){
	std::ifstream myfile("shopping_list.txt");;
	std::string Lines;
	if(myfile.is_open()){
		while(myfile){
			std::getline(myfile,Lines);//here the myfile is an Input file or standard input stream and Lines stores the data
			std::cout <<Lines<< '\n';
			std::cout << Lines << ": " << myfile.tellg() << '\n';
		}
	}
	else {
std::cout << "Couldn't open file\n";
}
return 0;
	
}
