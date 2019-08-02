#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Ojos_CPP
#define Ojos_CPP
using namespace std;

class Ojos{
	private:
		string color;
		bool nocturno;
		
	public:
		Ojos() {
	    }
	    
	    Ojos(string color, bool nocturno) {
	    	this->color = color;
	    	this->nocturno = nocturno;
	    }
	    
	    string getColor() {
	        return color;
	    }
	
	    void setColor(string color) {
	        this->color = color;
	    }
	    
	    bool getNocturno() {
	        return nocturno;
	    }
	
	    void setNocturno(bool nocturno) {
	        this->nocturno = nocturno;
	    }
	    
	    ~Ojos(){
		}
};

#endif
