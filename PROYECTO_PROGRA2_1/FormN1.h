#pragma once
#include"Disco.h"
#include "DiscoSpinning.h"
#include "Juego.h"
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
	private:

		CJuego * objJuego;
		Bitmap ^imgDiscoSpinning;
		Bitmap ^imgPersonaje;
		Bitmap ^imgM1;
		Bitmap ^imgM2;
		Bitmap ^imgM3;
		Bitmap ^imgM4;
		Bitmap ^imgM5;

		int indicedsx = 0;
		int indicedsy = 0;
		int indicepx = 2;
	private: System::Windows::Forms::Label^  lblContTiempo;



		int contatiempo = 45;
	private: System::Windows::Forms::Label^  lblVida;

		int tempC = 0;

		/*Graphics ^g;
		BufferedGraphicsContext ^espacioBuffer;
		BufferedGraphics ^buffer;*/




	public:
		FormN1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			objJuego = new CJuego();
			/*
			g = this->CreateGraphics();
			espacioBuffer = BufferedGraphicsManager::Current;
			buffer = espacioBuffer->Allocate(g, this->ClientRectangle);*/

			imgDiscoSpinning = gcnew Bitmap("disco_spinning_FINAL_3.png");
			imgPersonaje = gcnew Bitmap("sprite_doctor_who.png");
			imgM1 = gcnew Bitmap("fondoDiscRoom_nivel1.png");
			imgM2 = gcnew Bitmap("fondoDiscRoom_nivel2.png");
			imgM3 = gcnew Bitmap("fondoDiscRoom_nivel3.png");
			imgM4 = gcnew Bitmap("fondoDiscRoom_nivel4.png");
			imgM5 = gcnew Bitmap("fondoDiscRoom_nivel5.png");
			

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		


	private: System::Windows::Forms::Timer^  timer2;
	protected:
		char tecla = 'A';

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
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblContTiempo = (gcnew System::Windows::Forms::Label());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormN1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &FormN1::timer2_Tick);
			// 
			// lblContTiempo
			// 
			this->lblContTiempo->AutoSize = true;
			this->lblContTiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContTiempo->Location = System::Drawing::Point(643, 21);
			this->lblContTiempo->Name = L"lblContTiempo";
			this->lblContTiempo->Size = System::Drawing::Size(0, 18);
			this->lblContTiempo->TabIndex = 0;
			// 
			// lblVida
			// 
			this->lblVida->AutoSize = true;
			this->lblVida->Font = (gcnew System::Drawing::Font(L"Pristina", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida->Location = System::Drawing::Point(23, 13);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(0, 21);
			this->lblVida->TabIndex = 1;
			// 
			// FormN1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 735);
			this->Controls->Add(this->lblVida);
			this->Controls->Add(this->lblContTiempo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FormN1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormN1";
			this->Load += gcnew System::EventHandler(this, &FormN1::FormN1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormN1::FormN1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormN1::FormN1_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormN1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 /*
				 Graphics ^ gr = this->CreateGraphics();
				 Bitmap ^ img1 = gcnew Bitmap("fondoDiscRoom_nivel1.png");
				 gr->DrawImage(img1, 0, 0, 758, 735);
				
				 delete img1;
				 delete gr;*/

	}

			 /*
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
				buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


				// Aumentamos el indice 


				

	}
			
		
	public: void PresionarAbajo(BufferedGraphics ^buffer){

				
				// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
				int anchoImagen = imgPersonaje->Width / 3;
				int altoImagen = imgPersonaje->Height / 4;
		

				// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
				Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, 0, anchoImagen, altoImagen);
				// Dibujamos la imagen en la posicion 50, 50
				buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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
						buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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
							buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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
								buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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
						buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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
									buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


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

						

						//PASANDO ESTE:

			public: void SinPresionarArriba(BufferedGraphics ^buffer){

						
						// El pictureBox contiene al Sprite y está en SizeMode = AutoSize
						int anchoImagen = imgPersonaje->Width / 3;
						int altoImagen = imgPersonaje->Height / 4;
					


						// Declaramos un rectangulo con las dimensiones del pedazo del sprite a utilizar  
						Drawing::Rectangle porcionAUsar = Drawing::Rectangle(anchoImagen * indicepx, anchoImagen * 3, anchoImagen, altoImagen);
						// Dibujamos la imagen en la posicion 50, 50
						buffer->Graphics->DrawImage(imgPersonaje, objJuego->get_xJ(), objJuego->get_yJ(), porcionAUsar, GraphicsUnit::Pixel);


						// Aumentamos el indice 


						indicepx = 1;

			}

					//PASANDO ESTE
					*/
public: void ManejaC(){


			tempC = contatiempo - 5;


}


	private: System::Void FormN1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 /*
				 switch (e->KeyCode)
				 {
				 case Keys::Right:
					 tecla = 77;
					 objJuego->MoverJ(tecla); break;
				 case Keys::Down:
					 tecla = 80;
					 objJuego->MoverJ(tecla); break;
				 case Keys::Up:
					 tecla = 72;
					 objJuego->MoverJ(tecla); break;
				 case Keys::Left:
					 tecla = 75;
					 objJuego->MoverJ(tecla); break;



				 default:
					 break;
				 }*/


				 
							 if (e->KeyCode == Keys::Down)
							 {
								 tecla = 80;
								 objJuego->MoverJ(tecla);

								 
							 }
							 else if (e->KeyCode==Keys::Up)
							 {
								 tecla = 72;
								 objJuego->MoverJ(tecla);
								 
							 }
							 else if (e->KeyCode==Keys::Left)
							 {
								 tecla = 75;
								 objJuego->MoverJ(tecla);
								 

							 }
							 else if (e->KeyCode==Keys::Right)
							 {
								 tecla = 77;
								 objJuego->MoverJ(tecla);
								 
							 }

							 else if (e->KeyCode==Keys::C)
							 {
								 timer1->Interval = 200;
								 ManejaC();
							 }


							 
				}
			 /*
			 public: void GenerarDiscos(){
			 
						 for (int i = 0; i < 3; i++)
						 {
							 objJuego->InsertarD();
						 }
							 
						 
			 }*/




			 public: void PintarDiscos(BufferedGraphics ^buffer){
						 int arresize = objJuego->get_tamanioarre();
						 

							 for (int i = 0; i < arresize; i++)
							 {
								 CDisco* objDiscos = objJuego->get_arreDS(i);

								 int xD = objDiscos->get_x();

								 int yD = objDiscos->get_y();

								 objJuego->GenerarDiscoSpinning(buffer, xD, yD, imgDiscoSpinning);

							 }
						 
			 }


			private: System::Void FormN1_Load(System::Object^  sender, System::EventArgs^  e) {

							// GenerarDiscos();
						 ManejaC();
						
					 }


			

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

				 Graphics ^g;
				 BufferedGraphicsContext ^espacioBuffer;
				 BufferedGraphics ^buffer;

				

				 g = this->CreateGraphics();
				 espacioBuffer = BufferedGraphicsManager::Current;
				 buffer = espacioBuffer->Allocate(g, this->ClientRectangle);

				// buffer->Graphics->Clear(Color::White);  
				 // Pasamos el buffer terminado al canvas visible  buffer->Render(g);
			
				// 758, 735
				// int w = g->ClipBounds.Width;
				 //int h = g->ClipBounds.Height;
				 objJuego->MostrarEscenario(buffer, imgM1, imgM2, imgM3, imgM4, imgM5);
				 
				 switch (tecla)
				 {
				 case 80:objJuego->PresionarAbajo(buffer, imgPersonaje); tecla = 'A'; break;
				 case 77:objJuego->PresionarDerecha(buffer, imgPersonaje); tecla = 'B'; break;
				 case 75:objJuego->PresionarIzquierda(buffer, imgPersonaje); tecla = 'F'; break;
				 case 72:objJuego->PresionarArriba(buffer, imgPersonaje); tecla = 'D'; break;
				 case 'B':objJuego->SinPresionarDerecha(buffer, imgPersonaje); break;
				 case 'A':objJuego->PersonajeSinPresionarAbajo(buffer, imgPersonaje); break;
				 case 'F':objJuego->SinPresionarIzquierda(buffer, imgPersonaje); break;
				 case 'D':objJuego->SinPresionarArriba(buffer, imgPersonaje); break;
				 default:
					 break;
				 }
			
			
				 if (contatiempo == tempC)
				 {
					 timer1->Interval = 100;
				 }
				

				 PintarDiscos(buffer);
				 
			
				 objJuego->MoverTodos();
				 
				 

				 objJuego->AnalizaColision();

				 lblVida->Text = (objJuego->get_vidas()).ToString();
				 lblContTiempo->Text = contatiempo.ToString();
			


				 //jugar con eso para las colisiones
				 if (objJuego->get_contcolisiones()==1)
				 {
					 

					 objJuego->set_nivel(2);
					 //timer2->Enabled = false;
				 }
				 //jugar con eso para las colisiones
				 buffer->Render(g);
				 
				// delete imgDiscoSpinning;
				 delete buffer;
				 delete espacioBuffer;
				 delete g;
				
				 
	}


private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (contatiempo >= 40)
			 {
				 objJuego->InsertarD();

			 }
				 
			 
			 
			 
			

			 contatiempo--;
			
			 

			

			
}
};
}
