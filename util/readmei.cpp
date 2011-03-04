/*
 *  libmei: Music Encoding Initiative
 *
 *  A simple example to demonstrate using libmei to read an MEI file.
 */

#include <iostream>
using std::cout;
using std::endl;

#include "libmei.h"

int main(int argc, char **argv) {
    Mei m = Mei(1);
    cout << m.incr() << endl;
}