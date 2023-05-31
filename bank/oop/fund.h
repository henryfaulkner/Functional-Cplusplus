#ifndef FUND_H
#define FUND_H

#include <queue>
#include <user.h>

class Fund
{
private:
    double balance;

public:
    Fund(std::string fundName);
    double viewFund();
    void withdrawalFunds();
    void depositFunds();
};

#endif