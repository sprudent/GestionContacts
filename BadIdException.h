#ifndef BAD_ID_EXCEPTION
#define BAD_ID_EXCEPTION

#include <stdexcept>

class BadIdException : public std::exception {

private:
	int badIdValue;

public:
	BadIdException(int badIdValue);
	~BadIdException();
	int getBadIdValue();
};

#endif

