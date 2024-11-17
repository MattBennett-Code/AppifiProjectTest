#pragma once
#include <vector>
#include <string>
#include <unordered_map>

class Songs {
private:
	struct Song {
		std::string name;
		std::string artist;
	};

	std::unordered_map<std::string, std::vector<Song>> playlists;
	
public:
	std::vector<std::string> getSongsInPlaylist(System::String^ playlistName);
	void addSong(System::String^ playlistName, System::String^ songName, System::String^ artistName = "");
	void removeSong(System::String^ playlistName, System::String^ songName);
};
