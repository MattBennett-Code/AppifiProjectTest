#include "Songs.h"
#include <msclr/marshal_cppstd.h>

void Songs::addSong(System::String^ playlistName, System::String^ songName, System::String^ artistName) {
	// Convert managed strings to std::string
	std::string pName = msclr::interop::marshal_as<std::string>(playlistName);
	std::string sName = msclr::interop::marshal_as<std::string>(songName);
	std::string aName = msclr::interop::marshal_as<std::string>(artistName);

	// Add the song to the specified playlist
	playlists[pName].push_back({ sName, aName });
}

void Songs::removeSong(System::String^ playlistName, System::String^ songName) {
    // Convert managed strings to std::string
    std::string pName = msclr::interop::marshal_as<std::string>(playlistName);
    std::string sName = msclr::interop::marshal_as<std::string>(songName);

    // Find the playlist
    auto it = playlists.find(pName);
    if (it != playlists.end()) {
        // Find and remove the song in the playlist
        auto& songList = it->second;
        auto songIt = std::find_if(songList.begin(), songList.end(), [&sName](const Song& song) {
            return song.name == sName;
            });

        if (songIt != songList.end()) {
            songList.erase(songIt);
        }
    }
}

std::vector<std::string> Songs::getSongsInPlaylist(System::String^ playlistName) {
    // Convert the managed string to a std::string
    std::string pName = msclr::interop::marshal_as<std::string>(playlistName);

    // Check if the playlist exists in the map
    auto it = playlists.find(pName);
    if (it != playlists.end()) {
        // Collect the song names
        std::vector<std::string> songNames;
        for (const auto& song : it->second) {
            songNames.push_back(song.name + " by " + song.artist);
        }
        return songNames;
    }

    // Return an empty vector if the playlist is not found
    return {};
}
