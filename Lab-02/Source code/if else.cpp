#include<iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score" << endl;
    cin>>score ;
    if(score>=90){
    cout << "Grade:A" << endl;
    }
    else if(score>=80){
    cout << "Grade:B" << endl;}
    else if(score>=60){
    cout << "Grade:D" << endl;}
    
    return 0;
}