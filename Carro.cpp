//============================================================================
// Name        : Carro.cpp
// Author      : Daniel Ferreira de Lima
// Version     :
// Copyright   : OpenSource use mas nao abuse
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "Carro.h"
#include "Banco.h"
#include "Pneu.h"
#include "Motor.h"
#include "Volante.h"
#include "Ferrari.h"
#include <stdlib.h>
using namespace std;

Carro::Carro() {
	cout<<"Bem vindo ao Carro!"<<endl;
}

int Carro::testar() {
	Banco b;
	b.aquecer();

	Pneu pneu;
	pneu.rodar();

	Motor moto;
	moto.ligar();

	Volante vol;
	vol.girar_direita();
	vol.girar_esquerda();

}

Carro::~Carro() {
}


int main(){
	Carro car;
	car.testar();

	Ferrari fer;
	fer.testar();
	fer.correr();

	string ok="Ok!";
	vector<int> numeros;
	numeros.push_back(10);
	numeros.push_back(20);
	numeros.push_back(30);
	numeros.push_back(40);
	numeros.push_back(50);

	vector<int>::iterator it;
	// Declara iterador
	for (it = numeros.begin(); it != numeros.end(); it++)
	// Percorre vector
	cout << *it << endl;
	// e exibe 5 8 2


	double dnumber1 = 0.0;
	double dnumber2 = 0.0;
	double dnumber3 = 0.0;
	double daverage = 0.0;

	cout << "Please enter 3numbers:"<<endl;
    cin >> dnumber1;
    cin >> dnumber2;
    cin >> dnumber3;

    daverage = (dnumber1 + dnumber2 + dnumber3 ) /3;
    cout << "Average: " << daverage;

	return 0;
}
