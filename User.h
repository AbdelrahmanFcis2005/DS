#pragma once
#include <string>

class User
{
public:
	User();
	User(const std::string& name, const std::string& email);
	~User();
	std::string getName() const;
	std::string getEmail() const;
	void setName(const std::string& name);
	void setEmail(const std::string& email);
private:
	std::string name;
	std::string email;
};

