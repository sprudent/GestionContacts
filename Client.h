#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "User.h"
class Client : public User {
	private:
		string society;
	public:
		Client();
		Client(Client &source);
 

		string getSociety();
		void setSociety(string value);

		virtual string toString();
};

#endif
