#include <iostream>
#include <atm.cpp>
#include <fund.cpp>
#include <user.cpp>

int main()
{
    // I want to make an ATM
    // I want to make a bunch of users
    // Create them funds, even some shared funds
    // Concurrently, I want to make a bunch of requests from users to their fund
    ATM atm;

    User users[5];
    users[0] = User(std::string("henry faulkner"));
    users[1] = User(std::string("allison griese"));
    users[2] = User(std::string("tristan whitaker"));
    users[3] = User(std::string("rishi pandya"));
    users[4] = User(std::string("cum lizard"));

    Fund henryFund = atm.addFund("henryFund", users[0]);         // henry
    atm.joinFund("henryFund", users[1]);                         // allison
    Fund tristanFund = atm.addFund("tristanFund", users[2]);     // tristan
    atm.joinFund("tristanFund", users[0]);                       // henry
    atm.joinFund("tristanFund", users[3]);                       // rishi
    Fund cumLizardFund = atm.addFund("cumLizardFund", users[4]); // cum lizard

    henryFund.withdrawalFunds(1000000);
    tristanFund.withdrawalFunds
}