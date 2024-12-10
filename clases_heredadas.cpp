#include <iostream>
#include <string>
#include<unistd.h>
#define SECOND 1000000
using namespace std;

class User{
    protected:
        string username;
        int secret_key;
        int ip;
    
    public:
        User(string u, int sk, int i){
            username = u;
            secret_key = sk;
            ip = i;
        }
        void play_add(){
            cout << "Playing an add..." << endl;
            usleep(3 * SECOND);
        }
};

class Free_User: public User{
    private:
        Free_User();
        int counter = 0;
    public:
        void play_music(){
            counter ++;
            if (counter % 4){
                play_music();
            }
            else{
                play_add();
            }
            cout << "Playing a song..." << endl;
        }
};

class Premium_User: public User{
    public:
        void play_music(){
            cout << "Playing a song..." << endl;
        }
};


int main(){
    Premium_User mirko("mirkogenovesi", 32346781095, 1921680112);
}