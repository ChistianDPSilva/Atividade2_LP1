#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    void setQuantidadeDeProjetos(int q);
    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif