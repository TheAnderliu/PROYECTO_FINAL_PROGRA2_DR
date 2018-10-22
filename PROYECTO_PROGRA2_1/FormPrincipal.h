#pragma once

namespace PROYECTO_PROGRA2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 735);
			this->Name = L"FormPrincipal";
			this->Text = L"FormPrincipal";
			this->Load += gcnew System::EventHandler(this, &FormPrincipal::FormPrincipal_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormPrincipal::FormPrincipal_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {

				 //Crando el canvas
				
				 //Creadno un lapicero
				 
				 //delete lapicero1;

			//	 Bitmap ^ img1 = gcnew Bitmap("FONDOTABLERO.jpg");

//				 int w = gr->ClipBounds.Width;

				 //int h = gr->ClipBounds.Height;

				// g->DrawImage(img1, 0, 0, 50, 100);
				 //gr->DrawEllipse(Pens::Azure, 10, 10, 10, 10);

				// delete gr;
				//delete img1;
	}


	private: System::Void FormPrincipal_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 Graphics ^ gr = this->CreateGraphics();
				 Bitmap ^ img1 = gcnew Bitmap("fondoDiscRoom_nivel5.png");
				 Bitmap ^ img2 = gcnew Bitmap("disco_spinning3.png");
				 Bitmap ^ img3 = gcnew Bitmap("sprite_doctor_who.png");
				 
				  gr->DrawImage(img1, 0, 0, 758, 735);
				  gr->DrawImage(img2, 100, 100, 100, 100);
				  gr->DrawImage(img3, 300, 300, 100, 150);
				  delete img1;
				  delete img2;
				  delete gr;
				 

	}
	};
}
