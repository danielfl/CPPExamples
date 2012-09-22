/*
 * Ferrari.h
 *
 *  Created on: Feb 26, 2012
 *      Author: daniel
 */

#ifndef FERRARI_H_
#define FERRARI_H_

#include "Carro.h"
using namespace std;

class Ferrari: public Carro {
public:
	Ferrari();
	virtual ~Ferrari();
	int correr();
};

#endif /* FERRARI_H_ */
