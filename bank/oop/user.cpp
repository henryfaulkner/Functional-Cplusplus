#include <iostream>
#include <user.h>
#include <fund.h>

User::User(std::string name) : name(name) {}
void User::addFund(std::string fundName)
{
    Fund fund(fundName);
}

void User::makeRequest(std::string fundKey, std::function<void()> callback)
{
}