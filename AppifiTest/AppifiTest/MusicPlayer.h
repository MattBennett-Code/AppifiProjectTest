#pragma once
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>

class MusicPlayer {
private:
    std::vector<std::string> playlist; // Vector to store playlist names

public:
    void AddPlaylist(System::String^ playlistName); // Add a playlist to the vector
    void RemovePlaylist(System::String^ playlistname); //Remove Playlist from the vector
};
