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
			this->getMarcadores();
			this->getObjects();
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


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;



	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;




	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  resObjcet;
	private: System::Windows::Forms::Label^  resMarcador;
	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->resMarcador = (gcnew System::Windows::Forms::Label());
			this->resObjcet = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"obj,3ds,osg";
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(0, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(693, 36);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Iniciar Aplicação";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->resObjcet);
			this->panel1->Controls->Add(this->resMarcador);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(693, 76);
			this->panel1->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(343, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Selecionar Objeto 3D";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Criar novo marcador";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 76);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(332, 321);
			this->panel2->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Marcadores:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(313, 254);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->richTextBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(338, 76);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(355, 321);
			this->panel3->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Objetos";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(5, 27);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(338, 254);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// resMarcador
			// 
			this->resMarcador->AutoSize = true;
			this->resMarcador->Location = System::Drawing::Point(13, 57);
			this->resMarcador->Name = L"resMarcador";
			this->resMarcador->Size = System::Drawing::Size(0, 13);
			this->resMarcador->TabIndex = 4;
			// 
			// resObjcet
			// 
			this->resObjcet->AutoSize = true;
			this->resObjcet->Location = System::Drawing::Point(343, 56);
			this->resObjcet->Name = L"resObjcet";
			this->resObjcet->Size = System::Drawing::Size(0, 13);
			this->resObjcet->TabIndex = 5;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 433);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Name = L"main";
			this->Text = L"GearAPP - Versão 0.0.1 - Prof. Jayr Alencar";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

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
			System::String^ destino = Environment::GetEnvironmentVariable("userprofile") + "/Documents/ObjAR/OSG/" + name + ".osg";
			System::String^ comando = "osgconvd \"" + openFileDialog1->FileName + "\" \"" + destino +"\" && exit > output.msg 2> output.err";
			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(comando);
			char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
			system(nativeString);		//MessageBox::Show(comando);

			
			
			sr->Close();
		}
	}

	private: void getMarcadores(){
		StreamReader^ sr = gcnew StreamReader(Environment::GetEnvironmentVariable("userprofile")+"/Documents/ObjAR/Data/markers.dat");
		String^ line;

		richTextBox1->Text = sr->ReadToEnd();
		sr->Close();
	}

	private: void getObjects(){
		StreamReader^ sr = gcnew StreamReader(Environment::GetEnvironmentVariable("userprofile") + "/Documents/ObjAR/Data/objects.dat");
		String^ line;

		richTextBox2->Text = sr->ReadToEnd();
		sr->Close();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
