#include <iostream>
using namespace std;

int main()
{
    int liczba_liczb, liczba_miejsc;
    cin>>liczba_liczb>>liczba_miejsc;
    int tablica_1[liczba_liczb];
    int tablica_wartosci;
    for(int i=(liczba_liczb-liczba_miejsc);i<liczba_liczb;i++)
    {
        cin>>tablica_wartosci;
        tablica_1[i]=tablica_wartosci;
    }
    for(int i=0;i<(liczba_liczb-liczba_miejsc);i++)
    {
        cin>>tablica_wartosci;
        tablica_1[i]=tablica_wartosci;
    }
    for(int i=0;i<liczba_liczb;i++)
    {
        cout<<tablica_1[i]<<" ";
    }
    return 0;
}
