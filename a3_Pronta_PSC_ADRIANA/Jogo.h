#include <string>

//Declara��o da classe jogo
class Jogo {
private:
    std::string nome;
    std::string genero;
    std::string descricao;
    double preco;

    //Declara��o do construtor p�blico da classe "Jogo"
public:
    Jogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco);

    double getPreco() const;

    std::string getNome() const;

    std::string getGenero() const;

    void exibirInformacoes() const;

    //M�todo que verifica se dois jogos s�o iguais
    bool operator==(const Jogo& other) const {
        return (nome == other.nome) &&
            (genero == other.genero) &&
            (descricao == other.descricao) &&
            (preco == other.preco);
    }
};



