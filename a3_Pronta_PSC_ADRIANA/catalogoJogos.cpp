#include "catalogoJogos.h"
#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

//Definições dos métodos e funções da classe catalogoJogos

std::vector<Jogo> carrinho; //Vetor global (carrinho) que armazena objetos da classe Jogo

//Função que adiciona jogos ao carrinho
void catalogoJogos::adicionarJogoAoCarrinho(const Jogo& jogo) {
    bool alreadyInCart = false;

    for (const Jogo& game : carrinho) {
        if (game == jogo) {
            alreadyInCart = true;
            break;
        }
    }

    if (alreadyInCart) {
        std::cout << "O jogo ja esta no carrinho.\n";
    }
    else {
        carrinho.push_back(jogo);
        std::cout << "Jogo adicionado ao carrinho.\n";
    }
}

//Função que remove jogos do carinho
void catalogoJogos::removerJogoDoCarrinho(int indice) {
    if (indice >= 0 && indice < carrinho.size()) {
        carrinho.erase(carrinho.begin() + indice);
        std::cout << "Jogo removido do carrinho.\n";
    }
    else {
        std::cout << "Indice invalido.\n";
    }
}

//Função que exibe o carrinho
void catalogoJogos::exibirCarrinho() {
    if (carrinho.empty()) {
        std::cout << "O carrinho esta vazio.\n";
    }
    else {
        std::cout << "Carrinho:\n";
        for (int i = 0; i < carrinho.size(); i++) {
            std::cout << "Indice " << i + 1 << ":\n";
            carrinho[i].exibirInformacoes();
            std::cout << "\n";
        }
    }
}

//Função que finaliza a compra
void catalogoJogos::finalizarCompra() {
    if (carrinho.empty()) {
        std::cout << "O carrinho esta vazio. Nenhuma compra realizada.\n";
    }
    else {
        double total = 0.0;
        std::cout << "Itens do carrinho:\n";
        for (const Jogo& jogo : carrinho) {
            jogo.exibirInformacoes();
            total += jogo.getPreco();
        }
        int paymentOption;
        std::cout << "Total da compra: RS " << total << "\n";
        std::cout << "Qual o seu metodo de pagamento?\n";
        std::cout << "1- Pix\n";
        std::cout << "2- Cartao de credito\n";
        std::cout << "3- Voltar\n";
        std::cin >> paymentOption;

        switch (paymentOption) {
        case 1:
            std::cout << "Nosso pix: Celular (5199999999)\n";
            std::cout << "Pagamento recebido com sucesso!\n";
            std::cout << "Obrigado por comprar conosco!\n";
            carrinho.clear(); // Limpar o carrinho após a compra ser finalizada
            std::cout << "Compra finalizada. Obrigado!\n";
            break;
        case 2:
            long int cardNumber;
            int securityNumber, year;
            std::cout << "Digite o numero do cartao:\n";
            std::cin >> cardNumber;
            std::cout << "Digite o ano de validade:\n";
            std::cin >> year;
            std::cout << "Digite o numero de seguranca:\n";
            std::cin >> securityNumber;
            std::cout << "Validando compra...\n";
            std::cout << "Compra realizada com sucesso!\n";
            carrinho.clear(); // Limpar o carrinho após a compra ser finalizada
            std::cout << "Compra finalizada. Obrigado!\n";
            break;
        case 3:
            std::cout << "Voltando ao menu...\n";
            break;
        default:
            std::cout << "Opcao invalida\n";
        }
    }
}

//Função que adiciona jogos ao carrinho
void catalogoJogos::adicionarJogo(const std::string& nome, const std::string& genero, const std::string& descricao, const double& preco) {
    Jogo jogo(nome, genero, descricao, preco);
    jogos.push_back(jogo);
}

//Função que realiza a  procura de jogos por nome
void catalogoJogos::procurarJogoPorNome(const std::string& nome) {
    std::vector<Jogo> jogosEncontrados;
    std::string upperNome;
    for (int i = 0; i < nome.length(); i++) {
        upperNome += toupper(nome[i]);
    }

    for (const Jogo& jogo : jogos) {
        if (jogo.getNome() == upperNome) {
            jogosEncontrados.push_back(jogo);
        }
    }

    if (jogosEncontrados.empty()) {
        std::cout << "Nenhum jogo encontrado com esse nome. Verifique a ortografia e tente novamente.\n";
    }
    else {
        std::cout << "Jogo(s) encontrado(s):\n";
        std::cout << "Escolha uma opcao\n";
        int index = 1;
        for (const Jogo& jogo : jogosEncontrados) {
            std::cout << "Opcao " << index << ":\n";
            jogo.exibirInformacoes();
            ++index;
        }

        int option;
        std::cin >> option;
        if (option >= 1 && option <= index) {
            int selectOption;
            const Jogo& selectedGame = jogosEncontrados[option - 1];
            std::cout << "Jogo selecionado:\n";
            selectedGame.exibirInformacoes();
            std::cout << "Opcao " << 1 << ": Adicionar ao carrinho\n";
            std::cout << "Opcao " << 2 << ": Ver o carrinho\n";
            std::cout << "Opcao " << 3 << ": Ir para o checkout\n";
            std::cout << "Opcao " << 4 << ": Voltar para o menu\n";
            std::cin >> selectOption;

            if (selectOption == 1) {
                adicionarJogoAoCarrinho(selectedGame);
            }
            else if (selectOption == 2) {
                exibirCarrinho();
            }
            else if (selectOption == 3) {
                finalizarCompra();
            }
            else if (selectOption == 4) {
                std::cout << "\nVoltando para o menu...\n";
            }
        }
    }
}

