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
    float bolad3 = 0;
    int persona;
    float media = 0;
    float dunk = 0;
    float chancedacerto;
    char comando;
    bool posse = true;
    cout << endl <<"escolha seu personagem : 1= 40% dunk, 54% 3 pontos, 70% media distancia, 2= 90% dunk, 22% 3 pontos, 50% media distancia, 3=25% dunk, 62% 3 pontos, 60 % media distancia " << endl;
        cin >> persona;
        if(persona == 1){
            dunk = 40;
            bolad3 = 54;
            media = 70;
        }
        else if(persona == 2){
            dunk = 90;
            bolad3 = 22;
            media = 50;
        }
        else if(persona == 3){
            dunk = 25;
            media = 60;
            bolad3 = 62;
        }
    while(true){
        for(int i = 0; i < 20; i++) {
            for(int l = 0; l < 11; l++) {
                quadra[i][l] = 0;
            }
        }
        

        if(bolaX >= 0 && bolaX < 20 && bolaY >= 0 && bolaY < 11){
            quadra[bolaX][bolaY] = 5;
        }

        quadra[0][5] = 2;
        quadra[5][8] = 3;
        quadra[5][2] = 3;
        quadra[jogadorX][jogadorY] = 1;
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
                    cout << " L ";
                }
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
        else if(comando == 'c'){
            posse = false;
            if (jogadorX == 1 && jogadorY >= 4 && jogadorY <= 6 ){
                chancedacerto = dunk;
            } 
            else if(jogadorX <= 6 && jogadorY >= 1 && jogadorY <= 9){
        chancedacerto = media;
            }
            else{
        chancedacerto = bolad3;
            }
     }
        
        else if (comando == 's') {
            jogadorX++;
        }

        if(jogadorX <= 0 || jogadorX >= 20 || jogadorY < 0 || jogadorY >= 11){
            jogadorX = inicioX;
            jogadorY = inicioY;
        }

        if(posse == true){
            bolaX = jogadorX;
            bolaY = jogadorY + 1;
        }
        else{
            bolaX--;
        }

        if(bolaX < 0){
            posse = true;
        }
    }

    return 0;
}