#include "User.h"
#include <iostream>
#include <string>

User::User() : name(""), email("") {}
User::User(const std::string& name, const std::string& email) : name(name), email(email) {}
User::~User() {}
std::string User::getName() const {
	return name;
}
std::string User::getEmail() const {
	return email;
}
void User::setName(const std::string& name) {
	this->name = name;
}
void User::setEmail(const std::string& email) {
	this->email = email;
}
//

