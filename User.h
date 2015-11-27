#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Address.h"

using namespace std;

class User {

private:
	int id;
	string firstname, lastname;
	string mail;
	vector<Address *>  *addresses;

public: 
	User();
	User(const User &user);
	~User();
 
	int getId();
	string getFirstname();
	string getLastname();
	string getMail();
	string getCivility();
	vector<Address *> * getAddresses();

	void setId(int value);
	void setFirstname(string value);
	void setLastname(string value);
	void setMail(string value);

	virtual string toString();
};

#endif
