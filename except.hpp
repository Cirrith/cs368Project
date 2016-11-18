#ifndef EXCEPT_HPP
#define EXCEPT_HPP

/*/////////////////////////////////////////////////////////////////////////////
//
// FILENAME: except.hpp
//
// DESCRIPTION:
//  Provides exceptions for cs368 project
//
// PUBILC FUNCTIONS:
//  BadCordsExcept - Trying to access invalid position
//  BoardWonExcept - Trying to access board which is already won
//
// NOTES:
//
/////////////////////////////////////////////////////////////////////////////*/

#include <exception>

class BadCordsExcept : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Invalid Cordinates";
    }
};

class BoardWonExcept : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Board Won";
    }
};

#endif