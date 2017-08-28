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


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->button2->Location = System::Drawing::Point(301, 25);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(408, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Iniciar Aplicação";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(272, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(301, 67);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(272, 150);
			this->dataGridView2->TabIndex = 6;
			
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 282);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"main";
			this->Text = L"GearAPP - Versão 0.0.1 - Prof. Jayr Alencar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

			

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->getMarcadores();
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
			system(nativeString);		//MessageBox::Show(comando);
			sr->Close();
		}
	}

	private: void getMarcadores(){
		StreamReader^ sr = gcnew StreamReader(Environment::GetEnvironmentVariable("userprofile")+"/Documents/ObjAR/Data/markers.dat");
		String^ line;

		while ((line = sr->ReadLine()) != nullptr)
		{
			if (line->Length > 0 && line != ""){
				if (line->Substring(0, 1) != "#"){
					int numMarkres = Int32::Parse(line);
					for (int i = 0; i < numMarkres; i++){
						String^ line2;
						while ((line2 = sr->ReadLine()) != nullptr ){
							if (line2 != ""){
								if (line2->Substring(0, 1) != "#"){
									MessageBox::Show(line2);
								}	
							}					
						}
						
					}
				}
			}
		}
		sr->Close();
	}
	};
}
