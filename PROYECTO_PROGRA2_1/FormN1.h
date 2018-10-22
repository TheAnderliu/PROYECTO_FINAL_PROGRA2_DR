#pragma once
#include "Jugador.h"
namespace PROYECTO_PROGRA2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormN1
	/// </summary>
	public ref class FormN1 : public System::Windows::Forms::Form
	{
	public:
		FormN1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			objJugador = new CJugador();
			imgDiscoSpinning = gcnew Bitmap("disco_spinning_FINAL_3.png");
			imgPersonaje = gcnew Bitmap("sprite_doctor_who.png");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		int indicedsx = 0;
		int indicedsy = 0;
		int indicepx = 2;
		char tecla='A';

		~FormN1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		CJugador * objJugador;
		Bitmap ^imgDiscoSpinning;
		Bitmap ^imgPersonaje;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 80;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormN1::timer1_Tick);
			// 
			// FormN1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 735);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FormN1";
			this->Text = L"FormN1";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormN1::FormN1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormN1::FormN1_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormN1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


				 Graphics ^ gr = this->CreateGraphics();
				 Bitmap ^ img1 = gcnew Bitmap("fondoDiscRoom_nivel1.png");
				 gr->DrawImage(img1, 0, 0, 758, 735);
				 delete img1;
				 delete gr;

	}

	public: void GenerarDiscoSpinning(BufferedGraphics ^buffer, int x, int y){

				
				// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
				int anchoImagen = imgDiscoSpinning->Width / 4;
				int altoImagen = imgDiscoSpinning->Height;
				// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
				Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicedsx, 0, anchoImagen, altoImagen);
				// Dibujamos la imagen en la posicion 50, 50
				buffer->Graphics->DrawImage(imgDiscoSpinning, x, y, porcionAUsar, GraphicsUnit::Pixel);


				// Aumentamos el indice 

				indicedsx++;
				
				if (indicedsx>=4)
				{
					indicedsx = 0;
					

				}
			
			
	}

	public: void PersonajeSinPresionarAbajo(BufferedGraphics ^buffer){

				
				// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
				int anchoImagen = imgPersonaje->Width / 3;
				int altoImagen = imgPersonaje->Height / 4;
			
				indicepx=1;
				// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
				Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, 0, anchoImagen, altoImagen);
				// Dibujamos la imagen en la posicion 50, 50
				buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


				// Aumentamos el indice 


				

	}
	public: void PresionarAbajo(BufferedGraphics ^buffer){

				
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

		public: void PresionarDerecha(BufferedGraphics ^buffer){

						
						// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
						int anchoImagen = imgPersonaje->Width / 3;
						int altoImagen = imgPersonaje->Height / 4;
				

						// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
						Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen*2, anchoImagen, altoImagen);
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

			public: void SinPresionarDerecha(BufferedGraphics ^buffer){

							
							// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
							int anchoImagen = imgPersonaje->Width / 3;
							int altoImagen = imgPersonaje->Height / 4;
						

							// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
							Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen *2, anchoImagen, altoImagen);
							// Dibujamos la imagen en la posicion 50, 50
							buffer->Graphics->DrawImage(imgPersonaje, objJugador->get_x(), objJugador->get_y(), porcionAUsar, GraphicsUnit::Pixel);


							// Aumentamos el indice 


							indicepx = 1;

				}

				public: void PresionarIzquierda(BufferedGraphics ^buffer){

								
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

			public: void SinPresionarIzquierda(BufferedGraphics ^buffer){

						
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

				public: void PresionarArriba(BufferedGraphics ^buffer){

								
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

			public: void SinPresionarArriba(BufferedGraphics ^buffer){

						
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

	private: System::Void FormN1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {


							 if (e->KeyCode == Keys::Down)
							 {
								 tecla = 80;
								 objJugador->mover(tecla);
								 objJugador->mostrar();
							 }
							 else if (e->KeyCode==Keys::Up)
							 {
								 tecla = 72;
								 objJugador->mover(tecla);
								 objJugador->mostrar();
							 }
							 else if (e->KeyCode==Keys::Left)
							 {
								 tecla = 75;
								 objJugador->mover(tecla);
								 objJugador->mostrar();

							 }
							 else if (e->KeyCode==Keys::Right)
							 {
								 tecla = 77;
								 objJugador->mover(tecla);
								 objJugador->mostrar();
							 }



				}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

				 Graphics ^g = this->CreateGraphics();
				 BufferedGraphicsContext ^espacioBuffer = BufferedGraphicsManager::Current;
				 BufferedGraphics ^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
				// buffer->Graphics->Clear(Color::White);  
				 // Pasamos el buffer terminado al canvas visible  buffer->Render(g);
				 Bitmap ^ img1 = gcnew Bitmap("fondoDiscRoom_nivel1.png");
				 buffer->Graphics->DrawImage(img1, 0, 0, 758, 735);
				 
				 switch (tecla)
				 {
				 case 80:PresionarAbajo(buffer); tecla='A'; break;
				 case 77:PresionarDerecha(buffer); tecla = 'B'; break;
				 case 75:PresionarIzquierda(buffer); tecla = 'C'; break;
				 case 72:PresionarArriba(buffer); tecla = 'D'; break;
				 case 'B':SinPresionarDerecha(buffer); break;
				 case'A':PersonajeSinPresionarAbajo(buffer); break;
				 case 'C':SinPresionarIzquierda(buffer); break;
				 case 'D':SinPresionarArriba(buffer); break;
				 default:
					 break;
				 }

				 GenerarDiscoSpinning(buffer,500,500);
				 
				 buffer->Render(g);

				// delete imgDiscoSpinning;
					 delete buffer;
					 delete espacioBuffer;
					 delete g;
				 
	}

};
}
