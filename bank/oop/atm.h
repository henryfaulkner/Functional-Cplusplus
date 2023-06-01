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
private:
    std::queue<Request> requests;

public:
    void pushRequest(Request request);
};

#endif