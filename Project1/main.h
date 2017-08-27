#pragma once
#include <process.h> 
#include <string> 
#include <iostream>
#include <windows.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	
	

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Criar novo marcador";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(206, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Selecionar Objeto 3D";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"obj,3ds,osg";
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(203, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(393, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Iniciar Aplicação";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 327);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"main";
			this->Text = L"GearAPP - Versão 0.0.1 - Prof. Jayr Alencar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		system("mk_patt -cpara=\"Data/camera_para.dat\"");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ sr = gcnew
				System::IO::StreamReader(openFileDialog1->FileName);
			//if (sr->GetType)
			System::String^ name = Path::GetFileNameWithoutExtension(openFileDialog1->FileName);
			
			System::String^ comando = "osgconvd \"" + openFileDialog1->FileName + "\" \"" + Environment::GetEnvironmentVariable("userprofile")+"/Documents/ObjAR/OSG/"+name+".osg\" && exit > output.msg 2> output.err";
			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(comando);
			char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
			system(nativeString);
			//MessageBox::Show(comando);
			sr->Close();
		}
	}
	};
}
