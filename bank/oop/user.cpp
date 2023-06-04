#include <iostream>
#include <user.h>
#include <fund.h>

User::User() {}
User::User(std::string name) : name(name) {}

void User::makeRequest(std::string fundKey, std::function<void()> callback)
{
}
