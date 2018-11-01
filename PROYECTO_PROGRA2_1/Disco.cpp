#include "Disco.h"

using namespace System;
using namespace System::Drawing;

CDisco::CDisco(){
	//Random f;

	//dx = f.Next(-1, 2);
	//dy = f.Next(-1, 2);
	x = 300;
	y = 300;
	dx = 0;
	dy = 0;
	ancho = 80;
	alto = 75;

}
CDisco::~CDisco(){}

void CDisco::set_x(int _x){

	x = _x;
}

int CDisco::get_x(){
	return x;

}

void CDisco::set_y(int _y){
	y = _y;

}


int CDisco::get_y(){

	return y;

}

void CDisco::set_dx(int _dx){

	dx = _dx;
}

int CDisco::get_dx(){

	return dx;

}

void CDisco::set_dy(int _dy){
	dy = _dy;

}


int CDisco::get_dy(){

	return dy;

}

void CDisco::set_ancho(int _ancho){

	ancho = _ancho;

}


int CDisco::get_ancho(){

	return ancho;

}

void CDisco::set_alto(int _alto){

	alto = _alto;

}


int CDisco::get_alto(){
	return alto;


}


Drawing::Rectangle CDisco::get_Disco(){

	
		
	return Rectangle(x, y, ancho, alto);

}