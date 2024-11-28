# Compiler
CXX = g++
CXXFLAGS = -Iinclude -std=c++17 -Wall

# Directoare
SRC_DIR = src
LIB_DIR = lib
INCLUDE_DIR = include

# Output
OUT_DIR = bin
OUT_FILE = $(OUT_DIR)/game

# Biblioteca statică
LIBRARY = $(OUT_DIR)/libgame.a

# Fișiere sursă
LIB_SOURCES = $(wildcard $(LIB_DIR)/*.cpp)
MAIN_SOURCE = $(wildcard $(SRC_DIR)/*.cpp)

# Fișiere obiect
LIB_OBJECTS = $(LIB_SOURCES:$(LIB_DIR)/%.cpp=$(OUT_DIR)/%.o)
MAIN_OBJECT = $(MAIN_SOURCE:$(SRC_DIR)/%.cpp=$(OUT_DIR)/%.o)

# Reguli
all: $(OUT_FILE)

$(OUT_FILE): $(LIBRARY) $(MAIN_OBJECT)
	$(CXX) $(CXXFLAGS) -o $@ $(MAIN_OBJECT) $(LIBRARY)

$(LIBRARY): $(LIB_OBJECTS)
	ar rcs $@ $^

$(OUT_DIR)/%.o: $(LIB_DIR)/%.cpp
	@mkdir -p $(OUT_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OUT_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OUT_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OUT_DIR)
