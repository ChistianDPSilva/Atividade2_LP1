#include <iostream>
#include <vector>
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"

using namespace std;

int main() {
    vector<Funcionario*> funcionarios;
    int opcao, id;
    string nome;
    float salarioBase;

    cout << "Cadastro de Funcionários (mínimo 6)\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nFuncionário #" << i + 1 << endl;
        cout << "1 - Desenvolvedor\n2 - Gerente\n3 - Estagiário\nEscolha o tipo: ";
        cin >> opcao;

        cout << "ID: ";
        cin >> id;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Salário base: ";
        cin >> salarioBase;

        if (opcao == 1) {
            int projetos;
            cout << "Quantidade de projetos: ";
            cin >> projetos;

            Desenvolvedor* dev = new Desenvolvedor();
            dev->setId(id);
            dev->setNome(nome);
            dev->setSalarioBase(salarioBase);
            dev->setQuantidadeDeProjetos(projetos);
            funcionarios.push_back(dev);
        } else if (opcao == 2) {
            float bonus;
            cout << "Bônus mensal: ";
            cin >> bonus;

            Gerente* ger = new Gerente();
            ger->setId(id);
            ger->setNome(nome);
            ger->setSalarioBase(salarioBase);
            ger->setBonusMensal(bonus);
            funcionarios.push_back(ger);
        } else if (opcao == 3) {
            int horas;
            cout << "Horas trabalhadas: ";
            cin >> horas;

            Estagiario* est = new Estagiario();
            est->setId(id);
            est->setNome(nome);
            est->setSalarioBase(salarioBase);
            est->setHorasTrabalhadas(horas);
            funcionarios.push_back(est);
        } else {
            cout << "Opção inválida. Tente novamente.\n";
            i--;
        }

        if(i >= 6){
            char sn;
            std::cout << "Deseja adicionar mais funcionários? (s/n): ";
            std::cin >> sn;
            if (sn != 's' && sn != 'S') {
                break;
            }
        }

    }

    cout << "\n===== FUNCIONÁRIOS CADASTRADOS =====\n";
    for (Funcionario* f : funcionarios) {
        f->exibirInformacoes();
        cout << "--------------------------\n";
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}
