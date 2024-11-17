#include "MusicPlayer.h"
#include <algorithm>

// Add a playlist to the vector
void MusicPlayer::AddPlaylist(System::String^ playlistName) {
    // Convert System::String^ to std::string
    std::string name = msclr::interop::marshal_as<std::string>(playlistName);
    if (!name.empty()) {
        playlist.push_back(name); // Add to vector
    }
}

// Remove a playlist from the vector
void MusicPlayer::RemovePlaylist(System::String^ playlistName) {
    // Convert System::String^ to std::string
    std::string name = msclr::interop::marshal_as<std::string>(playlistName);

    // Find and remove the playlist from the vector
    auto it = std::find(playlist.begin(), playlist.end(), name);
    if (it != playlist.end()) {
        playlist.erase(it); // Remove from the vector
    }
}