#include <iostream>
#include <cmath>

using namespace std;

void game_zone(int body[]){
  cout << "+--------+--------+--------+--------+\n";
  cout << "|        |        |        |        |\n";
  if(body[0] == 0) cout << "|    " << "    ";
  if(body[0] >= 1 &&  body[0] < 10) cout << "|   " << body[0] << "    ";
  if(body[0] > 9 &&  body[0] < 100) cout << "|   " << body[0]<< "   ";
  if(body[0] > 99 &&  body[0] < 1000) cout << "|  "<< body[0]<< "   ";
  if(body[0] > 999 &&  body[0] < 10000) cout << "|  "<< body[0]<< "  ";
  if(body[1] == 0) cout << "|    " << "    ";
  if(body[1] >= 1 &&  body[1] < 10) cout << "|   " << body[1] << "    ";
  if(body[1] > 9 &&  body[1] < 100) cout << "|   " << body[1]<< "   ";
  if(body[1] > 99 &&  body[1] < 1000) cout << "|  "<< body[1]<< "   ";
  if(body[1] > 999 &&  body[1] < 10000) cout << "|  "<< body[1]<< "  ";
  if(body[2] == 0) cout << "|    " << "    ";
  if(body[2] >= 1 &&  body[2] < 10) cout << "|   " << body[2] << "    ";
  if(body[2] > 9 &&  body[2] < 100) cout << "|   " << body[2]<< "   ";
  if(body[2] > 99 &&  body[2] < 1000) cout << "|  "<< body[2]<< "   ";
  if(body[2] > 999 &&  body[2] < 10000) cout << "|  "<< body[2]<< "  ";
  if(body[3] == 0) cout << "|    " << "    |";
  if(body[3] >= 1 &&  body[3] < 10) cout << "|   " << body[3] << "    |";
  if(body[3] > 9 &&  body[3] < 100) cout << "|   " << body[3]<< "   |";
  if(body[3] > 99 &&  body[3] < 1000) cout << "|  "<< body[3]<< "   |";
  if(body[3] > 999 &&  body[3] < 10000) cout << "|  "<< body[3]<< "  |";
  cout << "\n|        |        |        |        |\n";
  cout << "+--------+--------+--------+--------+\n";
    cout << "|        |        |        |        |\n";
  if(body[4] == 0) cout << "|    " << "    ";
  if(body[4] >= 1 &&  body[4] < 10) cout << "|   " << body[4] << "    ";
  if(body[4] > 9 &&  body[4] < 100) cout << "|   " << body[4]<< "   ";
  if(body[4] > 99 &&  body[4] < 1000) cout << "|  "<< body[4]<< "   ";
  if(body[4] > 999 &&  body[4] < 10000) cout << "|  "<< body[4]<< "  ";
  if(body[5] == 0) cout << "|    " << "    ";
  if(body[5] >= 1 &&  body[5] < 10) cout << "|   " << body[5] << "    ";
  if(body[5] > 9 &&  body[5] < 100) cout << "|   " << body[5]<< "   ";
  if(body[5] > 99 &&  body[5] < 1000) cout << "|  "<< body[5]<< "   ";
  if(body[5] > 999 &&  body[5] < 10000) cout << "|  "<< body[5]<< "  ";
  if(body[6] == 0) cout << "|    " << "    ";
  if(body[6] >= 1 &&  body[6] < 10) cout << "|   " << body[6] << "    ";
  if(body[6] > 9 &&  body[6] < 100) cout << "|   " << body[6]<< "   ";
  if(body[6] > 99 &&  body[6] < 1000) cout << "|  "<< body[6]<< "   ";
  if(body[6] > 999 &&  body[6] < 10000) cout << "|  "<< body[6]<< "  ";
  if(body[7] == 0) cout << "|    " << "    |";
  if(body[7] >= 1 &&  body[7] < 10) cout << "|   " << body[7] << "    |";
  if(body[7] > 9 &&  body[7] < 100) cout << "|   " << body[7]<< "   |";
  if(body[7] > 99 &&  body[7] < 1000) cout << "|  "<< body[7]<< "   |";
  if(body[7] > 999 &&  body[7] < 10000) cout << "|  "<< body[7]<< "  |";
  cout << "\n|        |        |        |        |\n";
  cout << "+--------+--------+--------+--------+\n";
  cout << "|        |        |        |        |\n";
  if(body[8] == 0) cout << "|    " << "    ";
  if(body[8] >= 1 &&  body[8] < 10) cout << "|   " << body[8] << "    ";
  if(body[8] > 9 &&  body[8] < 100) cout << "|   " << body[8]<< "   ";
  if(body[8] > 99 &&  body[8] < 1000) cout << "|  "<< body[8]<< "   ";
  if(body[8] > 999 &&  body[8] < 10000) cout << "|  "<< body[8]<< "  ";
  if(body[9] == 0) cout << "|    " << "    ";
  if(body[9] >= 1 &&  body[9] < 10) cout << "|   " << body[9] << "    ";
  if(body[9] > 9 &&  body[9] < 100) cout << "|   " << body[9]<< "   ";
  if(body[9] > 99 &&  body[9] < 1000) cout << "|  "<< body[9]<< "   ";
  if(body[9] > 999 &&  body[9] < 10000) cout << "|  "<< body[9]<< "  ";
  if(body[10] == 0) cout << "|    " << "    ";
  if(body[10] >= 1 &&  body[10] < 10) cout << "|   " << body[10] << "    ";
  if(body[10] > 9 &&  body[10]< 100) cout << "|   " << body[10]<< "   ";
  if(body[10] > 99 &&  body[10] < 1000) cout << "|  "<< body[10]<< "   ";
  if(body[10] > 999 &&  body[10] < 10000) cout << "|  "<< body[10]<< "  ";
  if(body[11] == 0) cout << "|    " << "    |";
  if(body[11] >= 1 &&  body[11] < 10) cout << "|   " << body[11] << "    |";
  if(body[11] > 9 &&  body[11] < 100) cout << "|   " << body[11]<< "   |";
  if(body[11] > 99 &&  body[11] < 1000) cout << "|  "<< body[11]<< "   |";
  if(body[11] > 999 &&  body[11] < 10000) cout << "|  "<< body[11]<< "  |";
  cout << "\n|        |        |        |        |\n";
  cout << "+--------+--------+--------+--------+\n";
  cout << "|        |        |        |        |\n";
  if(body[12] == 0) cout << "|    " << "    ";
  if(body[12] >= 1 &&  body[12] < 10) cout << "|   " << body[12] << "    ";
  if(body[12] > 9 &&  body[12] < 100) cout << "|   " << body[12]<< "   ";
  if(body[12] > 99 &&  body[12] < 1000) cout << "|  "<< body[12]<< "   ";
  if(body[12] > 999 &&  body[12] < 10000) cout << "|  "<< body[12]<< "  ";
  if(body[13] == 0) cout << "|    " << "    ";
  if(body[13] >= 1 &&  body[13] < 10) cout << "|   " << body[13] << "    ";
  if(body[13] > 9 &&  body[13] < 100) cout << "|   " << body[13]<< "   ";
  if(body[13] > 99 &&  body[13] < 1000) cout << "|  "<< body[13]<< "   ";
  if(body[13] > 999 &&  body[13] < 10000) cout << "|  "<< body[13]<< "  ";
  if(body[14] == 0) cout << "|    " << "    ";
  if(body[14] >= 1 &&  body[14] < 10) cout << "|   " << body[14] << "    ";
  if(body[14] > 9 &&  body[14]< 100) cout << "|   " << body[14]<< "   ";
  if(body[14] > 99 &&  body[14] < 1000) cout << "|  "<< body[14]<< "   ";
  if(body[14] > 999 &&  body[14] < 10000) cout << "|  "<< body[14]<< "  ";
  if(body[15] == 0) cout << "|    " << "    |";
  if(body[15] >= 1 &&  body[15] < 10) cout << "|   " << body[15] << "    |";
  if(body[15] > 9 &&  body[15] < 100) cout << "|   " << body[15]<< "   |";
  if(body[15] > 99 &&  body[15] < 1000) cout << "|  "<< body[15]<< "   |";
  if(body[15] > 999 &&  body[15] < 10000) cout << "|  "<< body[15]<< "  |";
  cout << "\n|        |        |        |        |\n";
  cout << "+--------+--------+--------+--------+\n";
}

