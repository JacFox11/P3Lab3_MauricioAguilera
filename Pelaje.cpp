#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Pelaje_CPP
#define Pelaje_CPP
using namespace std;

class Pelaje{
	private:
		string color;
		int grosor;
		int largo;
		
	public:
		Pelaje() {
	    }
	    
	    Pelaje(string color, int grosor, string nombre, int largo) {
	    	this->grosor = grosor;
	    	this->largo = largo;
	    	this->color = color;
	    }
	
	    int getGrosor() {
	        return grosor;
	    }
	
	    void setGrosor(int grosor) {
	        this->grosor = grosor;
	    }
	
	    int getLargo() {
	        return largo;
	    }
	
	    void setLargo(int largo) {
	        this->largo = largo;
	    }
	    
	    string getColor() {
	        return color;
	    }
	
	    void setColor(string color) {
	        this->color = color;
	    }
};

#endif
