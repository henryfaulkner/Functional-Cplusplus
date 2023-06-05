#include <person.h>
#include <iostream>

Person::Person(std::string name, std::string gender)
{
    Person::name = name;
    Person::gender = gender;
}

Person::~Person()
{
    std::cout << "Person destructor called." << std::endl;
}

Person *Person::createPeople()
{
    Person *people = new Person[6];
    people[0] = Person("henry", "male");
    people[1] = Person("tristan", "male");
    people[2] = Person("rishi", "male");
    people[3] = Person("allison", "female");
    people[4] = Person("ntasha", "female");
    people[5] = Person("alyson", "female");
    return people;
}