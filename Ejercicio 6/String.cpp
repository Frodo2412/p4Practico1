//
// Created by bruno on 3/11/2022.
//

#include "String.h"
#include <iostream>

// Constructors and Destructor
String::String() {
    str = new char[1];
    str[0] = '\0';
    length = 0;
}

String::String(const char *string) {
    int i = 0;
    while (string[i] != '\0')
        i++;
    length = i;
    str = new char[length + 1];
    for (int j = 0; j < length; j++)
        str[j] = string[j];
}

String::String(const String &string) {
    length = string.length;
    str = new char[length + 1];
    for (int i = 0; i < length; i++)
        str[i] = string.str[i];
}

String::~String() {
    delete[] str;
}

// Getters
char *String::getString() {
    return str;
}

// Overloaded Operators
String &String::operator=(const String &string) {
    if (this != &string) {
        delete[] str;
        length = string.length;
        str = new char[length + 1];
        for (int i = 0; i < length; i++)
            str[i] = string.str[i];
    }
    this->str = string.str;
}

String String::operator+(String &string) {
    String result;
    result.length = length + string.length;
    result.str = new char[result.length + 1];
    for (int i = 0; i < length; i++)
        result.str[i] = str[i];
    for (int i = length; i < result.length; i++)
        result.str[i] = string.str[i - length];
    result.str[result.length] = '\0';
    return result;
}

char &String::operator[](int index) {
    if (index < 0 || index >= length)
        throw std::out_of_range("Index out of range");
    return str[index];
}

std::ostream &operator<<(std::ostream &os, String &string) {
    os << string.getString();
    return os;
}

std::istream &operator>>(std::istream &is, String &string) {
    char aux[MAX_STRING_LENGTH];
    is.getline(aux, MAX_STRING_LENGTH);
    string = String(aux);
    return is;
}

int String::largo() {
    return length;
}
