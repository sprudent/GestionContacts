#include <sstream>
#include "Client.h"

Client::Client(): User() {
	this->society = "";
}

Client::Client(Client &source): User(source) {
	this->society = source.society;
}

string Client::getSociety() {
	return this->society;
}

string Client::toString() {
	stringstream desc;
	desc << User::toString();
	desc << endl;
	desc << "Society: " << this->society << endl;
	return desc.str();
}

void Client::setSociety(string value) {
	this->society = value;
}
