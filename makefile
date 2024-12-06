# Compilator și flag-uri
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Fisiere sursă și binar
SOURCES = main.cpp GameData.cpp GameLogic.cpp
HEADERS = GameData.hpp GameLogic.hpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = pacman_game

# Regulă implicită
all: $(TARGET)

# Regulă pentru crearea executabilului
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regulă pentru fișierele obiect
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Curățare fișiere generate
clean:
	rm -f $(OBJECTS) $(TARGET)

# Phony targets pentru a evita conflicte cu fișiere reale
.PHONY: all clean

