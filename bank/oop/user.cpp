#include <iostream>
#include <user.h>
#include <fund.h>

User::User() : {}
User::User(std::string name) : name(name) {}

std::string User::getName()
{
    return name;
}

void User::addFund(std::string fundName)
{
    Fund fund(fundName, name);
    this->joinFund(fund.name, name);
}

void User::joinFund(std::string fundName, std::string ownerName)
{

    funds.insert({
        fundName,
    })
}

void User::makeRequest(std::string fundKey, std::function<void()> callback)
{
}