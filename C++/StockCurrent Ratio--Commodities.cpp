#include<iostream>
using std::cin;
using std::cout;
int main()
{
	float Overall_Amount_earned,DeductionfromOverallAmounttopool,
	Distributed_Amount,Mom_Amount,Sindhu_Amount,Teja_Amount;
	cout << "OverallAmountEarned:"; 
	cin>>Overall_Amount_earned;
	
	Distributed_Amount=Overall_Amount_earned/2;
	cout<<"Distributed_Amount"<<Distributed_Amount<<"\n";
	Mom_Amount=((Distributed_Amount*0.10)/2);
	
	 Sindhu_Amount=(Distributed_Amount/2)-Mom_Amount;
	 cout<<"Sindhu_Amount:"<<Sindhu_Amount<<"\n";
	 Teja_Amount=(Distributed_Amount/2)-Mom_Amount;
	 cout<<"Teja_Amount:"<<Teja_Amount<<"\n";
	 Mom_Amount=(Mom_Amount+((Overall_Amount_earned/2)*0.10));
	 cout<<"Mom_Amount:"<<Mom_Amount<<"\n";
	 cout<<"Final Amount Wich needs to Disperse:"<<Mom_Amount+Teja_Amount+Sindhu_Amount<<"\n\n";
	 cout<<"Percentage of Mom_Amount from Overall Amount:"<<(Mom_Amount/Overall_Amount_earned)*100<<"\n";
	 cout<<"Percentage of Teja_Amount from Overall Amount:"<<(Teja_Amount/Overall_Amount_earned)*100<<"\n";
	 cout<<"Percentage of Sindhu_Amount from Overall Amount:"<<(Sindhu_Amount/Overall_Amount_earned)*100<<"\n";
	 cout<<"Percentage of Final_Amount from Overall Amount:"<<((Mom_Amount+Teja_Amount+Sindhu_Amount)/Overall_Amount_earned)*100<<"\n";

	
	
}

