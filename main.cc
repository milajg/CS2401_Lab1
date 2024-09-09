#include "MyTime.h"
#include <iostream>
using namespace std;


int main()
{
    MyTime t1, t2, t_results; // The two times that the user will enter
    int scalar;
    cout << "Enter the first time" << endl; // uses << operator to output prompt 
    t1.input(cin);
     

    cout << "Enter the second time" << endl;
    t2.input(cin); // uses overloaded >> operator to get the second time

    cout << "Enter a scalar:" << endl;
    cin >> scalar;

    cout << "t1: " ; 
    t1.output(cout);
    cout << "\n";
    cout << "t2: ";
    t2.output(cout);
    
    //boolean comparsion operator 
    cout << "Are the two times the same?" << "\n";
    if(t1 == t2){
        cout << "The times are the same" << "\n";
    }
        else{
            cout << "The times are not the same" "\n";
        }

    //addition operator
    t_results = t1 + t2;
    cout << "The sum of time 1 and time 2 is: \n " ; 
    t_results.output(cout); 
    cout << "\n";


    //subtraction operator
    t_results = t1 - t2;
    cout << "The difference between time 1 and time 2 is: \n ";
    t_results.output(cout);
    cout << "\n";

    //multiplication operator 
    t_results = t1 * scalar;
    cout << "The first time multiplied by " << scalar << " is: \n";\
    t_results.output(cout);
    cout << "\n";
    t_results = t2 * scalar;
    cout << "The second time multiplied by " << scalar << " is: \n";\
    t_results.output(cout);
    cout << "\n";

    //division operator 
    t_results = t1 / scalar;
    cout << "The first time divided by " << scalar << " is: \n";\
    t_results.output(cout);
    cout << "\n";
    t_results = t2 / scalar;
    cout << "The first time divided by " << scalar << " is: \n";\
    t_results.output(cout);
    cout << "\n";


    //output the times
    cout << "The first time is: " << "\n";
    t1.output(cout); 
    cout <<"The second time is: " << "\n" ;
    t2.output(cout);
        
    return 0;
}



//perform all math operations and one boolean operation
