#include "String.h"
#include "cstring"

String::String() {

    str = new char[1];
    str[0] = '\0';
}

String::String(const char *pattern) {

    lenght = strlen(pattern);
    str = new char[lenght+1];
    strcpy(str,pattern);

}

String::String(const String &s) {

    lenght = strlen(s.str);
    str = new char[lenght+1];
    strcpy(str,s.str);
}

String::~String() {

    delete [] str;
}

String& String::operator=(const String &s) {

    if(this == &s) return *this;
    else{

        delete [] str;
        lenght = strlen(s.str);
        str = new char[lenght+1];
        strcpy(str,s.str);
        return *this;
    }
}

String& String::operator=(const char *pattern) {


        delete [] str;
        lenght = strlen(pattern);
        str = new char[lenght+1];
        strcpy(str,pattern);
        return *this;
}

char String::operator[](int i) {

    if(this->lenght > i){

        return str[i];
    }
    else std::cout<<"Error, bad index"<<std::endl;
}

ostream &operator<<(ostream &os, const String &st) {

    os<<st.str<<std::endl;
    return os;
}

istream& operator>>(istream &is, String &st) {

    char pom[String::LIMIT];
    is.get(pom,String::LIMIT);

    if(is){
        st = pom;
    }
    while(is && is.get() != '\n'){
        continue;
    }
    return is;
}

bool operator==(const String &st1, const String &st2) {

    return (strcmp(st1.str,st2.str)==0);
}

bool operator>(const String &st1, const String &st2) {

    if(strcmp(st1.str,st2.str)>0) return  true;
    else return false;
}

bool operator<(const String &st1, const String &st2) {

    if(strcmp(st1.str,st2.str)<0) return  true;
    else return false;
}