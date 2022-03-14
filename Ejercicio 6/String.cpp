//
// Created by bruno on 3/11/2022.
//

#include "String.h"
#include <bits/stdc++.h>
#include <iostream>

String::String() {
    this->str = nullptr;
}

String::String(char *string) {
    this->str = string;
}

String::String(String &string) {
    this->str = string.str;
}

String &String::operator=(String string) {
    this->str = string.str;
}

String &String::operator=(char *string) {
    this->str = string;
}

String String::operator+(String string) {
    String result;
    result.str = strcat(this->str, string.str);
    return result;
}

String String::operator+(char *string) {
    String result;
    result.str = strcat(this->str, string);
    return result;
}

char &String::operator[](int index) {
    int i = 0;
    while (this->str[i] != '\0' && i < index) {
        i++;
    }
    if (i == index) {
        return this->str[i];
    } else {
        throw std::out_of_range("Index out of range");
    }
}

std::ostream &operator<<(std::ostream &os, const String &string) {
    os << string.str;
    return os;
}

std::istream &String::operator>>(std::istream &is) {
    char *aux = new char[100];
    is >> aux;
    this->str = aux;
    return is;
}

String::~String() {
    delete[] this->str;
    delete this;
}

