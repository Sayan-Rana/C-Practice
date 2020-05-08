#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int getWhatTheyWant();
void addition();
void substraction();
void multiplication();
void division();

int main()
{
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();
    while(whatTheyWant<5){

       switch(whatTheyWant){
            case 1:
                addition();
                break;
            case 2:
                substraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            }
       whatTheyWant = getWhatTheyWant();
    }
}

int getWhatTheyWant(){

    int choice;

    cout << "Press 1 for Addition"<<endl;
    cout << "Press 2 for Substraction"<<endl;
    cout << "Press 3 for Multiplication"<<endl;
    cout << "Press 4 for Division"<<endl;
    cout << "Press 5 to Quit"<<endl<<endl;

    cin >> choice;

    return choice;
}

void addition(){
    double total=0;
    double num1;
    cout << "Enter your numbers or press 'E' to get your result."<<endl;
    while(cin>>num1){

        total = total+num1;
    }
    cout <<"Your total is: "<< total <<endl<<endl;

}

void substraction(){
    double x;
    double y;
    double ans;
    double num2;
    cout << "Enter your numbers or press 'E' to get your result."<<endl;
    cin >> x;
    cin >> y;
    ans = x-y;
    while(cin>>num2){

        ans = ans - num2;
    }
    cout <<"Your result is: "<< ans <<endl<<endl;

}

void multiplication(){
    double product = 1;
    double num3;
    cout << "Enter your numbers or press 'E' to get your result."<<endl;
    while(cin>>num3){

        product = product*num3;
    }
    cout <<"Your product is: "<< product <<endl<<endl;

}

void division(){
    double a;
    double b;
    double ans;
    double num4;
    cout << "Enter your numbers or press 'E' to get your result."<<endl;
    cin >> a;
    cin >> b;
    ans = a/b;
    while(cin>>num4){

        ans = ans / num4;
    }
    cout <<"Your result is: "<< ans <<endl<<endl;

}