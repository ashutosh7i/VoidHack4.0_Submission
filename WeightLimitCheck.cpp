//add numbers till a key is pressed
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
float total = 0;
float weight;
char ch;
cout << "This program will calculate the weight of items "<<endl;
cout << "and help you to be in safe weight limit. "<<endl;
//set weight limit here
int weightLimit=0;
cout << "Enter the weight limit:(kg)- ";
cin >> weightLimit;
cout << "Current weight limit is "<<weightLimit<<"kg"<<endl;
do
{
cout << "Enter weight of an item: (grams)- ";
cin >> weight;
total += weight;
cout << "Do you want to add another item? (y/n):  ";
cin >> ch;
} while (ch == 'y' || ch == 'Y');
cout << "Total weight is: " << total<<" Grams or"<< endl;
//convert kg to grams
float totalKG=total/1000;
cout << "Total weight is: " << totalKG<<" Kilo"<< endl;
if (totalKG>weightLimit)
{
cout << ">>> You are over weight limit. "<<endl;
cout << ">>> Please remove "<<totalKG-weightLimit<<"kg of items."<<endl;
}
else
{
cout << ">>> You are under weight limit. "<<endl;
cout << ">>> You can add "<<weightLimit-totalKG<<"kg of items."<<endl;
}

return 0;
}
