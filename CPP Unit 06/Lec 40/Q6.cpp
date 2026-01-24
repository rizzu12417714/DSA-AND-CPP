Single File Programming Question
Problem Statement



Raju is a music enthusiast and loves to manage his music collection using a playlist manager. He wants to create a program that allows him to manage his playlist of songs. Each song in the playlist has a title, artist, and duration (in seconds).



Raju wants to implement a playlist management system using algorithms and iterators with the following features:



Features:



Add Song: Raju wants to add a new song to his playlist. He will provide the title, artist, and duration of the song.
Remove Song: Raju wants to remove a song from the playlist by providing the title of the song.
Display Playlist: Raju wants to view the details of all the songs in the playlist, including their title, artist, and duration.
Exit: Raju wants to be able to exit the program when he is done managing his playlist.


Note: This kind of question will be helpful in clearing Mettl recruitment.

Input format :
The input consists of four options: '1', '2', '3', or '4' based on the feature.

For '1' (Add Song), the title, artist, and duration of the song.

For '2' (Remove Song), the title of the song they want to remove.

For '3' (Display Playlist), the details of all the songs in the playlist.

For '4' (Exit), the program will terminate.

Output format :
The output displays the following format:

For '1' (Add Song), the program will display a confirmation message after adding the song.

For '2' (Remove Song), the program will display a confirmation message after removing the song or an error message if the song is not found.

For '3' (Display Playlist), the program will display the details of all the songs in the playlist.

For '4' (Exit), the program will display a message indicating that it is exiting.

If the choice is greater than '4': The program will print "Invalid choice".



Refer to the sample output for the formatting specifications.

Code constraints :
The title and artist of each song will be a string with a maximum length of 100 characters.

The duration of each song will be an integer between 1 and 1000 (representing the duration in seconds).

The playlist can contain a maximum of 100 songs.

Sample test cases :
Input 1 :
1
Believer
Imagine Dragons
210
1
Someone Like You
Adele
290
1
Shape of You
Ed Sheeran
230
3
4
Output 1 :
Playlist:
 Believer Imagine Dragons 210 
 Someone Like You Adele 290 
 Shape of You Ed Sheeran 230 
Exiting the program.
Input 2 :
1
Havana
Camila Cabello
240
1
Despacito
Luis Fonsi
270
3
2
Havana
3
4
Output 2 :
Playlist:
 Havana Camila Cabello 240 
 Despacito Luis Fonsi 270 
Playlist:
 Despacito Luis Fonsi 270 
Exiting the program.
Input 3 :
1
Lose Yourself
Eminem
320
3
6
4
Output 3 :
Playlist:
 Lose Yourself Eminem 320 
Invalid choice
Exiting the program.




#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Song {
    string title;
    string artist;
    int duration;
};

int main() {
    vector<Song> playlist;
    int choice;

    while (true) {
        cin >> choice;

        if (choice == 1) {
            Song s;
            cin.ignore();
            getline(cin, s.title);
            getline(cin, s.artist);
            cin >> s.duration;
            playlist.push_back(s);
        } 
        else if (choice == 2) {
            string title;
            cin.ignore();
            getline(cin, title);

            bool found = false;
            for (auto it = playlist.begin(); it != playlist.end(); ++it) {
                if (it->title == title) {
                    playlist.erase(it);
                    found = true;
                    break;
                }
            }
        } 
        else if (choice == 3) {
            cout << "Playlist:" << endl;
            for (auto it = playlist.begin(); it != playlist.end(); ++it) {
                cout << " " << it->title << " " << it->artist << " " << it->duration << " " << endl;
            }
        } 
        else if (choice == 4) {
            cout << "Exiting the program.";
            break;
        } 
        else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
