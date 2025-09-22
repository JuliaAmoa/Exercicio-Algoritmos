#include <iostream>
#include <iomanip>
#include <string>
#include <locale.h>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_br.utf-8");
    float medias[5], notas[5][3];
    int maiornota = 0;
    string nomes[5];

    for (int i = 0; i < 5; i++) {
        cout << "Nome do aluno " << i+1 << ": ";
        cin >> nomes[i];
        cout << "Digite as três notas do aluno " << i+1 << ": ";
        cin >> notas[i][0] >> notas[i][1] >> notas[i][2];
    }
    system("cls");

    cout << "Aluno(a)       " << "N1      " << "N2      " << "N3      " << "Média    " << "Situação  " << endl;
    cout << "----------------------------------------------------------" << endl;

    for (int i = 0; i < 5; i++) {
        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2])/3;
        if (medias[i] > medias[maiornota]) {
            maiornota = i;
        }
        cout << left << setw(15) << nomes[i] << setw(8) << notas[i][0] << setw(8) << notas[i][1] << setw(8) << notas[i][2] << setw(9) << setprecision(2) << medias[i];
        if (medias[i] >= 7) {
            cout << "Aprovado";
        } else {
            cout << "Reprovado";
        }
        cout << endl;
    }
    cout << endl << "A maior média é: " << medias[maiornota] << " do aluno(a) " << nomes[maiornota] << endl;
    return 0;
}
