#include <iostream>

using namespace std;

class Livro {
    private:
        int id;
        string nome;
        string sinopse;
    public:
        Livro(string nm, string sp){
            id = id + 1; 
            nome = nm;
            sinopse = sp;
        }
        int getId(); 
        string getNome();
        string getSinopse();
};

int Livro::getId(){ return id;  }
string Livro::getNome(){ return nome; };
string Livro::getSinopse(){ return sinopse; }

int main()
{
    cout << "Livraria Anhembi Morumbi" << endl;
    Livro lv("Chapeuzinho vermelho", "Livro legal, muito bom");
    cout << "Dados do livro: " << endl << lv.getNome();

    return EXIT_SUCCESS;
}