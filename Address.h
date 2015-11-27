#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address {
public:
	Address();
	Address(string cp, string line1, string line2, string city);
	Address(const Address &source);
	~Address();

	string cp;
	string line1;
	string line2;
	string city;

	string getCp();
	string getLine1();
	string getLine2();
	string getCity();

	void setCp(string value);
	void setLine1(string value);
	void setLine2(string value);
	void setCity(string value);

	string toString();
};

#endif

