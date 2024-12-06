/// \file GameData.hpp
/// \brief Declarațiile clasei GameData pentru gestionarea datelor jucătorilor.
/// \author [Strechi Marian]
/// \date 2024

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

/**
 * \class GameData
 * \brief Reprezintă datele unui jucător, incluzând numele și scorul acestuia.
 */
class GameData {
public:
    /// \brief Numele jucătorului.
    std::string playerName;

    /// \brief Scorul jucătorului.
    int score;

    /**
     * \brief Constructor implicit pentru clasa GameData.
     */
    GameData();

    /**
     * \brief Constructor de copiere.
     * \param other Obiectul GameData care va fi copiat.
     */
    GameData(const GameData& other);

    /**
     * \brief Constructor cu parametri.
     * \param name Numele jucătorului.
     * \param score Scorul jucătorului.
     */
    GameData(std::string name, int score);

    /**
     * \brief Operator de atribuire.
     * \param other Obiectul GameData care va fi atribuit.
     * \return Referință la obiectul curent.
     */
    GameData& operator=(const GameData& other);

    /**
     * \brief Operator de comparare a egalității.
     * \param other Obiectul GameData cu care se compară.
     * \return True dacă obiectele sunt egale, altfel false.
     */
    bool operator==(const GameData& other) const;

    /**
     * \brief Suprascrierea operatorului de intrare.
     * \param input Fluxul de intrare.
     * \param data Obiectul GameData de modificat.
     * \return Referință către fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& input, GameData& data);

    /**
     * \brief Suprascrierea operatorului de ieșire.
     * \param output Fluxul de ieșire.
     * \param data Obiectul GameData de afișat.
     * \return Referință către fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& output, const GameData& data);

    /**
     * \brief Adaugă un nou jucător în lista globală de jucători.
     * \param playerName Numele jucătorului.
     * \param score Scorul jucătorului.
     */
    static void addPlayer(const std::string& playerName, int score);

    /**
     * \brief Sortează lista globală de jucători în ordine descrescătoare a scorului.
     */
    static void sortPlayersByScore();

    /**
     * \brief Găsește un jucător în lista globală după nume.
     * \param playerName Numele jucătorului căutat.
     * \return Un smart pointer către obiectul GameData dacă este găsit, nullptr altfel.
     */
    static std::shared_ptr<GameData> findPlayer(const std::string& playerName);

    /**
     * \brief Afișează toți jucătorii din lista globală.
     */
    static void displayAllPlayers();

private:
    /// \brief Lista globală de jucători stocată ca smart pointers.
    static std::vector<std::shared_ptr<GameData>> players;
};
