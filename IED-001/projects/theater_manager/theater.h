#ifndef THEATER_H_INCLUDED
#define THEATER_H_INCLUDED

class Theater {
	int column;
	int row;
	int counter_people = 0;
	int max_people = 0;
	int *pointer;

	public:
		Theater(int newCol, int newRow) {
			if(newCol == 0 || newRow == 0) {
				throw "Não foi possível inicializar o teatro";
			}

			column = newCol;
			row = newRow;
			max_people = column * row;
			pointer = new int[row * column];

			for(int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					pointer[i * column + j] = 0;
				}
			}
		}

		int insertPeople(int row, int col) {
			pointer[row * column+col] = 1;
			counter_people++;
		}

		int removePeople(int row, int col) {
			pointer[row * column+col] = 0;
			counter_people--;
		}

		int movePeople(int oldRow, int oldCol, int newRow, int newCol) {
			pointer[oldRow * column+oldCol] = 0;
			pointer[newRow * column+newCol] = 1;
		}

		int getMaxPeople() {
			return max_people;
		}

		int getCounterPeople() {
			return counter_people;
		}

		int getPosition(int positionRow, int positionCol) {
			return pointer[positionRow * column + positionCol];
		}

		~Theater() {
			delete []pointer;
		}
};


#endif // THEATER_H_INCLUDED
