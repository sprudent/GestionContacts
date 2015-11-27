#ifndef GESTION_CONTACT_H
#define GESTION_CONTACT_H

#include <iostream>
#include "User.h"
#include "Client.h"
#include "BadIdException.h"

using namespace std;

int main() {
	User *user1 = new User;
	User *user2 = new Client;

	Address *add1 = new Address("01210", "129 rue de Primeveres", "Residence 3", "Ornex");
	Address *add2 = new Address("34090", "1 impasse de la combette", "Bat 1", "Ornex");
	
	user1->setFirstname("Jean");
	user1->setLastname("RENO");
	user1->getAddresses()->push_back(add1);
	
	try {
		user2->setId(-1);
	} catch(BadIdException *e) {
		cout << "Id \"" << e->getBadIdValue() << "\" is invalid" << endl;
		cout << endl;
		cout << "------------" << endl;
	}

	user2->setFirstname("toto");
	user2->setLastname("TITI");
	static_cast<Client  *>(user2)->setSociety("Osmozis");
	user2->getAddresses()->push_back(add1);
	user2->getAddresses()->push_back(add2);

	cout << user1->toString();
	cout << "------------" << endl;
	cout << user2->toString();
	cout << "------------" << endl;
	cout << endl;
	
	string exitChar = "r";
	while (exitChar != "q") {
		cout << "Press \'q\' to quit" << endl;
		cin >> exitChar; 
	}

	delete user1, user2;
	return 0;
}

class GestionContacts {
public:
	GestionContacts();
	~GestionContacts();
};

#endif
