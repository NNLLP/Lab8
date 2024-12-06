#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int age, height, bounty;
string character;

int main(){
    cout << "Enter your age: ";
    cin >> age;
    if(age > 25){
        if(age > 60){
            character = "Brook";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 500000000){
                character = "Jinbe";
            }
            else{
                character = "Franky";
            }
        }
    }
    else{
        cout << "Enter your height: ";
        cin >> height;
        if(height >= 100){
            if(height >= 180){
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 1100000000){
                    character = "Zoro";
                }
                else{
                    character = "Sanji";
                }
            }
            else{
                character = "Usopp";
            }
        }
        else{
            character = "Chopper";
        }
    }
    cout << "Your character = " << character << endl;
}
