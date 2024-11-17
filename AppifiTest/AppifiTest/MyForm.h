#pragma once
#include "MusicPlayer.h"
#include "Songs.h"



namespace AppifiTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//----------------------------------class OBJECTS are created here--------------------------------------------------------------
	public:
		MyForm(void)
		{
			InitializeComponent();

			// Initialize the MusicPlayer object
			musicPlayer = new MusicPlayer();

			songsManager = new Songs();

			currentPlaylistName = nullptr;
			currentSongIndex = -1;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete musicPlayer; // Clean up the MusicPlayer object
			delete songsManager;
		}


	private: System::Windows::Forms::ListBox^ Playlist_Holder;
	private: System::Windows::Forms::Button^ addplaylistbutton;
	private: System::Windows::Forms::TextBox^ playlisttxtbox;
	protected:

	protected:

	private:
	private:

		//---------------------------------POINTERS TO THE OBJECTS----------------------------------------------------------------------
		MusicPlayer* musicPlayer; // Pointer to the MusicPlayer object
		Songs* songsManager;
		System::String^ currentPlaylistName; // Name of the currently playing playlist
		int currentSongIndex; // Index of the currently playing song

	private: System::Windows::Forms::Button^ deleteplaylistbutton;
	private: System::Windows::Forms::TextBox^ deleteplaylistbox;
	private: System::Windows::Forms::ListBox^ Song_Holder;
	private: System::Windows::Forms::Button^ addsongbtn;
	private: System::Windows::Forms::Button^ deletesongbtn;
	private: System::Windows::Forms::TextBox^ addsongtxtbox;
	private: System::Windows::Forms::TextBox^ deletesongtxtbox;
	private: System::Windows::Forms::Button^ viewplaylistbtn;
	private: System::Windows::Forms::TextBox^ viewplaylisttxtbox;
	private: System::Windows::Forms::Panel^ btncontrols;
	private: System::Windows::Forms::TextBox^ controltxtbox;

	private: System::Windows::Forms::Button^ forwardbtn;
	private: System::Windows::Forms::Button^ playbtn;
	private: System::Windows::Forms::Button^ backbtn;
	private: System::Windows::Forms::Label^ label1;


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
			this->Playlist_Holder = (gcnew System::Windows::Forms::ListBox());
			this->addplaylistbutton = (gcnew System::Windows::Forms::Button());
			this->playlisttxtbox = (gcnew System::Windows::Forms::TextBox());
			this->deleteplaylistbutton = (gcnew System::Windows::Forms::Button());
			this->deleteplaylistbox = (gcnew System::Windows::Forms::TextBox());
			this->Song_Holder = (gcnew System::Windows::Forms::ListBox());
			this->addsongbtn = (gcnew System::Windows::Forms::Button());
			this->deletesongbtn = (gcnew System::Windows::Forms::Button());
			this->addsongtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->deletesongtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->viewplaylistbtn = (gcnew System::Windows::Forms::Button());
			this->viewplaylisttxtbox = (gcnew System::Windows::Forms::TextBox());
			this->btncontrols = (gcnew System::Windows::Forms::Panel());
			this->controltxtbox = (gcnew System::Windows::Forms::TextBox());
			this->forwardbtn = (gcnew System::Windows::Forms::Button());
			this->playbtn = (gcnew System::Windows::Forms::Button());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btncontrols->SuspendLayout();
			this->SuspendLayout();
			// 
			// Playlist_Holder
			// 
			this->Playlist_Holder->BackColor = System::Drawing::SystemColors::Control;
			this->Playlist_Holder->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Playlist_Holder->FormattingEnabled = true;
			this->Playlist_Holder->ItemHeight = 32;
			this->Playlist_Holder->Location = System::Drawing::Point(-1, 209);
			this->Playlist_Holder->Name = L"Playlist_Holder";
			this->Playlist_Holder->Size = System::Drawing::Size(120, 516);
			this->Playlist_Holder->TabIndex = 0;
			// 
			// addplaylistbutton
			// 
			this->addplaylistbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addplaylistbutton->Location = System::Drawing::Point(25, 599);
			this->addplaylistbutton->Name = L"addplaylistbutton";
			this->addplaylistbutton->Size = System::Drawing::Size(75, 23);
			this->addplaylistbutton->TabIndex = 1;
			this->addplaylistbutton->Text = L"Create";
			this->addplaylistbutton->UseVisualStyleBackColor = false;
			this->addplaylistbutton->Click += gcnew System::EventHandler(this, &MyForm::addplaylistbutton_Click);
			// 
			// playlisttxtbox
			// 
			this->playlisttxtbox->Location = System::Drawing::Point(-1, 628);
			this->playlisttxtbox->Name = L"playlisttxtbox";
			this->playlisttxtbox->Size = System::Drawing::Size(120, 20);
			this->playlisttxtbox->TabIndex = 2;
			this->playlisttxtbox->Text = L"Enter Playlist Name";
			this->playlisttxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->playlisttxtbox->TextChanged += gcnew System::EventHandler(this, &MyForm::playlisttxtbox_TextChanged);
			// 
			// deleteplaylistbutton
			// 
			this->deleteplaylistbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->deleteplaylistbutton->Location = System::Drawing::Point(25, 669);
			this->deleteplaylistbutton->Name = L"deleteplaylistbutton";
			this->deleteplaylistbutton->Size = System::Drawing::Size(75, 23);
			this->deleteplaylistbutton->TabIndex = 3;
			this->deleteplaylistbutton->Text = L"Delete";
			this->deleteplaylistbutton->UseVisualStyleBackColor = false;
			this->deleteplaylistbutton->Click += gcnew System::EventHandler(this, &MyForm::deleteplaylistbutton_Click);
			// 
			// deleteplaylistbox
			// 
			this->deleteplaylistbox->Location = System::Drawing::Point(0, 698);
			this->deleteplaylistbox->Name = L"deleteplaylistbox";
			this->deleteplaylistbox->Size = System::Drawing::Size(119, 20);
			this->deleteplaylistbox->TabIndex = 4;
			this->deleteplaylistbox->Text = L"Enter Name to Delete";
			this->deleteplaylistbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Song_Holder
			// 
			this->Song_Holder->BackColor = System::Drawing::SystemColors::Control;
			this->Song_Holder->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Song_Holder->FormattingEnabled = true;
			this->Song_Holder->ItemHeight = 36;
			this->Song_Holder->Location = System::Drawing::Point(125, 209);
			this->Song_Holder->Name = L"Song_Holder";
			this->Song_Holder->Size = System::Drawing::Size(1025, 436);
			this->Song_Holder->TabIndex = 5;
			// 
			// addsongbtn
			// 
			this->addsongbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addsongbtn->Location = System::Drawing::Point(176, 599);
			this->addsongbtn->Name = L"addsongbtn";
			this->addsongbtn->Size = System::Drawing::Size(167, 23);
			this->addsongbtn->TabIndex = 6;
			this->addsongbtn->Text = L"Add Song";
			this->addsongbtn->UseVisualStyleBackColor = false;
			this->addsongbtn->Click += gcnew System::EventHandler(this, &MyForm::addsongbtn_Click);
			// 
			// deletesongbtn
			// 
			this->deletesongbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->deletesongbtn->Location = System::Drawing::Point(725, 599);
			this->deletesongbtn->Name = L"deletesongbtn";
			this->deletesongbtn->Size = System::Drawing::Size(167, 23);
			this->deletesongbtn->TabIndex = 7;
			this->deletesongbtn->Text = L"Delete Song";
			this->deletesongbtn->UseVisualStyleBackColor = false;
			this->deletesongbtn->Click += gcnew System::EventHandler(this, &MyForm::deletesongbtn_Click);
			// 
			// addsongtxtbox
			// 
			this->addsongtxtbox->Location = System::Drawing::Point(349, 602);
			this->addsongtxtbox->Name = L"addsongtxtbox";
			this->addsongtxtbox->Size = System::Drawing::Size(206, 20);
			this->addsongtxtbox->TabIndex = 8;
			this->addsongtxtbox->Text = L"(Playlist Name, Song name, Artist name)";
			this->addsongtxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// deletesongtxtbox
			// 
			this->deletesongtxtbox->Location = System::Drawing::Point(898, 602);
			this->deletesongtxtbox->Name = L"deletesongtxtbox";
			this->deletesongtxtbox->Size = System::Drawing::Size(206, 20);
			this->deletesongtxtbox->TabIndex = 9;
			this->deletesongtxtbox->Text = L"Enter Name to Delete";
			this->deletesongtxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// viewplaylistbtn
			// 
			this->viewplaylistbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->viewplaylistbtn->Location = System::Drawing::Point(543, 573);
			this->viewplaylistbtn->Name = L"viewplaylistbtn";
			this->viewplaylistbtn->Size = System::Drawing::Size(76, 23);
			this->viewplaylistbtn->TabIndex = 10;
			this->viewplaylistbtn->Text = L"View Playlist";
			this->viewplaylistbtn->UseVisualStyleBackColor = false;
			this->viewplaylistbtn->Click += gcnew System::EventHandler(this, &MyForm::viewplaylistbtn_Click);
			// 
			// viewplaylisttxtbox
			// 
			this->viewplaylisttxtbox->Location = System::Drawing::Point(625, 573);
			this->viewplaylisttxtbox->Name = L"viewplaylisttxtbox";
			this->viewplaylisttxtbox->Size = System::Drawing::Size(100, 20);
			this->viewplaylisttxtbox->TabIndex = 11;
			this->viewplaylisttxtbox->Text = L"Enter Playlist Name";
			// 
			// btncontrols
			// 
			this->btncontrols->Controls->Add(this->controltxtbox);
			this->btncontrols->Controls->Add(this->forwardbtn);
			this->btncontrols->Controls->Add(this->playbtn);
			this->btncontrols->Controls->Add(this->backbtn);
			this->btncontrols->Location = System::Drawing::Point(125, 661);
			this->btncontrols->Name = L"btncontrols";
			this->btncontrols->Size = System::Drawing::Size(1025, 57);
			this->btncontrols->TabIndex = 12;
			// 
			// controltxtbox
			// 
			this->controltxtbox->Location = System::Drawing::Point(388, 3);
			this->controltxtbox->Name = L"controltxtbox";
			this->controltxtbox->Size = System::Drawing::Size(255, 20);
			this->controltxtbox->TabIndex = 3;
			this->controltxtbox->Text = L"Nothing Currently Playing";
			this->controltxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// forwardbtn
			// 
			this->forwardbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->forwardbtn->Location = System::Drawing::Point(600, 29);
			this->forwardbtn->Name = L"forwardbtn";
			this->forwardbtn->Size = System::Drawing::Size(75, 23);
			this->forwardbtn->TabIndex = 2;
			this->forwardbtn->Text = L"⏭";
			this->forwardbtn->UseVisualStyleBackColor = false;
			this->forwardbtn->Click += gcnew System::EventHandler(this, &MyForm::forwardbtn_Click);
			// 
			// playbtn
			// 
			this->playbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->playbtn->Location = System::Drawing::Point(477, 29);
			this->playbtn->Name = L"playbtn";
			this->playbtn->Size = System::Drawing::Size(75, 23);
			this->playbtn->TabIndex = 1;
			this->playbtn->Text = L"▶";
			this->playbtn->UseVisualStyleBackColor = false;
			this->playbtn->Click += gcnew System::EventHandler(this, &MyForm::playbtn_Click);
			// 
			// backbtn
			// 
			this->backbtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backbtn->Location = System::Drawing::Point(355, 29);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(75, 23);
			this->backbtn->TabIndex = 0;
			this->backbtn->Text = L" ⏮";
			this->backbtn->UseVisualStyleBackColor = false;
			this->backbtn->Click += gcnew System::EventHandler(this, &MyForm::backbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(522, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 125);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Appifi";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(1172, 727);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btncontrols);
			this->Controls->Add(this->viewplaylisttxtbox);
			this->Controls->Add(this->viewplaylistbtn);
			this->Controls->Add(this->deletesongtxtbox);
			this->Controls->Add(this->addsongtxtbox);
			this->Controls->Add(this->deletesongbtn);
			this->Controls->Add(this->addsongbtn);
			this->Controls->Add(this->Song_Holder);
			this->Controls->Add(this->deleteplaylistbox);
			this->Controls->Add(this->deleteplaylistbutton);
			this->Controls->Add(this->playlisttxtbox);
			this->Controls->Add(this->addplaylistbutton);
			this->Controls->Add(this->Playlist_Holder);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->btncontrols->ResumeLayout(false);
			this->btncontrols->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//------------------------GUI FUNCTIONS--------------------------------------------------------------------------------------------

	// ADD PLAYLIST BUTTON FUNCTIONALITY EXPLICIT TO THE GUI
	private: System::Void addplaylistbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the text from the textbox
		System::String^ playlistName = playlisttxtbox->Text;

		if (!System::String::IsNullOrWhiteSpace(playlistName)) {
			// Add the playlist to the MusicPlayer object
			musicPlayer->AddPlaylist(playlistName);

			// Update the ListBox
			Playlist_Holder->Items->Add(playlistName);

			// Clear the textbox
			playlisttxtbox->Text = "";
		}
		else {
			// Display a warning if the textbox is empty
			MessageBox::Show("Please enter a playlist name.",
				"Warning",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	// DELETE PLAYLIST FUNCTIONALITY EXPLICIT TO THE GUI
	private: System::Void deleteplaylistbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the text from the textbox
		System::String^ playlistName = deleteplaylistbox->Text;

		if (!System::String::IsNullOrWhiteSpace(playlistName)) {
			musicPlayer->RemovePlaylist(playlistName);

			//remove from this listbox in GUI
			//Iterates over everything in the listbox called Playlist_Holder, gives the count of the number of items, and loops
			for (int i = 0; i < Playlist_Holder->Items->Count; i++) {
				//converts to a string to check if it equals playlist name. If it does, it gets deleted.
				if (Playlist_Holder->Items[i]->ToString() == playlistName) {
					//removes at the index where there is a match
					Playlist_Holder->Items->RemoveAt(i); 
					break;
				}
		}
		}
	}
private: System::Void playlisttxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addsongbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrieve input from the addsongtxtbox
	System::String^ input = addsongtxtbox->Text;

	// Validate input
	if (System::String::IsNullOrWhiteSpace(input)) {
		MessageBox::Show("Please enter the song details in the format: Playlist Name, Song Name, Artist Name.",
			"Invalid Input",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Split the input into Playlist Name, Song Name, and Artist Name
	array<System::String^>^ parts = input->Split(',');
	if (parts->Length < 2) {
		MessageBox::Show("Please enter at least the Playlist Name and Song Name.",
			"Invalid Input",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	System::String^ playlistName = parts[0]->Trim();
	System::String^ songName = parts[1]->Trim();
	System::String^ artistName = parts->Length > 2 ? parts[2]->Trim() : "";

	// Add the song to the backend Songs object
	songsManager->addSong(playlistName, songName, artistName);

	// Update the Song_Holder to display the song
	System::String^ displayText = songName + " by " + artistName;
	Song_Holder->Items->Add(displayText);

	// Clear the input textbox for adding songs
	addsongtxtbox->Text = "";
}
private: System::Void deletesongbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrieve input from the deletesongtxtbox
	System::String^ input = deletesongtxtbox->Text;

	// Validate input
	if (System::String::IsNullOrWhiteSpace(input)) {
		MessageBox::Show("Please enter the song details in the format: Playlist Name, Song Name.",
			"Invalid Input",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Split the input into Playlist Name and Song Name
	array<System::String^>^ parts = input->Split(',');
	if (parts->Length < 2) {
		MessageBox::Show("Please enter both the Playlist Name and Song Name.",
			"Invalid Input",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	System::String^ playlistName = parts[0]->Trim();
	System::String^ songName = parts[1]->Trim();

	// Remove the song from the backend Songs object
	songsManager->removeSong(playlistName, songName);

	// Remove the song from the Song_Holder ListBox
	for (int i = 0; i < Song_Holder->Items->Count; i++) {
		if (Song_Holder->Items[i]->ToString()->StartsWith(songName)) {
			Song_Holder->Items->RemoveAt(i);
			break;
		}
	}

	// Clear the input textbox for deleting songs
	deletesongtxtbox->Text = "";
}
private: System::Void viewplaylistbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ playlistName = viewplaylisttxtbox->Text;

	if (System::String::IsNullOrWhiteSpace(playlistName)) {
		MessageBox::Show("Please enter a playlist name.",
			"Invalid Input",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Update the current playlist name
	currentPlaylistName = playlistName;

	// Retrieve songs from the selected playlist
	std::vector<std::string> songs = songsManager->getSongsInPlaylist(playlistName);

	Song_Holder->Items->Clear();

	for (const auto& song : songs) {
		Song_Holder->Items->Add(gcnew System::String(song.c_str()));
	}

	if (songs.empty()) {
		MessageBox::Show("No songs found in the specified playlist.",
			"Playlist Not Found",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
}


private: System::Void playbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::String::IsNullOrWhiteSpace(currentPlaylistName)) {
		MessageBox::Show("No playlist selected! Please view a playlist first.",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Retrieve songs from the current playlist
	std::vector<std::string> songs = songsManager->getSongsInPlaylist(currentPlaylistName);

	if (songs.empty()) {
		MessageBox::Show("The selected playlist is empty.",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Play the first song
	currentSongIndex = 0;
	controltxtbox->Text = gcnew System::String(("Now Playing: " + songs[currentSongIndex]).c_str());
}
private: System::Void forwardbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::String::IsNullOrWhiteSpace(currentPlaylistName)) {
		MessageBox::Show("No playlist selected! Please view a playlist first.",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Retrieve songs from the current playlist
	std::vector<std::string> songs = songsManager->getSongsInPlaylist(currentPlaylistName);

	if (songs.empty()) {
		controltxtbox->Text = "No songs in the current playlist.";
		return;
	}

	// Increment the current song index
	currentSongIndex = (currentSongIndex + 1);

	// Update the control textbox with the current song
	controltxtbox->Text = gcnew System::String(("Now Playing: " + songs[currentSongIndex]).c_str());
}
private: System::Void backbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::String::IsNullOrWhiteSpace(currentPlaylistName)) {
		MessageBox::Show("No playlist selected! Please view a playlist first.",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// Retrieve songs from the current playlist
	std::vector<std::string> songs = songsManager->getSongsInPlaylist(currentPlaylistName);

	if (songs.empty()) {
		controltxtbox->Text = "No songs in the current playlist.";
		return;
	}

	// Decrement the current song index 
	currentSongIndex = (currentSongIndex - 1);

	// Update the control textbox with the current song
	controltxtbox->Text = gcnew System::String(("Now Playing: " + songs[currentSongIndex]).c_str());
}

};
}
