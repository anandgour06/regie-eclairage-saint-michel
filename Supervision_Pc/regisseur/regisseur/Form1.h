#pragma once


namespace regisseur {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Sockets;
	using namespace System::Threading;


	/// <summary>
	/// Description résumée de Form1
	///
	/// AVERTISSEMENT : si vous modifiez le nom de cette classe, vous devrez modifier la
	///          propriété 'Nom du fichier de ressources' de l'outil de compilation de ressource managée
	///          pour tous les fichiers .resx dont dépend cette classe. Dans le cas contraire,
	///          les concepteurs ne pourront pas interagir correctement avec les ressources
	///          localisées associées à ce formulaire.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO : ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		int num_color;		
		String^ adresse;
		TcpClient^ Client;
		Int32 port;
		bool ma_connect;
		array<Byte>^ dmx;
		


	private: System::Windows::Forms::TrackBar^  trackBar12;
			 //////////////////////////////////////////////////////
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  btn_conn;
	private: System::Windows::Forms::TextBox^  tb_ip;
	private: System::Windows::Forms::Label^  lbl_ip;
	private: System::Windows::Forms::Label^  lbl_port;
	private: System::Windows::Forms::Button^  btn_envoi;
	private: System::Windows::Forms::TextBox^  tb_port;
	private: System::Windows::Forms::TextBox^  tb_1;
	private: System::Windows::Forms::TrackBar^  trackBar11;
	private: System::Windows::Forms::TrackBar^  trackBar10;
	private: System::Windows::Forms::TrackBar^  trackBar9;
	private: System::Windows::Forms::TrackBar^  trackBar8;
	private: System::Windows::Forms::TrackBar^  trackBar7;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Button^  btn_deconnect;
	private: System::Windows::Forms::Button^  btn_1;
	private: System::Windows::Forms::TrackBar^  trackBar1;


