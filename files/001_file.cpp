#include <iostream>
#include <fstream>
using namespace std;

int getWhatTheyWant();

void displayItems(int x);

int main(){
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        
        default:
            break;
        }
         whatTheyWant = getWhatTheyWant();
    }
    
}

int getWhatTheyWant(){
    int choice;
    cout << "\n 1 - just plain items" <<endl;
    cout << "2 - helpful items" <<endl;
    cout << "3 - harmful items items" <<endl;
    cout << "4 - helpful items \n" <<endl;

    cin >> choice;
    return choice;
}

// display items function
void displayItems(int x){
    ifstream objectFile("objects.txt");
    string name;
    double power;

    if (x==1){
        while(objectFile>>name>>power){
            if(power == 0){
                cout << name << ' ' <<power<<endl;
            }
        }
    }

    if (x==2){
        while(objectFile>>name>>power){
            if(power >0){
                cout << name << ' ' <<power<<endl;
            }
        }
    }

    if (x==3){
        while(objectFile>>name>>power){
            if(power< 0){
                cout << name << ' ' <<power<<endl;
            }
        }
    }
}