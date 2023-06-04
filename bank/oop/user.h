#ifndef USER_H
#define USER_H

#include <iostream>
#include <map>
#include <fund.h>

class User
{
public:
    int id;
    std::string name;
    double pockets;

    User();
    User(std::string name);
    void makeRequest(std::string fundKey, std::function<void()> callback);
};

#endif