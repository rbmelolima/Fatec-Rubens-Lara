#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string& str) {
  vector<bool> mark(26, false);
  int index;

  for (int i = 0; i < str.length(); i++) {
    if ('A' <= str[i] && str[i] <= 'Z')
      index = str[i] - 'A';

    else if ('a' <= str[i] && str[i] <= 'z')
      index = str[i] - 'a';

    else
      continue;
    mark[index] = true;
  }

  for (int i = 0; i <= 25; i++)
    if (mark[i] == false)
      return (false);

  return (true);
}

int main() {
  string str = "";

  while(true) {
    system("cls");
    cout << "Digite uma frase: ";
    cin >> str;

    if (checkPangram(str) == true)
      cout << "\n**** É um pangrama ****";
    else
      cout << "\n**** Não é um pangrama ****";

    cout << "\n\nPressione qualquer coisa ... " << endl;
    getch();
  }
}
