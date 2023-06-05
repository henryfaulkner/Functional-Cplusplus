#ifndef PERSON_H
#define PERSON_H

class Person
{
public:
    std::string name;
    std::string gender;
    Person();
    Person(std::string name, std::string gender);
    ~Person();
    Person *createPeople();
    Person *filter_female(Person *people);
    Person *name(Person *people);
};

#endif