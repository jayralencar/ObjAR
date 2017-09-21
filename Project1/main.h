#pragma once
#include <process.h> 
#include <string> 
#include <iostream>
#include <windows.h>
#using <Microsoft.VisualBasic.dll>
#include "Shlwapi.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using namespace System::Diagnostics;




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


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::ComponentModel::IContainer^  components;

	private: System::IO::StreamReader^ srObjects;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  abrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salvarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salvarComoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exportarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  projetoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aplicarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  executarToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  excluirMarcador;
	private: System::Windows::Forms::Button^  novoMarcador;




	private: System::Windows::Forms::DataGridView^  dataGridView2;





	private: System::Windows::Forms::Button^  excluirObjeto;
	private: System::Windows::Forms::Button^  novoObj;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  arquivo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  frequencia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  filtro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  arquivo_obj;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  marcador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  translation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rotation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  scale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LIGHTING;











	private: System::IO::StreamReader^ srMarkers;
	

	

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salvarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salvarComoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projetoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aplicarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->executarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->excluirMarcador = (gcnew System::Windows::Forms::Button());
			this->novoMarcador = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arquivo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->frequencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filtro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->excluirObjeto = (gcnew System::Windows::Forms::Button());
			this->novoObj = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->arquivo_obj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->marcador = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->translation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rotation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->scale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LIGHTING = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			// menuStrip1
			// 
			this->menuStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->projetoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(218, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->novoToolStripMenuItem,
					this->abrirToolStripMenuItem, this->salvarToolStripMenuItem, this->salvarComoToolStripMenuItem, this->exportarToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(61, 20);
			this->toolStripMenuItem1->Text = L"Arquivo";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &main::toolStripMenuItem1_Click);
			// 
			// novoToolStripMenuItem
			// 
			this->novoToolStripMenuItem->Name = L"novoToolStripMenuItem";
			this->novoToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->novoToolStripMenuItem->Text = L"Novo";
			// 
			// abrirToolStripMenuItem
			// 
			this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
			this->abrirToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->abrirToolStripMenuItem->Text = L"Abrir";
			// 
			// salvarToolStripMenuItem
			// 
			this->salvarToolStripMenuItem->Name = L"salvarToolStripMenuItem";
			this->salvarToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->salvarToolStripMenuItem->Text = L"Salvar";
			// 
			// salvarComoToolStripMenuItem
			// 
			this->salvarComoToolStripMenuItem->Name = L"salvarComoToolStripMenuItem";
			this->salvarComoToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->salvarComoToolStripMenuItem->Text = L"Salvar Como";
			// 
			// exportarToolStripMenuItem
			// 
			this->exportarToolStripMenuItem->Name = L"exportarToolStripMenuItem";
			this->exportarToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->exportarToolStripMenuItem->Text = L"Exportar";
			// 
			// projetoToolStripMenuItem
			// 
			this->projetoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aplicarToolStripMenuItem,
					this->executarToolStripMenuItem
			});
			this->projetoToolStripMenuItem->Name = L"projetoToolStripMenuItem";
			this->projetoToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->projetoToolStripMenuItem->Text = L"Projeto";
			// 
			// aplicarToolStripMenuItem
			// 
			this->aplicarToolStripMenuItem->Name = L"aplicarToolStripMenuItem";
			this->aplicarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aplicarToolStripMenuItem->Text = L"Aplicar";
			this->aplicarToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::aplicarToolStripMenuItem_Click);
			// 
			// executarToolStripMenuItem
			// 
			this->executarToolStripMenuItem->Name = L"executarToolStripMenuItem";
			this->executarToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->executarToolStripMenuItem->Text = L"Executar";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->excluirMarcador);
			this->panel1->Controls->Add(this->novoMarcador);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(443, 419);
			this->panel1->TabIndex = 2;
			// 
			// excluirMarcador
			// 
			this->excluirMarcador->Location = System::Drawing::Point(92, 40);
			this->excluirMarcador->Name = L"excluirMarcador";
			this->excluirMarcador->Size = System::Drawing::Size(75, 23);
			this->excluirMarcador->TabIndex = 3;
			this->excluirMarcador->Text = L"Excluir";
			this->excluirMarcador->UseVisualStyleBackColor = true;
			this->excluirMarcador->Click += gcnew System::EventHandler(this, &main::excluirMarcador_Click);
			// 
			// novoMarcador
			// 
			this->novoMarcador->Location = System::Drawing::Point(10, 40);
			this->novoMarcador->Name = L"novoMarcador";
			this->novoMarcador->Size = System::Drawing::Size(75, 23);
			this->novoMarcador->TabIndex = 2;
			this->novoMarcador->Text = L"Novo";
			this->novoMarcador->UseVisualStyleBackColor = true;
			this->novoMarcador->Click += gcnew System::EventHandler(this, &main::novoMarcador_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->arquivo,
					this->tipo, this->frequencia, this->filtro
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 350);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &main::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// arquivo
			// 
			this->arquivo->HeaderText = L"Arquivo";
			this->arquivo->Name = L"arquivo";
			// 
			// tipo
			// 
			this->tipo->HeaderText = L"TIPO";
			this->tipo->Name = L"tipo";
			// 
			// frequencia
			// 
			this->frequencia->HeaderText = L"Frequencia";
			this->frequencia->Name = L"frequencia";
			// 
			// filtro
			// 
			this->filtro->HeaderText = L"Filtro";
			this->filtro->Name = L"filtro";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marcadores";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSize = true;
			this->panel2->Controls->Add(this->excluirObjeto);
			this->panel2->Controls->Add(this->novoObj);
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(446, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(418, 419);
			this->panel2->TabIndex = 3;
			// 
			// excluirObjeto
			// 
			this->excluirObjeto->Location = System::Drawing::Point(92, 40);
			this->excluirObjeto->Name = L"excluirObjeto";
			this->excluirObjeto->Size = System::Drawing::Size(75, 23);
			this->excluirObjeto->TabIndex = 4;
			this->excluirObjeto->Text = L"Excluir";
			this->excluirObjeto->UseVisualStyleBackColor = true;
			// 
			// novoObj
			// 
			this->novoObj->Location = System::Drawing::Point(10, 40);
			this->novoObj->Name = L"novoObj";
			this->novoObj->Size = System::Drawing::Size(75, 23);
			this->novoObj->TabIndex = 3;
			this->novoObj->Text = L"Novo";
			this->novoObj->UseVisualStyleBackColor = true;
			this->novoObj->Click += gcnew System::EventHandler(this, &main::novoObj_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->arquivo_obj,
					this->marcador, this->translation, this->rotation, this->scale, this->LIGHTING
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView2->Location = System::Drawing::Point(0, 69);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(418, 350);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &main::dataGridView2_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.3F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Objetos";
			// 
			// arquivo_obj
			// 
			this->arquivo_obj->HeaderText = L"Arquivo";
			this->arquivo_obj->Name = L"arquivo_obj";
			// 
			// marcador
			// 
			this->marcador->HeaderText = L"Marcador";
			this->marcador->Name = L"marcador";
			// 
			// translation
			// 
			this->translation->HeaderText = L"Translation";
			this->translation->Name = L"translation";
			// 
			// rotation
			// 
			this->rotation->HeaderText = L"Rotation";
			this->rotation->Name = L"rotation";
			// 
			// scale
			// 
			this->scale->HeaderText = L"Scale";
			this->scale->Name = L"scale";
			// 
			// LIGHTING
			// 
			this->LIGHTING->HeaderText = L"LIGHTING";
			this->LIGHTING->Name = L"LIGHTING";
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 443);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"main";
			this->Text = L"GearAPP - Versão 1.1.0 - Prof. Jayr Alencar";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	

	private: void myProcess_HasExited(Object^ sender, EventArgs^ e)
	{

		MessageBox::Show("SAIU");

	}

	




	static bool FileExists(const char *path)
	{
		FILE *fp;
		fpos_t fsize = 0;

		if (!fopen_s(&fp, path, "r"))
		{
			fseek(fp, 0, SEEK_END);
			fgetpos(fp, &fsize);
			fclose(fp);
		}

		return fsize > 0;
	}
	
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void novoMarcador_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ arquivo = Microsoft::VisualBasic::Interaction::InputBox(L"Nome do arquivo. Com .patt no final", L"Novo Marcador", L"file.patt", 500, 100);

	System::String^ comando = "  --output " + arquivo+" -cpara=\"Data/camera_para.dat\"";
	

	//MessageBox::Show(comando);
	//IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(comando);
	//char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	//system(nativeString);

	ProcessStartInfo ^startInfo = gcnew ProcessStartInfo;

	startInfo->FileName = "mk_patt.exe";
	startInfo->CreateNoWindow = true; // start with no window
	startInfo->Arguments = comando;

	
	System::Diagnostics::Process^ myProcess;
	myProcess = System::Diagnostics::Process::Start(startInfo);
		
	myProcess->WaitForExit();

	System::String^ destino = Environment::GetEnvironmentVariable("public")+"/ObjAR/Data/" + arquivo;

	IntPtr ptrToNativeStrings = Marshal::StringToHGlobalAnsi(destino);
	char* nativeStrings = static_cast<char*>(ptrToNativeStrings.ToPointer());

	LPCWSTR destLPC = (LPCWSTR)nativeStrings;
	
	if (FileExists(nativeStrings)){
		MessageBox::Show("Salvo com sucesso!");
		dataGridView1->Rows->Add( "MARKER"+dataGridView1->RowCount+1 ,arquivo, "SINGLE", "80.0");
		refreshGrid1();
	}
}

	private: void refreshGrid1(){
		marcador->Items->Clear();
		for (int i = 0; i < dataGridView1->RowCount; i++){
			dataGridView1->Rows[i]->Cells[0]->Value = "MARKER" + (i + 1);
			marcador->Items->Add("MARKER" + (i + 1));
		}
	}
