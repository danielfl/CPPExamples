/*
 * Volante.h
 *
 *  Created on: Feb 26, 2012
 *      Author: daniel
 */

#ifndef VOLANTE_H_
#define VOLANTE_H_
#include <iostream>

using namespace std;

class Volante {
public:
	Volante();
	virtual ~Volante();
	int girar_esquerda();
    int girar_direita();
};

#endif /* VOLANTE_H_ */
