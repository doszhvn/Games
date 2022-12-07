#include <iostream>
using namespace std;

void body(char xoo[]){
  for(int i = 0; i < 9; i ++){
    cout<< " | " << xoo[i] << " | ";
    if(i == 2 || i == 5 || i == 8) cout << "\n---------------------\n";
  }
}

int main() {
  cout << "******* Крестики нолики на двоих *******\n\n---------------------\n";
  int x = 0, o = 0;
  char xo[9]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  
  body(xo);
  for(int j = 0; j < 9; j ++) {
    cout << " \n";
    if(j%2==0){
      cout << "Введите куда поставим X: ";
      cin >> x;
      while(x < 0 || x > 9)
        if(x < 0 || x > 9){
          cout << "ERROR!\n" <<"Просим написать корректный номер игрового поля! \n";
          cout << "Куда поставим? : ";
          cin >> x;
          }
      cout << "\n---------------------\n";
    } 
    else{
      cout << "Введите куда поставим O: ";
      cin >> o;
      while(o < 0 || o > 9)
        if(o < 0 || o > 9){
          cout << "ERROR!\n" << "Просим написать корректный номер игрового поля! \n";
          cout << "Куда поставим? : ";
          cin >> o;
        }
      cout << "\n---------------------\n";
    }
    xo[x-1] = 'X';
    xo[o-1] = '0';
    body(xo);
    if( (xo[0] == 'X' && xo[1] == 'X' && xo[2] == 'X') || (xo[0] == 'X' && xo[4] == 'X' && xo[8] == 'X') || (xo[0] == 'X' && xo[3] == 'X' && xo[6] == 'X') || (xo[3] == 'X' && xo[4] == 'X' && xo[5] == 'X') || (xo[2] == 'X' && xo[4] == 'X' && xo[6] == 'X') || (xo[1] == 'X' && xo[4] == 'X' && xo[7] == 'X') || (xo[6] == 'X' && xo[7] == 'X' && xo[8] == 'X')||  (xo[2] == 'X' && xo[5] == 'X' && xo[7] == 'X')){cout << "\nX win!"; break;}
    else if(j == 8) {cout << "Ничья!"; break;}
    if( (xo[0] == '0' && xo[1] == '0' && xo[2] == '0') || (xo[0] == '0' && xo[4] == '0' && xo[8] == '0') || (xo[0] == '0' && xo[3] == '0' && xo[6] == '0') || (xo[3] == '0' && xo[4] == '0' && xo[5] == '0') || (xo[2] == '0' && xo[4] == '0' && xo[6] == '0') || (xo[1] == '0' && xo[4] == '0' && xo[7] == '0') || (xo[6] == '0' && xo[7] == '0' && xo[8] == '0') || (xo[2] == '0' && xo[5] == '0' && xo[7] == '0')){cout << "\n0 win!"; break;}
    else if(j == 8){cout << "Ничья!"; break;}
  }
}
