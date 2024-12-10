#include <iostream>
#include <string>
using namespace std;

class Graphics_Card{
    private:
        string model;
        int cuda_cores;
        int vram; //MB
        float freq; //GHz

    public:
        Graphics_Card(string m, int cc, int vr, float f) {
            model = m;
            cuda_cores = cc;
            vram = vr;
            freq = f;
        }
        void process_graphics(){
            cout << "Processing Graphics on " << model << endl;
        }

        void train_model(int vram_usage){
            if (vram_usage <= vram){
                cout << "Trainning model...\nMemory usage: " <<vram_usage <<"/" <<vram <<"MB" << endl;
                cout << "Model succesfully trained!" << endl;
            }
            else{
                cout << "Not enough vram available, trying to allocate " << vram_usage << "MB but only " << vram << "MB available" <<endl;
            }
        }

        void mostrarInfo(){
            cout << "Model: " << model << endl;
            cout << "Memory: " << vram << " MB" << endl;
            cout << "CUDA Cores: " << cuda_cores << endl;
            cout << "Frequency: " << freq << " GHz" << endl;
    }
};
    
int main(){
    // Es horrible que no se puedan pasar los argumentos así:
    // Graphics_Card card1("NVIDIA RTX 3080", cuda_cores=10240, vram=8704, freq=1.71);
    
    Graphics_Card card1("NVIDIA RTX 3080", 10240, 8704, 1.71);
    Graphics_Card card2("NVIDIA RTX 3090", 24576, 10496, 1.70);

    card1.process_graphics();
    card2.train_model(1024);
}
