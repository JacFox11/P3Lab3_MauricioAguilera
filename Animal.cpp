#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"

#ifndef Animal_CPP
#define Animal_CPP
using namespace std;

class Animal{
	private:
		string especie;
		string nombre;
		int tamano;
		string tipo;
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;
		
	public:
		Animal() {
			patas= new Patas();
			pelaje=new pelaje();
			ojos=new ojos();
			orejas=new Orejas();
			Cola=new Cola();
	    }
	    
	    Animal(string especie, string nombre, int tamano, string tipo, Patas* patas, Pelaje* pelaje, Ojos* ojos, Orejas* orejas, Cola* cola) {
	    	this->especie = especie;
	    	string nombre;
	    	this->tamano = tamano;
	    	this->tipo = tipo;
	    	this->patas = patas;
	    	this->pelaje = pelaje;
	    	this->ojos = ojos;
	    	this->orejas = orejas;
	    	this->cola = cola;
	    }
	
	    string getEspecie() {
	        return especie;
	    }
	
	    void setEspecie(string especie) {
	        this->especie = especie;
	    }
	    
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    int getTamano() {
	        return tamano;
	    }
	
	    void setTamano(int tamano) {
	        this->tamano = tamano;
	    }
	    
	    string getTipo() {
	        return tipo;
	    }
	
	    void setTipo(string tipo) {
	        this->tipo = tipo;
	    }
	    
	    Patas getPatas() {
	        return patas;
	    }
	
	    void setPatas(Patas patas) {
	        this->patas = patas;
	    }
	    
	    Pelaje getPelaje() {
	        return pelaje;
	    }
	
	    void setPelaje(Pelaje pelaje) {
	        this->pelaje = pelaje;
	    }
	    
	    Ojos getOjos() {
	        return ojos;
	    }
	
	    void setOjos(Ojos ojos) {
	        this->ojos = ojos;
	    }
	    
	    Orejas getOrejas() {
	        return orejas;
	    }
	
	    void setOrejas(Orejas orejas) {
	        this->orejas = orejas;
	    }
	    
	    Cola getCola() {
	        return cola;
	    }
	
	    void setCola(Cola cola) {
	        this->cola = cola;
	    }
	    
	    void print(){
	    	cout<<"Especie: "<<especie<<setw(10)<<"Nombre: "<<nombre<<setw(10)<<"Tamano: "<<tamano<<setw(10)<<"Tipo: "<<tipo<<endl<<endl;
		}
};

#endif
