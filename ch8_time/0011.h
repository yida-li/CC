#ifndef TIME_H
#define TIME_H // header guardians

class Time

{
public:
    explicit Time(int = 0, int = 0, int = 0);

    // cascaded because C++ programming allows calling multiple functions using a single object name in a single statement
    Time &setTime(int, int, int);
    Time &setH(int);
    Time &setM(int);
    Time &setS(int);

    unsigned int getHo() const;
    unsigned int getM() const;
    unsigned int getS() const;

    void printUniversal() const;
    void printStandard() const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif

/* straight from :: http://www.people.vcu.edu/~jsiebers/mcnpinfo/dcomment/manual/node9.html

The expression #ifdef Name evaluates to true in Name has been #defined. In this case (true), 
the input file lines are processed until a #elseif, #else, or #endif directive is encountered. 
The #elseif, #else, and #endif directives are valid only following a #ifdef directive.
 If the #ifdef directive evaluated to be true, t hen these directives (#elseif, #else, and #endif) 
stop processing of the input lines until a #endif directive is encounter. Thus, the code

*/