			 //private: System::Windows::Forms::TrackBar^ tab_TrackBar;

			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
			 /// le contenu de cette méthode avec l'éditeur de code.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar11 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar10 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
				 this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
				 this->tb_1 = (gcnew System::Windows::Forms::TextBox());
				 this->btn_1 = (gcnew System::Windows::Forms::Button());
				 this->trackBar12 = (gcnew System::Windows::Forms::TrackBar());
				 this->btn_conn = (gcnew System::Windows::Forms::Button());
				 this->tb_ip = (gcnew System::Windows::Forms::TextBox());
				 this->lbl_ip = (gcnew System::Windows::Forms::Label());
				 this->lbl_port = (gcnew System::Windows::Forms::Label());
				 this->btn_envoi = (gcnew System::Windows::Forms::Button());
				 this->tb_port = (gcnew System::Windows::Forms::TextBox());
				 this->btn_deconnect = (gcnew System::Windows::Forms::Button());
				 this->groupBox1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar11))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar10))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar12))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->groupBox1->Controls->Add(this->trackBar1);
				 this->groupBox1->Controls->Add(this->trackBar11);
				 this->groupBox1->Controls->Add(this->trackBar10);
				 this->groupBox1->Controls->Add(this->trackBar9);
				 this->groupBox1->Controls->Add(this->trackBar8);
				 this->groupBox1->Controls->Add(this->trackBar7);
				 this->groupBox1->Controls->Add(this->trackBar6);
				 this->groupBox1->Controls->Add(this->trackBar5);
				 this->groupBox1->Controls->Add(this->trackBar4);
				 this->groupBox1->Controls->Add(this->trackBar3);
				 this->groupBox1->Controls->Add(this->trackBar2);
				 this->groupBox1->Controls->Add(this->tb_1);
				 this->groupBox1->Controls->Add(this->btn_1);
				 this->groupBox1->Controls->Add(this->trackBar12);
				 resources->ApplyResources(this->groupBox1, L"groupBox1");
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->TabStop = false;
				 // 
				 // trackBar1
				 // 
				 this->trackBar1->BackColor = System::Drawing::Color::Green;
				 resources->ApplyResources(this->trackBar1, L"trackBar1");
				 this->trackBar1->Maximum = 100;
				 this->trackBar1->Name = L"trackBar1";
				 this->trackBar1->TickFrequency = 26;
				 this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
				 // 
				 // trackBar11
				 // 
				 this->trackBar11->BackColor = System::Drawing::Color::Green;
				 this->trackBar11->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar11, L"trackBar11");
				 this->trackBar11->Maximum = 100;
				 this->trackBar11->Name = L"trackBar11";
				 this->trackBar11->TickFrequency = 26;
				 this->trackBar11->Scroll += gcnew System::EventHandler(this, &Form1::trackBar11_Scroll);
				 // 
				 // trackBar10
				 // 
				 this->trackBar10->BackColor = System::Drawing::Color::Green;
				 this->trackBar10->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar10, L"trackBar10");
				 this->trackBar10->Maximum = 100;
				 this->trackBar10->Name = L"trackBar10";
				 this->trackBar10->TickFrequency = 26;
				 // 
				 // trackBar9
				 // 
				 this->trackBar9->BackColor = System::Drawing::Color::Green;
				 this->trackBar9->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar9, L"trackBar9");
				 this->trackBar9->Maximum = 100;
				 this->trackBar9->Name = L"trackBar9";
				 this->trackBar9->TickFrequency = 26;
				 // 
				 // trackBar8
				 // 
				 this->trackBar8->BackColor = System::Drawing::Color::Green;
				 this->trackBar8->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar8, L"trackBar8");
				 this->trackBar8->Maximum = 100;
				 this->trackBar8->Name = L"trackBar8";
				 this->trackBar8->TickFrequency = 26;
				 // 
				 // trackBar7
				 // 
				 this->trackBar7->BackColor = System::Drawing::Color::Green;
				 this->trackBar7->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar7, L"trackBar7");
				 this->trackBar7->Maximum = 100;
				 this->trackBar7->Name = L"trackBar7";
				 this->trackBar7->TickFrequency = 26;
				 this->trackBar7->Scroll += gcnew System::EventHandler(this, &Form1::trackBar7_Scroll);
				 // 
				 // trackBar6
				 // 
				 this->trackBar6->BackColor = System::Drawing::Color::Green;
				 this->trackBar6->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar6, L"trackBar6");
				 this->trackBar6->Maximum = 100;
				 this->trackBar6->Name = L"trackBar6";
				 this->trackBar6->TickFrequency = 26;
				 // 
				 // trackBar5
				 // 
				 this->trackBar5->BackColor = System::Drawing::Color::Green;
				 this->trackBar5->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar5, L"trackBar5");
				 this->trackBar5->Maximum = 100;
				 this->trackBar5->Name = L"trackBar5";
				 this->trackBar5->TickFrequency = 26;
				 this->trackBar5->Scroll += gcnew System::EventHandler(this, &Form1::trackBar5_Scroll);
				 // 
				 // trackBar4
				 // 
				 this->trackBar4->BackColor = System::Drawing::Color::Green;
				 this->trackBar4->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar4, L"trackBar4");
				 this->trackBar4->Maximum = 100;
				 this->trackBar4->Name = L"trackBar4";
				 this->trackBar4->TickFrequency = 26;
				 // 
				 // trackBar3
				 // 
				 this->trackBar3->BackColor = System::Drawing::Color::Green;
				 this->trackBar3->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar3, L"trackBar3");
				 this->trackBar3->Maximum = 100;
				 this->trackBar3->Name = L"trackBar3";
				 this->trackBar3->TickFrequency = 26;
				 this->trackBar3->Scroll += gcnew System::EventHandler(this, &Form1::trackBar3_Scroll);
				 // 
				 // trackBar2
				 // 
				 this->trackBar2->BackColor = System::Drawing::Color::Green;
				 this->trackBar2->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar2, L"trackBar2");
				 this->trackBar2->Maximum = 100;
				 this->trackBar2->Name = L"trackBar2";
				 this->trackBar2->TickFrequency = 26;
				 this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
				 // 
				 // tb_1
				 // 
				 resources->ApplyResources(this->tb_1, L"tb_1");
				 this->tb_1->Name = L"tb_1";
				 // 
				 // btn_1
				 // 
				 resources->ApplyResources(this->btn_1, L"btn_1");
				 this->btn_1->Name = L"btn_1";
				 this->btn_1->UseVisualStyleBackColor = false;
				 this->btn_1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 // 
				 // trackBar12
				 // 
				 this->trackBar12->BackColor = System::Drawing::Color::Green;
				 this->trackBar12->Cursor = System::Windows::Forms::Cursors::Hand;
				 resources->ApplyResources(this->trackBar12, L"trackBar12");
				 this->trackBar12->Maximum = 100;
				 this->trackBar12->Name = L"trackBar12";
				 this->trackBar12->TickFrequency = 26;
				 this->trackBar12->Scroll += gcnew System::EventHandler(this, &Form1::trackbar_Scroll);
				 // 
				 // btn_conn
				 // 
				 resources->ApplyResources(this->btn_conn, L"btn_conn");
				 this->btn_conn->Name = L"btn_conn";
				 this->btn_conn->UseVisualStyleBackColor = true;
				 this->btn_conn->Click += gcnew System::EventHandler(this, &Form1::btn_conn_Click);
				 // 
				 // tb_ip
				 // 
				 resources->ApplyResources(this->tb_ip, L"tb_ip");
				 this->tb_ip->Name = L"tb_ip";
				 // 
				 // lbl_ip
				 // 
				 resources->ApplyResources(this->lbl_ip, L"lbl_ip");
				 this->lbl_ip->Name = L"lbl_ip";
				 // 
				 // lbl_port
				 // 
				 resources->ApplyResources(this->lbl_port, L"lbl_port");
				 this->lbl_port->Name = L"lbl_port";
				 // 
				 // btn_envoi
				 // 
				 resources->ApplyResources(this->btn_envoi, L"btn_envoi");
				 this->btn_envoi->Name = L"btn_envoi";
				 this->btn_envoi->UseVisualStyleBackColor = true;
				 this->btn_envoi->Click += gcnew System::EventHandler(this, &Form1::btn_envoi_Click);
				 // 
				 // tb_port
				 // 
				 resources->ApplyResources(this->tb_port, L"tb_port");
				 this->tb_port->Name = L"tb_port";
				 // 
				 // btn_deconnect
				 // 
				 resources->ApplyResources(this->btn_deconnect, L"btn_deconnect");
				 this->btn_deconnect->Name = L"btn_deconnect";
				 this->btn_deconnect->UseVisualStyleBackColor = true;
				 this->btn_deconnect->Click += gcnew System::EventHandler(this, &Form1::btn_deconnect_Click);
				 // 
				 // Form1
				 // 
				 resources->ApplyResources(this, L"$this");
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->Controls->Add(this->btn_deconnect);
				 this->Controls->Add(this->btn_envoi);
				 this->Controls->Add(this->lbl_port);
				 this->Controls->Add(this->lbl_ip);
				 this->Controls->Add(this->tb_port);
				 this->Controls->Add(this->tb_ip);
				 this->Controls->Add(this->btn_conn);
				 this->Controls->Add(this->groupBox1);
				 this->Name = L"Form1";
				 this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar11))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar10))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar12))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
			 

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {


				 dmx = gcnew array<Byte>(512);
				 
				 for(int i=0; i<512; i++)
				 {
					 dmx[i] = 0;
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 change_couleur() ;
			 }

	private: System::Void btn_conn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 btn_conn->Cursor = System::Windows::Forms::Cursors::AppStarting;
				 adresse = tb_ip->Text;
				 port = Convert::ToInt32(tb_port->Text);

				 try
				 {	
					 Client = gcnew TcpClient;
					 Client->Connect(adresse,port);
					 MessageBox::Show( "La connection au serveur à été établie",
						 "Connection reussit", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning); 
				 }
				 ///////////////////////////////////////
				 catch(ArgumentNullException^e)
				 {
					 MessageBox::Show( "Adresse IP incorrecte",
						 "Probleme de connection", MessageBoxButtons::OK,
						 MessageBoxIcon::Error);
				 }
				 //////////////////////////////////////
				 catch(FormatException^e)
				 {
					 MessageBox::Show( "Veuillez saisir uniquemenet des chiffres de 0 à 9",
						 "Probleme de connection", MessageBoxButtons::OK,
						 MessageBoxIcon::Error);
				 }
				 ///////////////////////////////////////
				 catch (ArgumentOutOfRangeException^e) 
				 {
					 MessageBox::Show( "Le port n'est incorrect",
						 "Probleme", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }
				 ///////////////////////////////////////
				 catch (SocketException^e) 
				 {
					 MessageBox::Show( "Une erreur s'est produite lors de l'accès au socket",
						 "Probleme", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }
				 catch(ObjectDisposedException^e)
				 {
					 MessageBox::Show( "Vous êtes deconnecté",
						 "Probleme d'envoie", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }

				 btn_conn->Cursor = System::Windows::Forms::Cursors::Default;
			 }


	private: System::Void btn_envoi_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
					
				 envoyer();

			 }
	private: System::Void trackbar_Scroll(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }

	private: System::Void btn_deconnect_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 int dmx[512];
					 for(int i=0; i<=512; i++)
					 {
						 dmx[i] = 0;
					 }
					 dmx[1] = 1;
					 NetworkStream^ netStream = Client->GetStream();

					 array<unsigned char>^data = BitConverter::GetBytes(dmx);
					 netStream->Write(data, 0, data->Length);
					 Client->Close();

					 MessageBox::Show( "Vous vennez de vous deconnecter",
						 "Deconnection", MessageBoxButtons::OK,
						 MessageBoxIcon::Hand);
				 }
				 catch(Exception^e)
				 {
					 MessageBox::Show( "Vous n'êtes pas connecté au serveur",
						 "Problème", MessageBoxButtons::OK,
						 MessageBoxIcon::Exclamation);
				 }
			 }
	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) 
		 {
			 envoyer();
		 }
	private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) 
			 {
				 envoyer();
			 }
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
			 {
				 envoyer();
				 tb_1->Text = trackBar1->Value.ToString();
			 }
	private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) 
			 {
				 envoyer();
				 //tb_1->Text = trackBar1->Value.ToString();
			 }
			 void envoyer()
			 {
				 
				 try
				 {
					 dmx[0] = trackBar1->Value * 2.55;
					 dmx[1] = trackBar2->Value * 2.55;	
					 dmx[2] = trackBar3->Value * 2.55;	
					 dmx[3] = trackBar4->Value * 2.55;	
					 dmx[4] = trackBar5->Value * 2.55;	
					 dmx[5] = trackBar6->Value * 2.55;	
					 dmx[6] = trackBar7->Value * 2.55;	
					 dmx[7] = trackBar8->Value * 2.55;	
					 dmx[8] = trackBar9->Value * 2.55;	
					 dmx[9] = trackBar10->Value * 2.55;	
					 dmx[10] = trackBar11->Value * 2.55;	
					 dmx[11] = trackBar12->Value * 2.55;


					 Client->GetStream()->Write(dmx,0,dmx->Length);

				 }
				 catch(NullReferenceException^e)
				 {
					 MessageBox::Show( "Vous n'êtes pas connecté ",
						 "Probleme d'envoie", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }
				 catch(ObjectDisposedException^e)
				 {
					 MessageBox::Show( "Vous êtes deconnecté",
						 "Probleme d'envoie", MessageBoxButtons::OK,
						 MessageBoxIcon::Exclamation);
				 }
				 catch ( SocketException^ e ) 
				 {
					 MessageBox::Show( "Une erreur s'est produite lors de l'accès au serveur",
						 "Problème", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }
				 catch ( InvalidOperationException^ e ) 
				 {
					 MessageBox::Show( "Vous devez être connecté",
						 "Problème", MessageBoxButtons::OK,
						 MessageBoxIcon::Warning);
				 }
				 catch(IO::IOException^e)
				 {
				 
				 }
			 }
			 void change_couleur()
			 {
				 num_color = num_color +1;

				 switch (num_color)
				 {
				 case 1:
					 btn_1->BackColor = System::Drawing::Color::Purple;

					 break;
				 case 2:
					 btn_1->BackColor = System::Drawing::Color::OrangeRed;

					 break;
				 case 3:
					 btn_1->BackColor = System::Drawing::Color::YellowGreen;

					 break;
				 case 4:
					 btn_1->BackColor = System::Drawing::Color::Red;

					 break;
				 case 5:
					 btn_1->BackColor = System::Drawing::Color::RoyalBlue;

					 break;
				 case 6:
					 btn_1->BackColor = System::Drawing::Color::WhiteSmoke;
					 num_color = 0;
					 break;
				 }
			 }


			 

				

private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void trackBar7_Scroll(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void trackBar11_Scroll(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

