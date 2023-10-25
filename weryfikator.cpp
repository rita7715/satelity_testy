#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream wejscie ("testy.txt");
    int a;
    wejscie >> a;
    string linia;
    set <string> linie;
    int ktora=0;
    int bledy=0;
    while (wejscie >> linia)
    {
        ++ktora;
        if (linie.count(linia))
        {
            ++bledy;
                auto it = linie.find(linia);
                int inx = distance(linie.begin(), it);
                cout << "Linie " <<inx+1 << " i " << ktora << " sa takie same";


        }else
        {
            linie.insert(linia);
        }
    }
    if (bledy==0)
    {
        cout << "Nie ma dwoch identycznych kodow";
    }
    return 0;
}
