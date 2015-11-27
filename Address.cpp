#include <string>
#include <sstream>

#include "Address.h"

Address::Address() {
	this->cp = this->line1 = this->line2 = this->city;
}
 
Address::Address(string cp, string line1, string line2, string city) {
	this->cp = cp;
	this->line1 = line1;
	this->line2 = line2;
	this->city = city;
}

Address::Address(const Address &source) {
	this->cp = source.cp;
	this->line1 = source.line1;
	this->line2 = source.line2;
	this->city = source.city;
}

Address::~Address() {
	
}

string Address::getCp() {
	return this->cp;
}

string Address::getLine1() {
	return this->line1;
}

string Address::getLine2() {
	return this->line2;
}

#include <iostream>

string Address::getCity() {
	return this->city;
}

void Address::setCp(string value) {
	this->cp = value;
}

void Address::setLine1(string value) {
	this->line1 = value;
}

void Address::setLine2(string value) {
	this->line2 = value;
}

void Address::setCity(string value) {
	this->city = value;
}

string Address::toString() {
	stringstream desc;

	desc << line1 << endl;
	desc << line2 << endl;
	desc << city << endl;
	desc << cp << endl;

	return desc.str();
}