int main() {
  srand(time(NULL));
  cout << "************* GAME: 2048 ************\n\n";
  int body[16];
  char motion;
  for(int i = 0; i < 16; i++){
      body[i] = 0;
    }   

  game_zone(body);
  
  for (;;){
    cout << "Введите куда вы сделаете ход? W A S D: ";
    cin >> motion; 
    while(motion != 'w' && motion != 'a' && motion != 's' && motion != 'd' && motion != 'W' && motion != 'A' && motion != 'S' && motion != 'D') {
      cout << "Неверный ход.\n";
      cout << "Введите куда вы сделаете ход? W A S D: " ;
      cin >> motion; 
      cout << motion;
    }



    
  /*  if(motion == 'w'){
      if(body[12]==body[8] )
    }else if(motion == 'a'){
      
    }else if(motion == 's'){
      
    }else if(motion == 'd'){
      
    }
*/


    
    int indexrand = rand()%16;
    int meanrand = pow(2,rand()%3+1);
    while(body[indexrand] != 0){
    indexrand = rand()%16;
    }
    body[indexrand] = meanrand;
    game_zone(body);
    
    if(body[0] == 2048) {cout << "game over"; break;}
    if(body[1] == 2048) {cout << "game over"; break;}
    if(body[2] == 2048) {cout << "game over"; break;}
    if(body[3] == 2048) {cout << "game over"; break;}
    if(body[4] == 2048) {cout << "game over"; break;}
    if(body[5] == 2048) {cout << "game over"; break;}
    if(body[6] == 2048) {cout << "game over"; break;}
    if(body[7] == 2048) {cout << "game over"; break;}
    if(body[8] == 2048) {cout << "game over"; break;}
    if(body[9] == 2048) {cout << "game over"; break;}
    if(body[10] == 2048) {cout << "game over"; break;}
    if(body[12] == 2048) {cout << "game over"; break;}
    if(body[13] == 2048) {cout << "game over"; break;}
    if(body[14] == 2048) {cout << "game over"; break;}
    if(body[15] == 2048) {cout << "game over"; break;}
  }

}
