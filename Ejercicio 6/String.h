//
// Created by bruno on 3/11/2022.
//

#ifndef PRACTICO_1_STRING_H
#define PRACTICO_1_STRING_H

#include <iostream>
#include <string>

const int MAX_STRING_LENGTH = 100;

class String {
private:
    char *str;
    int length;
public:
    String();
    String(const char *);
    String(const String &string);
    ~String();

    char *getString();

    String &operator=(const String &);
    String operator+(String &);
    char &operator[](int);

    int largo();
};

std::ostream &operator<<(std::ostream &, String &);
std::istream &operator>>(std::istream &, String &);


#endif //PRACTICO_1_STRING_H
