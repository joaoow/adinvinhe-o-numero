

#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int numero;
int a;
bool sair=false;
void nivel ();
void menu ();
void jonovo();
void jogo ();
void perdeu();
void creditos();
int getRandom(int de, int ate){
int random;
ate-=de;
random=rand()%(ate+1)+de;
return random;}
int main(){
if (!sair){
menu();
jogo();
cin.get();}
return 0;
}
void nivel (){
numero=3;
cout<<"\nEscolha o Nivel: "<<endl;
cout<<"\n1 - (1-10)\n2 - (1-20)\n3 - (1-30)\n4 - (1-40)\nE assim por diante..."<<endl;
cin >> a;
a<1?a=1:a=a;
numero=getRandom(1,10*a);
jogo();
}
void menu (){
int a;
system ("cls");
system("title ADIVINHE O NUMERO V 1.0");
cout<<"                   ___           ___           ___     "<<endl;
cout<<"       ___        /  /\\         /  /\\         /  /\\    "<<endl;
cout<<"      /__/\\      /  /::\\       /  /::\\       /  /::\\   "<<endl;
cout<<"      \\__\\:\\    /  /:/\\:\\     /  /:/\\:\\     /  /:/\\:\\  "<<endl;
cout<<"  ___ /  /::\\  /  /:/  \\:\\   /  /:/  \\:\\   /  /:/  \\:\\ "<<endl;
cout<<" /__/\\  /:/\\/ /__/:/ \\__\\:\\ /__/:/_\\_ \\:\\ /__/:/ \\__\\:\\"<<endl;
cout<<" \\  \\:\\/:/~~  \\  \\:\\ /  /:/ \\  \\:\\__/\\_\\/ \\  \\:\\ /  /:/"<<endl;
cout<<"  \\  \\::/      \\  \\:\\  /:/   \\  \\:\\ \\:\\    \\  \\:\\  /:/ "<<endl;
cout<<"   \\__\\/        \\  \\:\\/:/     \\  \\:\\/:/     \\  \\:\\/:/  "<<endl;
cout<<"                 \\  \\::/       \\  \\::/       \\  \\::/   "<<endl;
cout<<"                  \\__\\/         \\__\\/         \\__\\/    "<<endl;
cout<<"            _     _             _           _           "<<endl;  
cout<<"  __ _   __| |   (_)   __ __   (_)   _ _   | |_     ___  "<<endl; 
cout<<" / _` | / _` |   | |   \\ V /   | |  | ' \\  | ' \\   / -_)  "<<endl;
cout<<" \\__,_| \\__,_|  _|_|_  _\\_/_  _|_|_ |_||_| |_||_|  \\___|  "<<endl;
cout<<" |\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"| "<<endl;
cout<<""<<endl;
cout<<"                            ___   "<<endl;
cout<<"                           / _ \\  "<<endl;
cout<<"                           \\___/  "<<endl;
cout<<"                          |\"\"\"\"\"| "<<endl;
cout<<"                          "<<endl;
cout<<"         _ _    _  _   _ __    ___     _ _   ___   "<<endl;
cout<<"        | ' \\  | +| | | '  \\  / -_)   | '_| / _ \\  "<<endl;
cout<<"        |_||_|  \\_,_| |_|_|_| \\___|  _|_|_  \\___/  "<<endl;
cout<<"        |\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"||\"\"\"\"\"| "<<endl;
cin.get();
cout<<"\n1 - Jogar"<<endl;
cout<<"2 - Creditos"<<endl;
cout<<"3 - Sair"<<endl;
cin>>a;
switch (a){
case 1:{
nivel ();
break;}
case 2:{
system ("cls");
creditos();
cin.get();
cin.get();
menu();
break;}
case 3:{
sair=true;
break;}
default:{
cout<<"\nOpcao Invalida!"<<endl;
cin.get();
cin.get();
menu();
break;}
}
}
void jonovo(){
int a;
cout << "Voce gostaria de Jogar denovo? 1- Sim \2 / 2 - Nao \1"<<endl;
cin >> a;
switch (a){
case 1:{
system ("cls");
menu();
break;}
case 2:{
sair=true;
break;}
default:{
cout <<"Opcao invalida!"<<endl;
cin.get();
cin.get();
jonovo();
break;
}
}
}
void jogo (){
int b, tentativas=0;
tentativas+=a+2;

while (tentativas>0&!sair){
cout << "Tentativas restantes: "<<tentativas<<endl;
cout <<"\nDigite um valor: ";
cin >> b;

if (b==numero){
cout<<"Parabens vc Acertou"<<endl;
jonovo();
}
else if (b<numero){
cout<<"Aposte mais alto!"<<endl;
tentativas--;}

else if (b>numero){
cout<<"Aposte mais baixo!"<<endl;
tentativas--;}
}
perdeu();
}
void perdeu(){
if (!sair){
cout << "\nSuas tentativas Chegaram a zero. Infelizmente voce Perdeu!"<<endl;
jonovo();
}}
void creditos(){
cout<<"                                                                              "<<endl;
cout<<"                                                         ###                  "<<endl;
cout<<"#####                                                     ##                  "<<endl;
cout<<" ## ## ## ###  ###   ## ## ## ###  ###   #####   ###    ####   ###  ## ###    "<<endl;
cout<<" ## ##  ### # ## ## ## ##   ### # ## ##   ##### ## ##  ## ##  ## ##  ### # ## "<<endl;
cout<<" ####   ##    ## ## ## ##   ##     ####   # # #  ####  ## ##  ## ##  ##       "<<endl;
cout<<" ##     ##    ## ## ## ##   ##    ## ##   # # # ## ##  ## ##  ## ##  ##       "<<endl;
cout<<"####   ####    ###   ####  ####   ######  # # # ######  #####  ###  ####   ## "<<endl;
cout<<"                       ##                                                     "<<endl;
cout<<"                    ####                                                      "<<endl;
cout<<"                                     "<<endl;
cout<<"              ###                     "<<endl; 
cout<<"       ##    ## ##          ##         "<<endl;
cout<<" ####  ##                              "<<endl;
cout<<"##  # #####   ###  ## ##   ###    ###  "<<endl;
cout<<"####   ##    ## ##  ## ##   ##   ## ## "<<endl;
cout<<"  ###  ##    #####  ## ##   ##   ## ## "<<endl;
cout<<"#  ##  ## ## ##     ## ##   ##   ## ## "<<endl;
cout<<"####    ###   ####  ## ## ######  ###  "<<endl;
cout<<"                                       "<<endl;
cout<<"57en10@gmail.com"<<endl;
cout<<"  *    * ** **  "<<endl;
cout<<"   *    *  *  **"<<endl;
cout<<"     *          "<<endl;
cout<<"    *    *      "<<endl;}
