#ifndef REQUEST_H
#define REQUEST_H

#include <iostream>
#include <functional>
#include <user.h>
#include <fund.h>
#include <request.h>

class Request
{
public:
    Request();
    Request sendRequest(std::function<void()> callback);
};

#endif