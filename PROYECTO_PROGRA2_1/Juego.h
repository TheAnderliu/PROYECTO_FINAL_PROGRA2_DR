#pragma once
class CJuego
{
private:
	CJugador *objJugador;
	vector<CDisco*> arreDS;
	int N;
	int nivel;
	int T;
	char tecla;


public:
	CJuego();
	~CJuego();
	/*void MostrarTodos();
	void MoverTodos();
	bool AnalizarChoque();
	void MoverJ(char _tecla);
	void InsertarD();
	void EliminarD();
	void set_N(int _N);
	int get_N();
	void set_T(int _T);
	int get_T();
	//void MostrarEscenario();
	void set_nivel(int _nivel);
	int get_nivel();*/
};