private: System::Void excluirMarcador_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ arquivo = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
	System::String^ destino = Environment::GetEnvironmentVariable("public") + "/objAR/Data/" + arquivo;
		IntPtr ptrToNativeStrings = Marshal::StringToHGlobalAnsi(destino);
	char* nativeStrings = static_cast<char*>(ptrToNativeStrings.ToPointer());
	if (FileExists(nativeStrings)){
		remove(nativeStrings);	
	}
	dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
	refreshGrid1();
}
	private: System::Void novoObj_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->RowCount > 0){


			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				System::IO::StreamReader^ sr = gcnew
					System::IO::StreamReader(openFileDialog1->FileName);
				//if (sr->GetType)
				System::String^ name = Path::GetFileNameWithoutExtension(openFileDialog1->FileName);
				System::String^ destino = Environment::GetEnvironmentVariable("public") + "/ObjAR/OSG/" + name + ".osg";
				System::String^ comando = " \"" + openFileDialog1->FileName + "\" \"" + destino + "\"";
				IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(comando);
				char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
				//system(nativeString);		
				//MessageBox::Show(comando);

				ProcessStartInfo ^startInfo = gcnew ProcessStartInfo;
				startInfo->FileName = "osgconv.exe";
				startInfo->CreateNoWindow = false; // start with no window
				startInfo->Arguments = comando;



				System::Diagnostics::Process^ myProcess;
				myProcess = System::Diagnostics::Process::Start(startInfo);

				//myProcess->

				myProcess->WaitForExit();

				IntPtr ptrToNativeStrings = Marshal::StringToHGlobalAnsi(destino);
				char* nativeStrings = static_cast<char*>(ptrToNativeStrings.ToPointer());

				LPCWSTR destLPC = (LPCWSTR)nativeStrings;



				if (FileExists(nativeStrings)){
					dataGridView2->Rows->Add(name + ".osg", "MARKER1", "0.0 0.0 0.0", "0.0 0.0 0.0 0.0", "2.0 2.0 2.0", "LIGHTING 1");
					MessageBox::Show("Salvo em " + destino);
				}
				else{

					MessageBox::Show("Aconteceu algum erro durante a conversão do arquivo, tente outro formato!");
				}



				sr->Close();
			}
		}
		else{
			MessageBox::Show("Você precisa cadastrar os marcadores primeiro!");
		}
	}
private: System::Void aplicarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	aplicar();
}
protected: void aplicar(){
	System::String^ markers = Environment::GetEnvironmentVariable("public") + "/ObjAR/Data/markers.dat";
	System::String^ objects = Environment::GetEnvironmentVariable("public") + "/ObjAR/Data/objects.dat";
}
};


}
