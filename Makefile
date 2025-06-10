# Nome do executável
TARGET = sistema

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Arquivos fonte
SRCS = main.cpp funcionario.cpp desenvolvedor.cpp gerente.cpp estagiario.cpp

# Arquivos objeto (automático a partir dos fontes)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Como compilar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar os arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)
