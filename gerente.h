#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    void setBonusMensal(float bonus);
    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};
#endif