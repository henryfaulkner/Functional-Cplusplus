#ifndef ATM_H
#define ATM_H

#include <queue>
#include <user.h>
#include <request.h>

class ATM
{
private:
    std::queue<Request> requests;

public:
    double viewFund();
    void withdrawalFunds();
    void depositFunds();
};

#endif