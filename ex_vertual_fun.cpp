#include <iostream>
#include <string>
using namespace std;

class cwh {
protected:
    string title;
    float rating;
public:
    // Accept string by value (or reference) instead of pointer
    cwh(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {
        // Virtual function for polymorphism
    }
};

class cwh_video : public cwh {
    float video_length;
public:
    cwh_video(string s, float r, float vl) : cwh(s, r) {
        video_length = vl;
    }
    void display() {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length of the video is: " << video_length << " minutes" << endl;
    }
};

class cwh_text : public cwh {
    int words;
public:
    cwh_text(string s, float r, int wl) : cwh(s, r) {
        words = wl;
    }
    void display() {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial: " << words << " words" << endl;
    }
};

int main() {
    string title;
    float rating, vlen;
    int words;

    // For video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.5;
    cwh_video djvideo(title, rating, vlen);

    // For text
    title = "Django tutorial text";
    words = 433;
    rating = 4.6;
    cwh_text djtext(title, rating, words);

    // Using base class pointer for polymorphism
    cwh* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    // Call virtual function
    tuts[0]->display();
    cout << endl;
    tuts[1]->display();

    return 0;
}
