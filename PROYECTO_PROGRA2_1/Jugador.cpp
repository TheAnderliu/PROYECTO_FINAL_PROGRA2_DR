#include "stdafx.h"



CJugador::CJugador(){

	x = 100;
	y = 100;
	dx = 5;
	dy = 5;
	ancho = 3;
	alto = 3;
	v = 6;

}

CJugador::~CJugador(){}

void CJugador::set_x(int _x){
	x = _x;

}

int CJugador::get_x(){

	return x;

}

void CJugador::set_y(int _y){
	y = _y;

}

int CJugador::get_y(){

	return y;
}

void CJugador::set_dx(int _dx){
	dx = _dx;

}

int CJugador::get_dx(){

	return dx;
}

void CJugador::set_dy(int _dy){
	dy = _dy;

}

int CJugador::get_dy(){

	return dy;

}

void CJugador::set_ancho(int _ancho){
	ancho = _ancho;


}

int CJugador::get_ancho(){

	return ancho;

}

void CJugador::set_alto(int _alto){
	alto = _alto;


}

int CJugador::get_alto(){

	return alto;

}

void CJugador::set_v(int _v){

	v = _v;
}

int CJugador::get_v(){

	return v;
}

void CJugador::mover(char _tecla){

	switch (_tecla)
	{
	case 72:  y -= dy; break;
	case 80:  y += dy; break;
	case 75: x -= dx; break;
	case 77:  x += dx; break;
	default:
		break;
	}



}

void CJugador::mostrar(){

	
	if (x+dx<71)
	{
		x = 69;
	}
	else if (x + dx + 10>668 )
	{
		x = 645;
		
	}
	else if (y+dy<73)
	{
		y = 71;
	}
	else if (y + dy + 10>637)
	{
		y = 620;
	}


}



Drawing::Rectangle CJugador::Get_Jugador(){


	return Drawing::Rectangle(x, y, ancho, alto);




}