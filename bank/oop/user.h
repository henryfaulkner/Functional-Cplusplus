#ifndef USER_H
#define USER_H

#include <iostream>
#include <map>
#include <fund.h>

class User
{
private:
    int id;
    std::string name;
    std::map<std::string, Fund> funds;

public:
    User();
    User(std::string name);
    void addFund(std::string name);
    void makeRequest(std::string fundKey, std::function<void()> callback);
};

#endif