#ifndef UNTITLED_PHONE_H
#define UNTITLED_PHONE_H

#include <string>

using namespace std;

enum TypePhone {
    Mobile, Work, Home
};

string TypePhoneToString(TypePhone type)
{
    switch (type) {
        case Mobile:
            return "мобильный";
        case Work:
            return "рабочий";
        case Home:
            return "домашний";
    }
}

struct Phone {
    string number;
    TypePhoneToString(type);
};

#endif //UNTITLED_PHONE_H
