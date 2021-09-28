/*
 * coder.cpp
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class source.
 *
 * You may have to change this file to fix build errors, and make
 * the unit tests pass.
 *
 * Usually source files are used to write an implementation of
 * global and member functions.
 *
 */

#include "coder.h"
/*
 * To make all unit tests pass you may try to puzzle out the ::encode() algorithm
 * and it should help you to write the decoding one. But there are other ways to
 * make them pass.
 *
 * Good luck!
 *
 */
#include "cstring"
#include <iostream>
Coder::Coder(const Coder &right) : m_buf(right.buf()), m_size(right.size()) {
//    if (this == &right) {
//        return *this;
//    }
    //this->m_size = right.size();
    this->m_buf = new char[this->m_size+1];
    this->m_buf[this->m_size] = '\0';
    strcpy(this->m_buf, right.buf());
    //return *this;
}
Coder& Coder::operator=(const Coder& right) {
    if (this == &right) {
        return *this;
    }
    this->m_size = right.size();
    this->m_buf = new char[this->m_size+1];
    this->m_buf[this->m_size] = '\0';
    strcpy(this->m_buf, right.buf());
    return *this;
}
void Coder::encode()
{
}

void Coder:: set( const char* bufnew, int size ){
    if(bufnew == 0){
        throw std::logic_error("Error");
    }
    else if(size <= 0 || (unsigned int)size == std::numeric_limits<unsigned int>::max()){
        throw std::logic_error("Error2");
    }
    else{
        m_size = size;
        m_buf = new char[size+1];
        m_buf[size] = '\0';
        strcpy(m_buf, bufnew);
    }
    //catch(std::logic_error){}

}

 char* Coder::buf() const{
    return m_buf;
}
int Coder::size() const{
    return m_size;
}
void Coder:: decode(){}
