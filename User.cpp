#include <string>
#include <sstream>

#include "User.h"
#include "BadIdException.h"

User::User() {
	this->id = 0;
	this->firstname = this->lastname = this->mail = "";
	this->addresses = new vector<Address *>();
}

User::~User() {
	delete this->addresses;
}

User::User(const User &source) {
	this->id = source.id;
	this->firstname = source.firstname;
	this->lastname = source.lastname;
	this->mail = source.mail;

	this->addresses = new vector<Address *>();
	for (const auto &address : *source.addresses) {
		this->addresses->push_back(new Address(*address));
	}
}

int User::getId() {
	return this->id;
}

string User::getFirstname() {
	return this->firstname;
}

string User::getLastname() {
	return this->lastname;
}

string User::getCivility() {
	return this->firstname + " " + this->lastname;
}

string User::getMail() {
	return this->mail;
}

void User::setId(int value) {
	if (value < 0) {
		throw new BadIdException(value);
	} else {
		this->id = value;
	}
}

void User::setFirstname(string value) {
	this->firstname = value;
}

void User::setLastname(string value) {
	this->lastname = value;
}

void User::setMail(string value) {
	mail = value;
}

vector<Address *> * User::getAddresses() {
	return this->addresses;
}

string User::toString() {  
	stringstream desc;

	desc << "Civility: " << this->getCivility() << endl;
	desc << "Addresses:" << endl;
	desc << endl;

	for (const auto &address : *this->addresses) {
		desc << "* " << address->toString() << endl;
	}

	return desc.str();
}

