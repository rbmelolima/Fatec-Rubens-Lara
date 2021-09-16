#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "theater.h"

using namespace std;

void userKeypress() {
	cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
	getch();
}

void cleanConsole() {
	system("cls");
}

void showRowIndex(int row) {
	cout << row << " ";
}

void showColumnIndex(int quantityColumns) {
	cout << "\n\n";
	cout << "  ";
	for (int i = 0; i < quantityColumns; i++) {
		cout << " " << i << " ";
	}
}

bool validation(int value, int max_value) {
	if(value <= max_value && value >= 0) {
		return true;
	} else {
		return false;
	}
}

bool testDouble(bool condition1, bool condition2) {
	if(condition1 == true && condition2 == true) {
		return true;
	} else {
		return false;
	}
}

int main()
{
    int col, row;
		char continueLoop;

		cout << "Vamos iniciar o teatro!\n" << endl;

		do {
			cout << "Digite o número de fileiras: ";
			cin >> row;

			cout << "Digite o número de cadeiras por fileiras: ";
			cin >> col;

			if(col <= 0 || row <= 0) {
				cout << "\n\n** Não inicie com valores menores que zero! **\n\n" << endl;
			}
		} while (col <= 0 || row <= 0);

    Theater theater = Theater(col, row);

		do {
			cleanConsole();
			int option = 0;

			cout << "*** GERENCIADOR DE TEATRO ***" << endl;
			cout << "\n" << endl;
			cout << "(1) - Listar poltronas" << endl;
			cout << "(2) - Vender ingresso" << endl;
			cout << "(3) - Troca de poltrona" << endl;
			cout << "(4) - Devolver ingresso" << endl;
			cout << "(5) - Estatísticas" << endl;
			cout << "(6) - Sair do programa" << endl;
			cout << "\nEscolha uma opção: ";
			cin >> option;

			cout << "\n";

			switch (option) {
				case 1:
					for(int i = 0; i < row; i++) {
						showRowIndex(i);
						for (int j = 0; j < col; j++) {
							cout << "|" << theater.getPosition(i, j) << "|";

							if(j == col - 1 && i == row - 1) {
								showColumnIndex(col);
							}
						}
						cout << "\n\n";
					}
					userKeypress();
					break;

				case 2:
					int includeRow, includeCol;

					do {
						cout << "Insira a fileira: ";
						cin >> includeRow;
						cout << "Insira o assento: ";
						cin >> includeCol;
						cout << "\n\n";
					} while(testDouble(validation(includeRow, row), validation(includeCol, col)) == false);

					theater.insertPeople(includeRow, includeCol);
					break;

				case 3:
					int oldRow, oldCol, newRow, newCol;

					do {
						cout << "Insira a fileira antiga: ";
						cin >> oldRow;
						cout << "Insira o assento antigo: ";
						cin >> oldCol;
						cout << "\n\n";
					} while(testDouble(validation(oldRow, row), validation(oldCol, col)) == false);

					do {
						cout << "Insira a fileira nova: ";
						cin >> newRow;
						cout << "Insira o assento novo: ";
						cin >> newCol;
						cout << "\n\n";
					} while(testDouble(validation(newRow, row), validation(newCol, col)) == false);

					theater.movePeople(oldRow, oldCol, newRow, newCol);
					break;

				case 4:
					int deleteRow, deleteCol;
					do{
						cout << "Insira a fileira: ";
						cin >> deleteRow;
						cout << "Insira o assento: ";
						cin >> deleteCol;
					} while(testDouble(validation(deleteRow, row), validation(deleteCol, col)) == false);

					theater.removePeople(deleteRow, deleteCol);
					break;

				case 5:
					cout << "Estatísticas" << endl;
					cout << "Lotação máxima: " << theater.getMaxPeople() << "pessoa(s)" << endl;
					cout << "Lotação atual: " << theater.getCounterPeople() << "pessoa(s)" << endl;
					userKeypress();
					break;

				case 6:
					continueLoop = 'n';
					break;

				default:
					break;
			}

			continueLoop = 's';
		} while(continueLoop == 's');
    return 0;
}
