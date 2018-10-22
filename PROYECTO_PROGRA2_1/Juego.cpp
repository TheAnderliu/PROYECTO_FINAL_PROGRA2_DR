#include "stdafx.h"


CJuego::CJuego(){

	objJugador = new CJugador();
	Random f;
	T = f.Next(4, 9);
	N = f.Next(15, 46);
	nivel = 1;


}

CJuego::~CJuego(){}
/*
void CJuego::MostrarTodos(){
	
	for each (CDisco* objDS in arreDS)
	objDS->mostrar();
	
	for (int i = 0; i <= arreDS.size() - 1; i++)
	{

		arreDS[i]->mostrar();
	}


}

void CJuego::MoverTodos(){
	for each (CDisco* objDS in arreDS)
		objDS->mover();

}



bool CJuego::AnalizarChoque(){
	/*
	for (int i = objJugador->get_x(); i <= objJugador->get_alto(); i++)
	{
	for each (CDisco* objDS in arreDS){
	if (i == objDS->get_x()||)
	{

	}



	}



	}
	return true;

}

void CJuego::MoverJ(char _tecla){

	objJugador->mover(_tecla);


}

void CJuego::InsertarD(){


	int nDS;
	CDisco* objDS = new CDiscoSpinning();
	Random f;
	Random x;
	


	if (nivel == 1)
	{
		nDS = x.Next(1, 4);

		for (int i = 0; i < nDS; i++)
		{
			int randomx = rand();
			int randomy = rand();


			randomx = (rand() % 3) - 1;
			randomy = (rand() % 3) - 1;
			//cout << randomx << endl;
			//cout << randomy << endl;
			objDS->set_dx(randomx);
			objDS->set_dy(randomy);

			arreDS.push_back(objDS);

		}

	}

	//cout << "Cantidad del vector: " << arreDS.size();

}

void CJuego::EliminarD(){

	arreDS.clear();

}

void CJuego::set_N(int _N){
	N = _N;
}

int CJuego::get_N(){
	return N;
}

void CJuego::set_T(int _T){
	T = _T;
}

int CJuego::get_T(){
	return T;

}

//void MostrarEscenario(){}

void CJuego::set_nivel(int _nivel){

	nivel = _nivel;

}

int CJuego::get_nivel(){
	return nivel;

}
*/