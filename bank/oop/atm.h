#ifndef ATM_H
#define ATM_H

#include <queue>
#include <user.h>
#include <request.h>

/*
    Assume the ATM is the system, rather than a solo machine
    Save the abstraction
*/
class ATM
{
public:
    std::map<std::string, Fund> funds;
    std::queue<Request> requests;
    Fund addFund(std::string name, User owner);
    void joinFund(std::string fundName, User member);
    void pushRequest(Request request);
};

#endif