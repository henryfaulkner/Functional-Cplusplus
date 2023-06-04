#include <iostream>
#include <vector>
#include <user.h>
#include <fund.h>

Fund::Fund(std::string fundName, std::string ownerName) : fundName(fundName), ownerName(ownerName) {}

double Fund::viewFund()
{
    return balance;
}

void Fund::withdrawalFunds(double amount, User interactor)
{
    interactor.pockets += amount;
    balance -= amount;
}

void Fund::depositFunds(double amount, User interactor)
{
    interactor.pockets -= amount;
    balance += amount;
}

void Fund::addMember(User member)
{
    members.push_back(member);
}