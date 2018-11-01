#pragma once
#include "Disco.h"

using namespace System;
using namespace System::Drawing;

class CDiscoSpinning :
	public CDisco
{
public:
	CDiscoSpinning();
	~CDiscoSpinning();
	Drawing::Rectangle get_Disco();
	void mover();
	void mostrar();


};

