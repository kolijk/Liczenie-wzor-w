#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

void trojkat() {

return1:

system("cls");

cout <<"Wybeirz co chcesz obliczyc:"<<endl;

cout <<"1.Obwod\n2.Pole\n3.Pitagorasa"<<endl;

int wybor1;

cin >>wybor1;

switch (wybor1) {
case 1:

cout <<"Wpisz dlugosc bokow trojkata"<<endl;

int a, b, c;

cin >> a;
cin >> b;
cin >> c;

cout <<"Obwod trojkata wynosi: "<<a + b + c<<endl;

break;
case 2:

cout <<"Wpisz dlugosc podstawy"<<endl;

int aaa, bbb;

cin >> aaa;

cout <<"Wpisz wysokosc"<<endl;

cin >> bbb;

cout <<"Pole trojkata wynosi: "<<(aaa*bbb)/2<<endl;

break;
case 3:

cout <<"Wybeirz co chcesz liczyc:"<<endl;

cout <<"1.Przeciw prostokatna\n2.Przy prostokatna"<<endl;

int wybor2;

return2:

cin >>wybor2;

if (wybor2 == 1) {

cout <<"Wpisz wysokosc:"<<endl;

int aa,bb,cc;

cin >>aa;

cout <<"Wpisz szerokosc"<<endl;

cin >>bb;

cc = (aa*aa) + (bb*bb);

cc = sqrt(cc);

cout <<"Przeciw prostokatna wynosi: "<<cc<<endl;

}else if (wybor2 == 2) {

cout <<"Wpisz szerokosc:"<<endl;

int aa,bb,cc;

cin >>aa;

cout <<"Wpisz dlugosc przeciw prostokatnej"<<endl;

cin >>cc;

bb = (cc*cc) - (aa*aa);

cout <<"Dlugosc przyprostokatnej wynosi: "<<"pierwiastek z "<<bb<<endl;

}else {goto return2;}


break;
default:
    goto return1;
break;
}

char h = getch();

}

void kwadrat1() {

return1:

system("cls");

cout <<"Wybeirz co chcesz obliczyc:"<<endl;

cout <<"1.Obwod\n2.Pole"<<endl;

int wybor1;

cin >>wybor1;

switch (wybor1) {
case 1:

cout <<"Wpisz dlugosc jednego boku"<<endl;

int a;

cin >> a;

cout <<"Obwod kwadrata wynosi: "<<a*4<<endl;

break;
case 2:

cout <<"Wpisz dlugosc jednego boku"<<endl;

int aaaa;

cin >> aaaa;

cout <<"Pole kwadrata wynosi: "<<aaaa*aaaa<<endl;

break;
default:
    goto return1;
break;
}

char h = getch();

}

int main() {

    system("title Liczenmie ze wzorow");

    while (true) {

        return1:
        system("cls");

        cout <<"Wybierz wzor ktory chcesz liczyc"<<endl;
        cout <<"1.Kwadrat\n"
        <<"2.Trojkat\n"
        //<<"\n"
        <<endl;

        int wybor1;

        cin >> wybor1;

        switch (wybor1) {
        case 1:
            kwadrat1();
        break;
        case 2:
            trojkat();
        break;
        default:
            goto return1;
        break;
        }



    }

}
