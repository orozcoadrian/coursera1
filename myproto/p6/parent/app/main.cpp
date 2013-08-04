#include <iostream>
#include "person.pb.h"
#include "car.pb.h"
#include <google/protobuf/text_format.h>

int main()
{
    tutorial::Person person;
    tutorial::Car car;
    std::cout << "p5:" << std::endl;
    person.set_name("thename");
    std::string msgstr;
    google::protobuf::TextFormat::PrintToString(person, &msgstr);
    std::cout << msgstr;
    return 0;
}
