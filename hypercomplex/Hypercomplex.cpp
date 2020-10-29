// Copyright 2020 <Maciej Bak>
/*
###############################################################################
#
#   Hypercomplex library: implementation file
#
#   AUTHOR: Maciej_Bak
#   AFFILIATION: Swiss_Institute_of_Bioinformatics
#   CONTACT: wsciekly.maciek@gmail.com
#   CREATED: 22-10-2020
#   LICENSE: MIT
#
###############################################################################
*/

#include <cstdlib>
#include <cassert>
#include "Hypercomplex.h" // NOLINT

// Hypercomplex main constructor
Hypercomplex::Hypercomplex(unsigned int arg_d, float* arg_arr) {
    d = arg_d;
    arr = new float[arg_d];
    for (unsigned int i=0; i < arg_d; i++) {
        arr[i] = arg_arr[i];
    }
}

// Hypercomplex copy constructor
Hypercomplex::Hypercomplex(const Hypercomplex& H) {
    d = H.d;
    arr = new float[H.d];
    for (unsigned int i=0; i < H.d; i++) {
        arr[i] = H.arr[i];
    }
}

// Hypercomplex destructor
Hypercomplex::~Hypercomplex() {
    delete[] arr;
}

// ~ operator
Hypercomplex Hypercomplex::operator~ () const {
    float *temparr = new float[d];
    temparr[0] = arr[0];
    for (unsigned int i=1; i < d; i++) {
        temparr[i] = -arr[i];
    }
    Hypercomplex H = Hypercomplex(d, temparr);
    delete[] temparr;
    return H;
}

// - unary operator
Hypercomplex Hypercomplex::operator- () const {
    float *temparr = new float[d];
    for (unsigned int i=0; i < d; i++) {
        temparr[i] = -arr[i];
    }
    Hypercomplex H = Hypercomplex(d, temparr);
    delete[] temparr;
    return H;
}

Hypercomplex& Hypercomplex::operator= (const Hypercomplex &H) {
    // self-assignment guard
    if (this == &H) return *this;
    // reassign
    d = H.d;
    for (unsigned int i=0; i < d; i++) {
        arr[i] = H.arr[i];
    }
    // return the existing object so we can chain this operator
    return *this;
}

// overloaded == operator
bool Hypercomplex::operator ==(const Hypercomplex& H) {
    if (d != H.d) {
        return false;
    }
    for (unsigned int i=0; i < d; i++) {
        if (arr[i] != H.arr[i]) {
            return false;
        }
    }
    return true;
}

// overloaded != operator
bool Hypercomplex::operator !=(const Hypercomplex& H) {
    if (d != H.d) {
        return true;
    }
    for (unsigned int i=0; i < d; i++) {
        if (arr[i] != H.arr[i]) {
            return true;
        }
    }
    return false;
}

// overloaded [] operator
float& Hypercomplex::operator[](unsigned int i) {
    assert(0 <= i && i < d);
    return arr[i];
}

// overloaded [] operator
const float& Hypercomplex::operator[](unsigned int i) const {
    assert(0 <= i && i < d);
    return arr[i];
}