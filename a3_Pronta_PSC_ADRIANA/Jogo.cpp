#include "Jogo.h"
#include <iostream>
//Defini��es dos m�todos e fun��es da classe Jogo

//Construtor que recebe 4 par�metros
Jogo::Jogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco)
    : nome(nome), genero(genero), descricao(descricao), preco(preco) {} //<- Lista de inicializa��o 

//Getters
std::string Jogo::getNome() const {
    return nome;
}
std::string Jogo::getGenero() const {
    return genero;
}
double Jogo::getPreco() const {
    return preco;
}

//M�todo para exibir informa��es do jogo
void Jogo::exibirInformacoes() const {
    std::cout << "-----------------------\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Genero: " << genero << "\n";
    std::cout << "Descricao: " << descricao << "\n";
    std::cout << "Preco: " << preco << "\n";
    std::cout << "\n-----------------------\n";
}
