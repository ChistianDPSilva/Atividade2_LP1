#include "funcionario.h"
#include <iostream>

void Funcionario::setNome(string nome) { this->nome = nome; }
string Funcionario::getNome() { return nome; }

void Funcionario::setSalarioBase(float salario) { salarioBase = salario; }
float Funcionario::getSalarioBase() { return salarioBase; }

void Funcionario::setId(int id) { this->id = id; }
int Funcionario::getId() { return id; }

void Funcionario::exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salário base: " << salarioBase << endl;
}