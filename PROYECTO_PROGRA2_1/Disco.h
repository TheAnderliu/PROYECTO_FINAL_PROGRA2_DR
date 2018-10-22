#pragma once
class CDisco
{
protected:
	int x, y, dx, dy, ancho, alto;

public:
	CDisco();
	~CDisco();

	void set_x(int _x);
	int get_x();

	void set_y(int _y);
	int get_y();

	void set_dx(int _dx);
	int get_dx();

	void set_dy(int _dy);
	int get_dy();

	void set_ancho(int _ancho);
	int get_ancho();

	void set_alto(int _alto);
	int get_alto();

	virtual void mostrar(){};
	virtual void mover(){};
	


};
