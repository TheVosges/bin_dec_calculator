#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <cstring>
#include <cmath>
#include <sstream>
#include <string.h>

using namespace std;



int z10nadow(int liczba, int system){

if (liczba==0){
    return liczba;}

int wynik=liczba%system;
liczba/=system;
z10nadow(liczba,system);

if (wynik<10){
    cout << wynik;}

else{
char y=wynik+55;
cout<<y;
}
}





int zdowna10(char liczba[100],int system, int wynik1){
int p=1;
wynik1=0;
int pierwsza;
int x;

   for (int i=strlen(liczba)-1;i>= 0;i--){
      if (liczba[i]>='0' && liczba[i]<='9'){
    x=liczba[i]-'0';}
      else{
    x=liczba[i] - 55;}
    wynik1+=x*p;
    p*=system;}




return wynik1;
}


int dziesietny(int q, int w){
    int wynik;
        cout << "Podaj a: ";
        cin>> q;
        cout << endl << "Podaj b: ";
        cin >> w;
        cout << endl << "Wybierz dzialanie:" << endl << "[1] Dodawanie" << endl << "[2] Odejmowanie" << endl << "[3] Mnozenie" << endl << "[4] Dzielenie";
        int y;
        cout << endl <<"Funkcja: ";
        cin  >> y;
                if (y==1){
                  wynik=q+w;
                  cout << "Twoj wynik to: " << wynik << endl;

                }
                if (y==2){
                  wynik=q-w;
                  cout << "Twoj wynik to: " << wynik << endl;

                }
                if (y==3){
                  wynik=q*w;
                  cout << "Twoj wynik to: " << wynik << endl;

                }
                if (y==4){
                  wynik=q/w;
                  cout << "Twoj wynik to: " << wynik << endl;

                }
}





int main()
{
int a;
int b;
int p;
int x;
int wynik;
cout << "[0] Wyjdz z programu" << endl << "[1] Wykonaj dzialalanie na dowolnym systemie";
p:
cout << endl <<"Funkcja: ";
cin >> x;
    if (x==0)
        return 0;
    if (x==1){
        cout << "Podaj system (2 lub 10): ";
        cin >> b;
        cout << endl;
        int q;
        int w;
            if (b==10) dziesietny(q,w);
            else{
                cout << "Podaj a: ";
                char chq[100];

                char chw[100];
                cin >> chq;
                cout << endl;
                cout << "Podaj b: ";
                cin >> chw;
                cout << "Wybierz dzia³anie:" << endl << "[1] Dodawanie" << endl << "[2] Odejmowanie" << endl << "[3] Mnozenie" << endl << "[4] Dzielenie";
                int y;
                cout << endl <<"Funkcja: ";
                cin  >> y;
                if (y==1){
                  wynik=zdowna10(chq,b,0)+zdowna10(chw,b,0);
                  cout << "Twoj wynik w dziesietnym to: " << wynik << endl;

                }
                if (y==2){
                  wynik=zdowna10(chq,b,0)-zdowna10(chw,b,0);
                  cout << "Twoj wynik w dziesietnym to: " << wynik << endl;

                }
                if (y==3){
                  wynik=zdowna10(chq,b,0)*zdowna10(chw,b,0);
                  cout << "Twoj wynik w dziesietnym to: " << wynik << endl;

                }
                if (y==4){
                  wynik=zdowna10(chq,b,0)/zdowna10(chw,b,0);
                  cout << "Twoj wynik w dziesietnym to: " << wynik << endl;

                }
            cout << "Twoj wynik to: ";
            z10nadow(wynik,b);

            }}

    if (x!=0 && x!=1) {
        cout << "BLAD" << endl;}
    goto p;

}
