#pragma once

/*
General Program Flow Breakdown:

1) Left-Side Listbox (MusicPlayer):
   - The listbox is called MusicPlayer and holds buttons for creating and deleting playlists.
   - Playlists are stored in a vector, with basic class methods to add or remove them.
   - The MusicPlayer.cpp file implements these functions.

2) Main Center View (Song_Holder):
   - The Song_Holder listbox displays songs for a selected playlist.
   - Users can:
     - Add songs to a playlist.
     - Delete songs from a playlist.
     - View all songs for a specific playlist.
   - The Songs class handles adding/removing songs, storing them in a vector, and tracking the index of the currently playing song.
   - The Songs.cpp file implements these functions.

3) Bottom Panel (btncontrols):
   - The panel displays playback controls (Play, Forward, Backward) and updates the UI to show the current song.
   - Buttons use `currentPlaylistName` and `currentSongIndex` to navigate the playlist.

MyForm.h Breakdown:
   - At the top: Class objects are initialized (MusicPlayer, Songs) in the InitializeComponent function.
   - Private Variables:
       - `currentPlaylistName`: Tracks the playlist currently being viewed/played.
       - `currentSongIndex`: Tracks the index of the currently playing song.
   - GUI Methods:
       - Methods like `viewplaylistbtn_Click` and `playbtn_Click` access backend data and update the GUI.
   - String Conversion:
       - Conversions between `System::String^` (GUI) and `std::string` (C++).

Flow Chart (Visually):
1. Enter playlist name -> Click "Create" -> Playlist appears in the listbox (left).
2. Add a song (playlist, name, artist) -> Click "Add Song" -> Songs appear in the center listbox.
3. View playlist -> Enter playlist name -> Click "View Playlist" -> Only the selected playlist's songs are displayed.
4. Playback controls:
   - Play: Starts the first song in the playlist.
   - Forward/Back: Navigates to the next/previous song in the playlist.

Error Handling:
   - Validates inputs for playlist and song names.
   - Displays warning messages for invalid actions (e.g., selecting an empty playlist).
*/

