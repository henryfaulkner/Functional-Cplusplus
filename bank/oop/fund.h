#ifndef FUND_H
#define FUND_H

#include <queue>
#include <vector>
#include <user.h>

class Fund
{
public:
    int id;
    std::string fundName;
    std::string ownerName;
    std::vector<User> members;
    double balance;

    Fund(std::string fundName, std::string ownerName);
    double viewFund();
    void withdrawalFunds(double amount, User interactor);
    void depositFunds(double amount, User interactor);
    void addMember(User member);
};

#endif