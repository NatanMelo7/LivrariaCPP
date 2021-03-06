#include <iostream>
#include <vector>

using namespace std;

class Livro {
    private:
        int id = 0;
        string nome;
        string sinopse;
    public:
        Livro(){
            id = id + 1;
        }
        int getId();
        string getNome();
        string getSinopse();
        void setNome(string n);
        void setSinopse(string s);
};

int Livro::getId(){ return id; };
string Livro::getNome(){ return nome; };
string Livro::getSinopse(){ return sinopse; }
void Livro::setNome(string n){ nome = n;}
void Livro::setSinopse(string s){ sinopse = s; }

class Database {
    private:
        vector<Livro> database;
    public:
        void addLivro(Livro livro);

};

void Database::addLivro(Livro livro){ database.push_back(livro); }




int main()
{
    cout << "Livraria Anhembi Morumbi" << endl;

    Livro lv;
    Database database;
    string nome_livro;
    string sinopse_livro;

    cout << "Digite o nome do Livro: " << endl;
    getline(cin, nome_livro);
    lv.setNome(nome_livro);
    
    cout << "Digite a sinopse deste livro: " << endl;
    getline(cin, sinopse_livro);
    lv.setSinopse(sinopse_livro);

    cout << "Dados do livro: " << endl;
    cout << lv.getId() << " - " << lv.getNome() << " - " << lv.getSinopse() << endl;

    database.addLivro(lv);

    return EXIT_SUCCESS;
}