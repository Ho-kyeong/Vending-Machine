//........................................................

#ifndef Candy_H
#define Candy_H
//Greg Katz
//cs 203
//Barry Jones
//Assignment 3 
using namespace std;

class inventory;//forward declarations

class candy
{
	public:
	candy();
	string getName();
	double getPrice();
	int getAvailable();
	void setName(string name);
	void setPrice(double price);
	void setAvailable(int available);


	private:
	string name;
	double price;
	int available;
};

#endif