//Função que realiza a procura de jogos por gênero
void catalogoJogos::procurarJogoPorGenero(const std::string& genero) {
    std::vector<Jogo> jogosEncontrados;
    std::string upperGenero;
    for (int i = 0; i < genero.length(); i++) {
        upperGenero += toupper(genero[i]);
    }
    for (const Jogo& jogo : jogos) {
        if (jogo.getGenero() == upperGenero) {
            jogosEncontrados.push_back(jogo);
        }
    }

    if (jogosEncontrados.empty()) {
        std::cout << "Nenhum jogo encontrado para o genero especificado.\n";
    }
    else {
        std::cout << "\n";
        std::cout << "\nJogo(s) encontrado(s):\n";
        std::cout << "\n\nEscolha uma opcao\n\n";
        int index = 1;
        for (const Jogo& jogo : jogosEncontrados) {
            std::cout << "\nOpcao " << index << ":\n";
            jogo.exibirInformacoes();
            ++index;
        }

        int option;
        std::cin >> option;
        if (option >= 1 && option <= index) {
            int selectOption;
            const Jogo& selectedGame = jogosEncontrados[option - 1];
            std::cout << "Jogo selecionado:\n";
            selectedGame.exibirInformacoes();
            std::cout << "Opcao " << 1 << ": Adicionar ao carrinho\n";
            std::cout << "Opcao " << 2 << ": Ver o carrinho\n";
            std::cout << "Opcao " << 3 << ": Finalizar compra\n";
            std::cout << "Opcao " << 4 << ": Voltar para o menu\n";
            std::cin >> selectOption;

            if (selectOption == 1) {
                adicionarJogoAoCarrinho(selectedGame);
            }
            else if (selectOption == 2) {
                exibirCarrinho();
            }
            else if (selectOption == 3) {
                finalizarCompra();
            }
            else if (selectOption == 4) {
                std::cout << "Voltando para o menu...\n";
            }
            else {
                std::cout << "Opcao invalida\n";
            }
        }
    }
}

//Função que exibe os gêneros de jogos disponíveis
void catalogoJogos::exibirGenerosDisponiveis() {
    std::cout << "Gêneros disponíveis:\n";
    std::vector<std::string> generos;
    for (const Jogo& jogo : jogos) {
        std::string genero = jogo.getGenero();
        // Verificar se o gênero já foi adicionado à lista
        auto it = std::find(generos.begin(), generos.end(), genero);
        if (it == generos.end()) {
            generos.push_back(genero);
        }
    }

    // Exibir os gêneros disponíveis
    for (int i = 0; i < generos.size(); i++) {
        std::cout << "- " << generos[i] << "\n";
    }
}

//Função que exibe todos os jogos cadastrados no catálogo
void catalogoJogos::verTodosOsJogos() {
    std::cout << "\n";
    std::cout << "\nJogo(s) encontrado(s):\n";
    std::cout << "\n\nEscolha uma opcao\n\n";
    int index = 1;
    for (const Jogo& jogo : jogos) {
        std::cout << "\nOpcao " << index << ":\n";
        jogo.exibirInformacoes();
        ++index;
    }

    int option;
    std::cin >> option;

    if (option >= 0 && option <= index + 1) {
        int selectOption;
        const Jogo& selectedGame = jogos[option - 1];
        std::cout << "Jogo selecionado:\n";
        selectedGame.exibirInformacoes();
        std::cout << "Opcao " << 1 << ": Adicionar ao carrinho\n";
        std::cout << "Opcao " << 2 << ": Ver o carrinho\n";
        std::cout << "Opcao " << 3 << ": Finalizar compra!\n";
        std::cout << "Opcao " << 4 << ": Voltar para o menu\n";
        std::cin >> selectOption;
        if (selectOption == 1) {
            adicionarJogoAoCarrinho(selectedGame);
        }
        else if (selectOption == 2) {
            exibirCarrinho();
        }
        else if (selectOption == 3) {
            finalizarCompra();
        }
        else if (selectOption == 4) {
            std::cout << "Voltando para o menu...\n";
        }
        else {
            std::cout << "Opçao invalida.\n";
        }
    }
}

