#include "estagiario.h"
#include <iostream>
using namespace std;

void Estagiario::setHorasTrabalhadas(int horas) {
    horasTrabalhadas = horas;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0);
}

void Estagiario::exibirInformacoes() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}