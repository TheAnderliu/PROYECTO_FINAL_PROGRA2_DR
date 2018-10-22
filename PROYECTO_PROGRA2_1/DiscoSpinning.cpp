#include "stdafx.h"



CDiscoSpinning::CDiscoSpinning() :CDisco()
{


}


CDiscoSpinning::~CDiscoSpinning()
{
}



void CDiscoSpinning::mover(){

	if (x + dx + ancho >= 70 || x + dx <= 0)
	{
		dx *= -1;
	}
	else if (y + dy + alto >= 30 || y + dy <= 0)
	{
		dy *= -1;
	}

	x += dx;
	y += dy;

}


void CDiscoSpinning::mostrar(){
	if (x + dx<71)
	{
		x = 69;
	}
	else if (x + dx + 10>668)
	{
		x = 645;

	}
	else if (y + dy<73)
	{
		y = 71;
	}
	else if (y + dy + 10>637)
	{
		y = 620;
	}

}


