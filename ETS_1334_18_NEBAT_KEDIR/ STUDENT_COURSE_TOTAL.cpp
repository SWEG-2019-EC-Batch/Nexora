#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    
    double assignment, midterm, finalMark, total;
    string result;

    const double ASSIGN_WEIGHT = 0.20;
    const double MID_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;


    cout << "Enter assignment, : " ;
    cin >> assignment ;
    cout<<"Enter midterm : " ;
    cin>>midterm;
    cout<<"Enter finalMark :" ;
    cin>>finalMark;

    
    total = assignment * ASSIGN_WEIGHT
          + midterm * MID_WEIGHT
          + finalMark * FINAL_WEIGHT;


    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    
    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << result << endl;/* you can see by giving the inputs that displays after run your program*/

    return 0;
}