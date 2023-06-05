#include <person.h>
#include <ranges>

int main()
{
    Person personConstructor = Person();
    Person *people = personConstructor.createPeople();

    Person *femalePeople = views::filter(people, personConstructor.filter_female);
}