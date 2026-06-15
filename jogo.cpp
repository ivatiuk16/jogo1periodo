#include <iostream>
#include <string>
using namespace std;
int main (){
    int quadra[20][11];
    int jogadorX = 5;
    int jogadorY = 7;
    int bolaX = jogadorX;
    int bolaY = jogadorY + 1;
    int inicioX = jogadorX;
    int inicioY = jogadorY;
    char comando;
    while(true){
    for(int i = 0; i < 20; i++) {
    for(int l = 0; l < 11; l++) {
        quadra[i][l] = 0;
    }
}
    quadra[jogadorX][jogadorY] = 1;
    quadra[bolaX][bolaY] = 5;
    quadra[0][5] = 2;
    quadra[5][8] = 3;
    quadra[5][2] = 3;
    for(int i = 0; i < 5;i++){
        quadra[i][1] = 3;
    }
    for(int l = 3; l < 8; l++){
        quadra[6][l] = 3;
    }
    for(int i = 0; i < 5; i++){
        quadra[i][9] = 3;
    }
    for(int i = 0; i < 4; i++){
        quadra[i][3] = 4;
    }
    for(int l = 4; l < 8; l++){
        quadra[3][l] = 4;
    }
    for(int i = 0; i < 4; i++){
        quadra[i][7] = 4;
    }

    for(int i = 0; i < 20; i++){
        for(int l = 0; l < 11; l++){
            if (quadra[i][l] == 1){
                cout << " L ";}
            else if(quadra[i][l] == 2){
                cout << " 7 ";
            }
            else if(quadra[i][l] == 3){
                cout << " 3 ";
            }
            else if (quadra[i][l] == 4){
                cout << " 2 ";
            }
            else if (quadra[i][l] == 5) {
                  cout << " o ";
            }
                else{
                    cout << " . ";
            }

        }
        cout << endl;
    }
    cout << "use W,A,S,D para se movimentar e utilize a tecla C para arremessar (CAPS LOCK desativado seu burro)";
    cin >> comando;
    if (comando == 'd') {
    jogadorY++;
}
else if (comando == 'a') {
    jogadorY--;
}
else if (comando == 'w') {
    jogadorX--;
}
else if (comando == 'c'){
    bolaX--;
}
else if (comando == 's') {
    jogadorX++;
        }
        if(jogadorX < 0 || jogadorX >= 20 || jogadorY < 0 || jogadorY >= 11){
            jogadorX = inicioX;
            jogadorY = inicioY;
        }
        bolaX = jogadorX;
    bolaY = jogadorY + 1;
    int posseDbola;
    if(posseDbola == verdadeiro){

    }
    }
}
