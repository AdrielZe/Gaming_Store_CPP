#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "catalogoJogos.h"

void exibeMenuDaLoja(catalogoJogos& catalogo); //Declaração da função que exibe o menu da loja

int main() {

    catalogoJogos catalogo; //Início do catálogo de jogos
    catalogo.adicionarJogo("CRASH", "ACAO", "the best game", 19.99);
    catalogo.adicionarJogo("FIFA", "ACAO", "FOOTBALL", 39.99);
    catalogo.adicionarJogo("GOD OF WAR", "AVENTURA", "Run an adventure with Kratos", 39.60);
    catalogo.adicionarJogo("MIDNIGHT CLUB", "CORRIDA", "Are you the best of the streets?", 25.99);
    catalogo.adicionarJogo("HOGWARTS LEGACY", "AVENTURA", "Enter the world of Harry Potter in a different way.", 50.25);
    catalogo.adicionarJogo("SUPER MARIO BROS.", "PLATAFORMA", "Um classico jogo de plataforma com o Mario", 19.99);
    catalogo.adicionarJogo("THE LEGEND OF ZELDA: BREATH OF THE WILD", "ACAO E AVENTURA", "Uma incrível aventura em mundo aberto", 59.99);
    catalogo.adicionarJogo("GRAND THEFT AUTO V", "ACAO E MUNDO ABERTO", "Explore a cidade ficticia de Los Santos", 39.99);
    catalogo.adicionarJogo("MINECRAFT", "SANDBOX", "Crie e explore seu proprio mundo de blocos", 29.99);
    catalogo.adicionarJogo("RED DEAD REDEMPTION 2", "ACAO E MUNDO ABERTO", "Viva como um fora-da-lei no Velho Oeste", 49.99);
    catalogo.adicionarJogo("THE WITCHER 3: WILD HUNT", "RPG DE AÇÃO", "Embarque em uma aventura epica como o bruxo Geralt de Rivia", 39.99);
    catalogo.adicionarJogo("FORTNITE", "BATTLE ROYALE", "Um jogo de batalha em equipe com construcao de estruturas", 0.00);
    catalogo.adicionarJogo("CALL OF DUTY: MODERN WARFARE", "TIRO EM PRIMEIRA PESSOA", "Experimente a intensidade de combate moderno", 59.99);
    catalogo.adicionarJogo("SUPER SMASH BROS. ULTIMATE", "LUTA", "Reuna seus personagens favoritos para batalhas épicas", 59.99);
    catalogo.adicionarJogo("FIFA 22", "ESPORTES", "Jogue futebol com as ultimas atualizacoes de times e jogadores", 59.99);
    catalogo.adicionarJogo("ASSASSIN'S CREED VALHALLA", "ACAO E AVENTURA", "Viva a era dos vikings em uma jornada epica", 49.99);
    catalogo.adicionarJogo("RESIDENT EVIL VILLAGE", "SURVIVAL HORROR", "Enfrente horrores em uma vila amaldicoada", 49.99);
    catalogo.adicionarJogo("FINAL FANTASY VII REMAKE", "RPG DE AÇÃO", "Reviva a aventura classica de Cloud e seus aliados", 59.99);
    catalogo.adicionarJogo("POKEMON SWORD/SHIELD", "RPG", "Capture e treine Pokemon em uma nova regiao", 59.99);
    catalogo.adicionarJogo("SUPER MARIO ODYSSEY", "PLATAFORMA", "Acompanhe Mario em uma viagem pelo mundo para salvar a Peach", 49.99);
    catalogo.adicionarJogo("GEARS 5", "TIRO EM TERCEIRA PESSOA", "Lute contra os inimigos em um mundo pos-apocaliptico", 39.99);
    catalogo.adicionarJogo("THE LAST OF US PART II", "ACAO E AVENTURA", "Sobreviva em um mundo pos-apocaliptico infestado de criaturas", 59.99);
    catalogo.adicionarJogo("SUPER MARIO 3D WORLD + BOWSER'S FURY", "PLATAFORMA", "Uma aventura multiplayer com o Mario e seus amigos", 59.99);
    catalogo.adicionarJogo("THE LEGEND OF ZELDA: SKYWARD SWORD HD", "ACAO E AVENTURA", "Desvende os segredos dos ceus e salve a Princesa Zelda", 59.99);
    catalogo.adicionarJogo("CYBERPUNK 2077", "RPG DE ACAOO", "Mergulhe em um mundo distopico futurista repleto de acao", 49.99);
    catalogo.adicionarJogo("AMONG US", "MULTIJOGADOR ONLINE", "Descubra o impostor em uma nave espacial", 4.99);
    catalogo.adicionarJogo("HADES", "RPG DE ACAO", "Escape do Submundo em uma jornada desafiadora", 24.99);
    catalogo.adicionarJogo("ANIMAL CROSSING: NEW HORIZONS", "SIMULACAO DE VIDA", "Crie sua propria ilha e compartilhe momentos com seus vizinhos animais", 59.99);
    catalogo.adicionarJogo("CRASH BANDICOOT 4: IT'S ABOUT TIME", "PLATAFORMA", "Ajude Crash a salvar o multiverso do maligno Dr. Neo Cortex", 59.99);
    catalogo.adicionarJogo("GHOST OF TSUSHIMA", "ACAO E AVENTURA", "Lute como um samurai durante a invasão mongol no Japao feudal", 59.99);
    catalogo.adicionarJogo("MARVEL'S SPIDER-MAN: MILES MORALES", "ACAO E AVENTURA", "Assuma o papel de Miles Morales e proteja Nova York", 49.99);
    catalogo.adicionarJogo("DEMON'S SOULS", "RPG DE ACAO", "Enfrente desafios implacaveis em um mundo sombrio e brutal", 69.99);
    catalogo.adicionarJogo("RESIDENT EVIL 3 REMAKE", "SURVIVAL HORROR", "Sobreviva ao apocalipse zumbi em Raccoon City", 59.99);
    catalogo.adicionarJogo("MARVEL'S AVENGERS", "ACAO E AVENTURA", "Monte sua equipe de super-herois e proteja o mundo", 59.99);
    catalogo.adicionarJogo("DOOM (2016)", "TIRO EM PRIMEIRA PESSOA", "Encare demonios em uma frenetica e brutal matanca", 19.99);
    catalogo.adicionarJogo("CRASH TEAM RACING NITRO-FUELED", "CORRIDA", "Acelere em pistas emocionantes com os personagens de Crash Bandicoot", 39.99);
    catalogo.adicionarJogo("STAR WARS JEDI: FALLEN ORDER", "ACAO E AVENTURA", "Torne-se um Jedi e lute contra o Imperio Galactico", 59.99);
    catalogo.adicionarJogo("RAINBOW SIX SIEGE", "TIRO EM PRIMEIRA PESSOA", "Torne-se um sniper", 30.99);
    catalogo.adicionarJogo("GOD OF WAR (2018)", "ACAO E AVENTURA", "Acompanhe Kratos em sua jornada mitologica para se redimir", 39.99);
    catalogo.adicionarJogo("UNCHARTED 4: A THIEF'S END", "ACAO E AVENTURA", "Participe de uma emocionante caçada ao tesouro com Nathan Drake", 19.99);
    catalogo.adicionarJogo("HORIZON ZERO DAWN", "ACAO E AVENTURA", "Explore um mundo pos-apocaliptico habitado por maquinas", 39.99);
    catalogo.adicionarJogo("PERSONA 5", "RPG", "Viva uma vida dupla como estudante e ladrao fantasma", 49.99);
    catalogo.adicionarJogo("BLOODBORNE", "RPG DE ACAO", "Enfrente criaturas grotescas em uma cidade amaldicoada", 19.99);
    catalogo.adicionarJogo("NIER: AUTOMATA", "RPG DE ACAO", "Descubra a historia dos androides em um mundo pos-apocaliptico", 39.99);
    catalogo.adicionarJogo("OVERWATCH", "TIRO EM PRIMEIRA PESSOA", "Lute em equipe e defenda o futuro em um mundo em conflito", 19.99);
    catalogo.adicionarJogo("MORTAL KOMBAT 11", "LUTA", "Participe de batalhas sangrentas com os personagens iconicos de Mortal Kombat", 39.99);
    catalogo.adicionarJogo("RESIDENT EVIL 7: BIOHAZARD", "SURVIVAL HORROR", "Viva um pesadelo aterrorizante em uma mansao isolada", 29.99);
    catalogo.adicionarJogo("THE ELDER SCROLLS V: SKYRIM", "RPG DE ACAO", "Explore uma vasta terra de fantasia repleta de aventuras", 39.99);
    catalogo.adicionarJogo("THE SIMS 4", "SIMULACAO DE VIDA", "Crie e controle a vida virtual de seus personagens", 39.99);
    catalogo.adicionarJogo("DOOM ETERNAL", "TIRO EM PRIMEIRA PESSOA", "Lute contra hordas demoniacas e salve a humanidade", 59.99);
    catalogo.adicionarJogo("CUPHEAD", "PLATAFORMA", "Supere desafios em um estilo de animacao dos anos 1930", 19.99);
    catalogo.adicionarJogo("DARK SOULS III", "RPG DE ACAO", "Enfrente monstros e desafios em um mundo sombrio e implacavel", 19.99);
    catalogo.adicionarJogo("FALLOUT 4", "RPG DE ACAO", "Sobreviva em um mundo pos-apocaliptico devastado pela guerra nuclear", 29.99);//Fim do catálogo de jogos

    bool loggedIn = true; //Variavel que controla se o usuário(cliente) esta logado

    if (loggedIn) { //Se estiver logado com sucesso, aparece uma mensagem de usuario logado, é perguntado o que ele deseja fazer, e o menu é aberto;
        std::cout << "Usuario logado com sucesso!\n";
        std::cout << "\n-------------------------------------\n";
        std::cout << "Bem-vindo a MELHOR loja de jogos.\n";
        std::cout << "O que voce deseja fazer agora?\n";
        int option;

        do {  //Menu principal
            std::cout << "1- Procurar por um jogo\n";
            std::cout << "2- Ver o carrinho\n";
            std::cout << "3- Ir para o checkout\n";
            std::cout << "4- Sair\n";
            std::cout << "-------------------------------------\n";

            std::cin >> option;
            if (std::cin.fail()) { //verifica se o tipo de dado digitado pelo usuário é do mesmo tipo de dado da variável.
                std::cout << "Entrada invalida. Tente novamente.\n";
                std::cin.clear();//Limpa o cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//ignora os caracteres que foram digitados
            }

            switch (option) {
            case 1:
                exibeMenuDaLoja(catalogo);
                break;
            case 2:
                catalogo.exibirCarrinho();
                break;
            case 3:
                catalogo.finalizarCompra();
                break;
            case 4:
                std::cout << "Finalizando a loja. Muito obrigado por comprar conosco!\n";
                break;
            default:
                std::cout << "Opcao invalida.\n";
                break;
            }
        } while (option != 4);//menu principal fica aberto até que o usuário escolha a opção 4-sair
    }
    return 0;
}


void exibeMenuDaLoja(catalogoJogos& catalogo) {
    int option;
    std::string nome;
    std::string genero;
    std::cout << "\n-------------------------------------\n";
    std::cout << "Voce deseja procurar um jogo:\n";
    std::cout << "1- Por nome\n";
    std::cout << "2- Por genero\n";
    std::cout << "3- Ver todos os jogos disponiveis\n";
    std::cout << "\n-------------------------------------\n";

    std::cin >> option;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    switch (option) {
    case 1:
        std::cout << "Qual o nome do jogo que voce quer?\n";
        while (getline(std::cin, nome)) //Controla o bug de ser necessario digitar 2 vezes a entrada ao usar getline
            if (nome != "") {
                break;
            }
        catalogo.procurarJogoPorNome(nome);
        break;
    case 2:
        catalogo.exibirGenerosDisponiveis();
        std::cout << "Por qual genero de jogo voce quer procurar? (digite)\n";
        while (getline(std::cin, genero))
            if (genero != "") {
                break;
            }
        catalogo.procurarJogoPorGenero(genero);
        break;
    case 3:
        catalogo.verTodosOsJogos();
        break;
    default:
        std::cout << "Opcao invalida. Digite uma opcao valida.\n";
    }
}
