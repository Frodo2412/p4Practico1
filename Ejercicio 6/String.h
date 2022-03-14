//
// Created by bruno on 3/11/2022.
//

#ifndef PRACTICO_1_STRING_H
#define PRACTICO_1_STRING_H

#include <iostream>
#include <string>

class String {
private:
    char *str;
public:
    String();
    String(char *);
    String(String &);
    ~String();

    String &operator=(String);
    String &operator=(char *);

    String operator+(String);
    String operator+(char *);

    char &operator[](int);

    friend std::ostream &operator<<(std::ostream &, const String &);
    std::istream &operator>>(std::istream &);

    int length();
};


#endif //PRACTICO_1_STRING_H
