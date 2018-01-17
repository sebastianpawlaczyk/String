#ifndef STRING_STRING_H
#define STRING_STRING_H

#include <iostream>
using std::ostream;
using std::istream;

class String {

private:

    char *str;
    int lenght;
    static const int LIMIT = 50;

public:

    String();
    String(const char *pattern);
    String(const String &s);
    ~String();

    int stringLenght() const { return lenght;};

    String &operator=(const String &s);
    String &operator=(const char *pattern);
    char operator[](int i);


    //friends functions
    friend ostream & operator<<(ostream &os, const String &st);
    friend istream & operator>>(istream &is, String &st);
    friend bool operator==(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator<(const String &st1, const String &st2);
};


#endif //STRING_STRING_H
