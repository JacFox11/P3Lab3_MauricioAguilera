#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Cola_CPP
#define Cola_CPP
using namespace std;

class Cola{
	private:
		int largo;
		bool peludo;
		
	public:
		Cola() {
	    }
	    
	    Cola(int largo, bool peludo) {
	    	this->largo = largo;
	    	this->peludo = peludo;
	    }
	    
	    int getLargo() {
	        return largo;
	    }
	
	    void setLargo(int largo) {
	        this->largo = largo;
	    }
	    
	    bool getPeludo() {
	        return peludo;
	    }
	
	    void setPeludo(bool peludo) {
	        this->peludo = peludo;
	    }
	    
	    ~Cola(){
		}
};

#endif
