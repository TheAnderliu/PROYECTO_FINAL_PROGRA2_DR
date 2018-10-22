#pragma once

namespace PROYECTO_PROGRA2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormN4
	/// </summary>
	public ref class FormN4 : public System::Windows::Forms::Form
	{
	public:
		FormN4(void)
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
		~FormN4()
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
			// FormN4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 735);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FormN4";
			this->Text = L"FormN4";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormN4::FormN4_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormN4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 Graphics ^ gr = this->CreateGraphics();
				 Bitmap ^ img1 = gcnew Bitmap("fondoDiscRoom_nivel4.png");
				 gr->DrawImage(img1, 0, 0, 758, 735);
				 delete img1;
				 delete gr;

	}
	};
}
