#include <vector>
#include "Jogo.h"

//Declaração da classe catalogoJogos

class catalogoJogos {
private:
    //Vetor privado de objetos do tipo Jogo
    std::vector<Jogo> jogos;

    //Métodos públicos
public:
    void adicionarJogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco);
    void adicionarJogoAoCarrinho(const Jogo& jogo);
    void removerJogoDoCarrinho(int indice);
    void exibirCarrinho();
    void finalizarCompra();
    void procurarJogoPorNome(const std::string& nome);
    void procurarJogoPorGenero(const std::string& genero);
    void verTodosOsJogos();
    void exibirGenerosDisponiveis();

};

