#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include<windows.h>
using namespace std;
int main()
{
    system("cls");
    cout<<"\n\n";
    //delay(1000);
    Sleep(1000);
      
    system("color B");
    cout<<"\t\t\t\tRANDOM PASSWORD GENERATOR";
    Sleep( 1000 );
    system("cls");
    cout<<"\n\n";
    srand(time(0));
     cout << "\t\t\tYou'r Password is: \t" << endl;
     char abc [] = {'A', 'a', 'B' ,'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J',     'j', 'K', 'k'};
     cout << "\t\t\t";
     int randomNum;
     for(int i = 0; i <8; i++)
    {
        randomNum =  rand() % 22;
        cout<<abc[randomNum];
     }
cout<<"\n\n";
}
