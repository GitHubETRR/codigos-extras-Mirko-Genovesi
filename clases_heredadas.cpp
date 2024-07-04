#include <iostream>
#include <string>
using namespace std;


class User{
    private:
        string username;
        int secret_key;
        int ip;
    
    public:
        void play_add(){
            cout << "Playing an add..." << endl;
            delay(3);
        }
};


class Free_User : public User{
    private:
        int counter = 0;
    public:
        void play_music(){
            if (counter % 3){
                play_add();
            }
            else{
                play_music();
            }
            cout << "Playing a song..." << endl;
            counter++;
            //poner que si el contador es divisible por 3 llame a play_add()
        }
};


class Premium_User : public User{
    public:
        void play_music(){
            cout << "Playing a song..." << endl;
        }
};


int main(){
    
}