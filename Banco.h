/*
 * Banco.h
 *
 *  Created on: Feb 26, 2012
 *      Author: daniel
 */

#ifndef BANCO_H_
#define BANCO_H_
#include <iostream>
using namespace std;

class Banco {
public:
	Banco();
	virtual ~Banco();
    void aquecer(){
       cout << "Banco Aquecendo..."<<endl;
    }

};

#endif /* BANCO_H_ */
