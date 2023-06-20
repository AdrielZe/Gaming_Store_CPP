#include "Jogo.h"
#include <iostream>
//Definições dos métodos e funções da classe Jogo

//Construtor que recebe 4 parâmetros
Jogo::Jogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco)
    : nome(nome), genero(genero), descricao(descricao), preco(preco) {} //<- Lista de inicialização 

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

//Método para exibir informações do jogo
void Jogo::exibirInformacoes() const {
    std::cout << "-----------------------\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Genero: " << genero << "\n";
    std::cout << "Descricao: " << descricao << "\n";
    std::cout << "Preco: " << preco << "\n";
    std::cout << "\n-----------------------\n";
}
