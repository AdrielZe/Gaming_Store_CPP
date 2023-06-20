#include <string>

//Declaração da classe jogo
class Jogo {
private:
    std::string nome;
    std::string genero;
    std::string descricao;
    double preco;

    //Declaração do construtor público da classe "Jogo"
public:
    Jogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco);

    double getPreco() const;

    std::string getNome() const;

    std::string getGenero() const;

    void exibirInformacoes() const;

    //Método que verifica se dois jogos são iguais
    bool operator==(const Jogo& other) const {
        return (nome == other.nome) &&
            (genero == other.genero) &&
            (descricao == other.descricao) &&
            (preco == other.preco);
    }
};



