#ifndef FUND_H
#define FUND_H

#include <queue>
#include <user.h>

class Fund
{
private:
    int id;
    std::string fundName;
    std::string ownerName;
    double balance;

public:
    Fund(std::string fundName, std::string ownerName);
    double viewFund();
    void withdrawalFunds();
    void depositFunds();
};

#endif