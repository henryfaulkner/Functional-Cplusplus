#include <iostream>
#include <queue>
#include <atm.h>
#include <user.h>
#include <request.h>

Fund ATM::addFund(std::string fundName, User owner)
{
    Fund fund(fundName, owner.name);
    this->joinFund(fund.fundName, owner.name);
    return fund;
}

void ATM::joinFund(std::string fundName, User member)
{
    Fund fund = funds[fundName];
    fund.addMember(member);
}

void ATM::pushRequest(Request request)
{
}