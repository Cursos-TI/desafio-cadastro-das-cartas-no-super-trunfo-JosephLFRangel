#include <stdio.h>
int main(){
  printf("Desafio Super Trunfo - Países \n");
   #include <iostream>
#include <vector>
#include <string>

class Cidade {
public:
    std::string codigo;
    int populacao;
    float area; // em km²
    float pib; // em bilhões
    int numPontosTuristicos;

    Cidade(std::string cod, int pop, float ar, float p, int numPontos)
        : codigo(cod), populacao(pop), area(ar), pib(p), numPontosTuristicos(numPontos) {}

    void exibirDados() {
        std::cout << "Código: " << codigo << std::endl;
        std::cout << "População: " << populacao << std::endl;
        std::cout << "Área: " << area << " km²" << std::endl;
        std::cout << "PIB: " << pib << " bilhões" << std::endl;
        std::cout << "Número de Pontos Turísticos: " << numPontosTuristicos << std::endl;
        std::cout << std::endl;
    }
};

void cadastrarCidades(std::vector<Cidade>& cidades) {
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int i = 1; i <= 4; i++) {
            std::string codigo = std::string(1, estado) + (i < 10 ? "0" + std::to_string(i) : std::to_string(i));
            std::cout << "Cadastrando cidade para o código: " << codigo << std::endl;

            int populacao;
            float area, pib;
            int numPontosTuristicos;

            std::cout << "Digite a população: ";
            std::cin >> populacao;

            std::cout << "Digite a área (em km²): ";
            std::cin >> area;

            std::cout << "Digite o PIB (em bilhões): ";
            std::cin >> pib;

            std::cout << "Digite o número de pontos turísticos: ";
            std::cin >> numPontosTuristicos;

            Cidade cidade(codigo, populacao, area, pib, numPontosTuristicos);
            cidades.push_back(cidade);
            std::cout << "Cidade cadastrada com sucesso!\n" << std::endl;
        }
    }
}

int main() {
    std::vector<Cidade> cidadesCadastradas;
    cadastrarCidades(cidadesCadastradas);

    std::cout << "Dados das cidades cadastradas:" << std::endl;
    for (const auto& cidade : cidadesCadastradas) {
        cidade.exibirDados();
    }

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
