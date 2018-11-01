#pragma once

#include <vector>
using namespace std;
#include "Jugador.h";
#include"DiscoSpinning.h";

using namespace System;
using namespace System::Drawing;



class CJuego
{
private:
	CJugador *objJugador;
	vector<CDisco*> arreDS;
	int indicedsx ;
	int indicedsy;
	int indicepx ;
	int N;
	int nivel;
	int T;
	char tecla;
	int vidas;

	int contcolisiones;



public:
	CJuego();
	~CJuego();
	void MostrarTodos();
	void MoverTodos();
	void GenerarDiscoSpinning(BufferedGraphics ^buffer, int x, int y, Bitmap^ imgDiscoSpínning);
	void PersonajeSinPresionarAbajo(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void PresionarAbajo(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void PresionarDerecha(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void SinPresionarDerecha(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void PresionarIzquierda(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void SinPresionarIzquierda(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void PresionarArriba(BufferedGraphics ^buffer, Bitmap^ imgPersonaje);
	void SinPresionarArriba(BufferedGraphics ^buffer,Bitmap^ imgPersonaje);

	void MoverJ(char _tecla);
	void InsertarD();
	void EliminarD();
	void set_N(int _N);
	int get_N();
	void set_T(int _T);
	int get_T();
	void MostrarEscenario(BufferedGraphics ^buffer, Bitmap^ imgM1, Bitmap^ imgM2, Bitmap^ imgM3, Bitmap^ imgM4, Bitmap^ imgM5 );
	void set_nivel(int _nivel);
	int get_nivel();

	int get_yJ();
	int get_xJ();

	void AnalizaColision();

	int get_vidas();

	int get_contcolisiones();

	CDisco* get_arreDS(int indice);
	int get_tamanioarre();
	
};

