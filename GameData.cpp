/// \file GameData.cpp
/// \brief Implementarea clasei GameData.
/// \author [Strechi Marian]
/// \date 2024
/// \details Conține implementarea metodelor pentru gestionarea datelor despre jucători.

#include "GameData.hpp"

/**
 * \brief Vector care stochează lista de jucători.
 */
std::vector<std::shared_ptr<GameData>> GameData::players;

/**
 * \brief Constructor implicit.\n
 * \details Inițializează un jucător cu numele "Unknown" și scorul 0.
 */
GameData::GameData() : playerName("Unknown"), score(0) {}

/**
 * \brief Constructor de copiere.
 * \param other Obiectul GameData care va fi copiat.
 */
GameData::GameData(const GameData& other) : playerName(other.playerName), score(other.score) {}

/**
 * \brief Constructor parametrizat.\n
 * \param name Numele jucătorului.\n
 * \param score Scorul jucătorului.
 */
GameData::GameData(std::string name, int score) : playerName(name), score(score) {}

/**
 * \brief Operator de atribuire.
 * \param other Obiectul GameData care va fi atribuit.
 * \return Referință la obiectul curent.
 */
GameData& GameData::operator=(const GameData& other) {
    if (this != &other) {
        playerName = other.playerName;
        score = other.score;
    }
    return *this;
}

/**
 * \brief Operator de egalitate.\n
 * \param other Obiectul GameData cu care se compară.\n
 * \return `true` dacă obiectele sunt egale, altfel `false`.
 */
bool GameData::operator==(const GameData& other) const {
    return (playerName == other.playerName && score == other.score);
}

/**
 * \brief Citire obiect GameData din flux de intrare.\n
 * \param input Fluxul de intrare.\n
 * \param data Obiectul GameData care va fi citit.\n
 * \return Fluxul de intrare.
 */
std::istream& operator>>(std::istream& input, GameData& data) {
    std::cout << "Enter player name: ";
    input >> data.playerName;
    std::cout << "Enter score: ";
    input >> data.score;
    return input;
}

/**
 * \brief Scriere obiect GameData în flux de ieșire.\n
 * \param output Fluxul de ieșire.\n
 * \param data Obiectul GameData care va fi scris.\n
 * \return Fluxul de ieșire.
 */
std::ostream& operator<<(std::ostream& output, const GameData& data) {
    output << "Player: " << data.playerName << ", Score: " << data.score;
    return output;
}

/**
 * \brief Adaugă un jucător nou în lista de jucători.
 * \param playerName Numele jucătorului.\n
 * \param score Scorul jucătorului.
 */
void GameData::addPlayer(const std::string& playerName, int score) {
    players.push_back(std::make_shared<GameData>(playerName, score));
}

/**
 * \brief Găsește un jucător în lista de jucători.\n
 * \param playerName Numele jucătorului căutat.\n
 * \return Un pointer către obiectul GameData al jucătorului găsit sau `nullptr` dacă nu este găsit.
 */
std::shared_ptr<GameData> GameData::findPlayer(const std::string& playerName) {
    auto it = std::find_if(players.begin(), players.end(), [&](const std::shared_ptr<GameData>& data) {
        return data->playerName == playerName;
        });
    return (it != players.end()) ? *it : nullptr;
}

/**
 * \brief Sortează lista de jucători după scor în ordine descrescătoare.
 */
void GameData::sortPlayersByScore() {
    std::sort(players.begin(), players.end(), [](const std::shared_ptr<GameData>& a, const std::shared_ptr<GameData>& b) {
        return a->score > b->score;
        });
}

/**
 * \brief Afișează toți jucătorii din lista de jucători.
 */
void GameData::displayAllPlayers() {
    for (const auto& player : players) {
        std::cout << *player << std::endl;
    }
}
