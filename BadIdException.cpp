#include "BadIdException.h"

BadIdException::BadIdException(int badIdValue) : std::exception() {
	this->badIdValue = badIdValue;
}


BadIdException::~BadIdException() {
}

int BadIdException::getBadIdValue() {
	return this->badIdValue;
}
