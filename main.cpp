/*
Dominick Guarino
Metric to English conversion
3/10/2021
PC codeblocks
*/
#include <iostream>
#include <cctype>
#include <iomanip>
char menuSelect();
using namespace std;

int main(){

    double inches;
    double centimeters;
    char select;


do{
    select = menuSelect();

    if (select == 'E'){
           cout << "Enter the number of inches: ";
        try{
            cin  >> inches;
            if (cin.fail()){
                throw 1;
                }
            if (inches <= 0){
                throw 2;
                }
            else{
                centimeters = inches * 2.54;
                cout << fixed << setprecision(1) << inches << " inches is equal to " << centimeters << " centimeters" << endl;
                }
            }
        catch(int throwNum){
                 if (throwNum == 1){
                     cout << "Non numerical input value detected" << endl;
                     return 0;
                 }
                 else  {
                    cout << "Integer must be positive" << endl;
                }
            }

    }

        if (select == 'M'){
            cout << "Enter the number of centimeters: ";
           try{
            cin  >> centimeters;
                if (cin.fail()){
                    throw 1;
                    }
                if (centimeters <= 0){
                    throw 2;
                    }
                else {
                inches = centimeters / 2.54;
                 ;
                cout << fixed << setprecision(1) << centimeters << " centimeters is equal to " << inches << " inches" << endl;
                    }
            }
            catch(int throwNum){
                 if (throwNum == 1){
                     cout << "Non numerical input value detected" << endl;
                     return 0;
                 }
                 else  {
                    cout << "Integer must be positive" << endl;
                }
            }
        }
    }while (select != 'Q');
        return 0;
}
char menuSelect()
{
    char selection;
    do{
        cout << endl;
        cout << "Enter E to convert English to Metric, or M to convert Metric to English or Q to quit: ";
        cin  >> selection;
        selection = toupper(selection);
    }while (selection != 'E' && selection != 'M' && selection != 'Q');
    return selection;
    }
