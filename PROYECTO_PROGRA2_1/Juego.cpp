#include "stdafx.h"


CJuego::CJuego(){

	objJugador = new CJugador();
	 indicedsx = 0;
	indicedsy = 0;
	indicepx = 2;
	Random f;
	T = f.Next(4, 9);
	N = f.Next(15, 46);
	nivel = 1;
	contcolisiones = 0;
	vidas = 3;
}

CJuego::~CJuego(){}

void CJuego::MostrarTodos(){
	
	for each (CDisco* objDS in arreDS)
	objDS->mostrar();
	


}

void CJuego::MoverTodos(){
	for each (CDisco* objDS in arreDS)
		objDS->mover();

}




void CJuego::MoverJ(char _tecla){

	objJugador->mover(_tecla);
	objJugador->mostrar();


}

void CJuego::AnalizaColision(){


	for each (CDisco* objDS in arreDS)
	{


		if (objDS->get_Disco().IntersectsWith(objJugador->Get_Jugador()))
		{
			vidas--;

			//contcolisiones++;

		}


	}


}

void CJuego::MostrarEscenario(BufferedGraphics ^buffer, Bitmap^ imgM1, Bitmap^ imgM2, Bitmap^ imgM3, Bitmap^ imgM4, Bitmap^ imgM5){



	if (nivel == 1)
	{
		buffer->Graphics->DrawImage(imgM1, 0, 0, 758, 735);
	}
	else if(nivel == 2)
	{
		buffer->Graphics->DrawImage(imgM2, 0, 0, 758, 735);
	}
	else if (nivel == 3)
	{
		buffer->Graphics->DrawImage(imgM3, 0, 0, 758, 735);
	}
	else if (nivel == 4)
	{
		buffer->Graphics->DrawImage(imgM4, 0, 0, 758, 735);
	}
	else if (nivel == 5)
	{
		buffer->Graphics->DrawImage(imgM5, 0, 0, 758, 735);
	}




}

void CJuego::InsertarD(){


//	int nDS;
	CDisco* objDS = new CDiscoSpinning();
	
	Random x;
	
	/*

	if (nivel == 1)
	{
		nDS = 4;

		for (int i = 0; i < nDS; i++)
		{*/

			//cout << randomx << endl;
			//cout << randomy << endl;
			Random f;
			objDS->set_x(300);
			objDS->set_y(300);
			int Rdx = f.Next(-15, 20);
			int Rdy = f.Next(-15, 20);

			objDS->set_dx(Rdx);
			objDS->set_dy(Rdy);

			arreDS.push_back(objDS);

			
			/*

			x = 300;
			y = 300;
		}

	}*/

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



int CJuego::get_yJ(){
	return objJugador->get_y();

}

int CJuego::get_xJ(){

	return objJugador->get_x();
}

CDisco* CJuego::get_arreDS(int indice){

	return arreDS[indice];


}

int CJuego::get_tamanioarre(){

	
	return arreDS.size();



}

void CJuego::GenerarDiscoSpinning(BufferedGraphics ^buffer, int x, int y, Bitmap^ imgDiscoSpinning){

	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgDiscoSpinning->Width / 4;
	int altoImagen = imgDiscoSpinning->Height;
	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicedsx, 0, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgDiscoSpinning, x, y, porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 

	indicedsx++;

	if (indicedsx >= 4)
	{
		indicedsx = 0;


	}



}


void CJuego::PersonajeSinPresionarAbajo(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){


	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;

	indicepx = 1;
	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, 0, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 




}

void CJuego::PresionarAbajo(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){


	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, 0, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx++;

	if (indicepx >= 3)
	{
		indicepx = 0;
	}
	else if (indicepx == 1)
	{
		indicepx = 2;
	}

}

void CJuego::PresionarDerecha(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){


	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 2, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx++;

	if (indicepx >= 3)
	{
		indicepx = 0;
	}
	else if (indicepx == 1)
	{
		indicepx = 2;
	}

}


void CJuego::SinPresionarDerecha(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){

	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 2, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx = 1;

}


void CJuego::PresionarIzquierda(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){

	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 1, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx++;

	if (indicepx >= 3)
	{
		indicepx = 0;
	}
	else if (indicepx == 1)
	{
		indicepx = 2;
	}


}

void CJuego::SinPresionarIzquierda(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){

	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 1, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx = 1;


}

void CJuego::PresionarArriba(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){

	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;


	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 3, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx++;

	if (indicepx >= 3)
	{
		indicepx = 0;
	}
	else if (indicepx == 1)
	{
		indicepx = 2;
	}


}

void CJuego::SinPresionarArriba(BufferedGraphics ^buffer, Bitmap^ imgPersonaje){


	// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
	int anchoImagen = imgPersonaje->Width / 3;
	int altoImagen = imgPersonaje->Height / 4;



	// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
	Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 3, anchoImagen, altoImagen);
	// Dibujamos la imagen en la posicion 50, 50
	buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


	// Aumentamos el indice 


	indicepx = 1;



}



int CJuego::get_contcolisiones(){


	return contcolisiones;



}

int CJuego::get_vidas(){

	return vidas;
}