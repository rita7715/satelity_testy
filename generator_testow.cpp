#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream out ("testy.txt");
    int n, p, m=1001;
    n=1000;
    srand( (time(0)<<(time(0)%10)) + (time(0)%10) );
    p = rand() % 1000000;
    set <pair <int, int> >uzyte;
    out << n << " " << p << " " << m << "\n";
    for (int i=0;i<p;i++)
    {
        pair <int, int> ta;
        ta.first = rand() % 1000 +1;
        ta.second = rand() % 1000 + 1001;
        if (uzyte.count(ta))
        {
            while (uzyte.count(ta))
            {
                ta.first = rand() % 1000 +1;
                ta.second = rand() % 1000 + 1001;
            }
            uzyte.insert(ta);
            out << ta.first << " " << ta.second << "\n";
        }else
        {
            uzyte.insert(ta);
            out << ta.first << " " << ta.second << "\n";
        }
    }




    return 0;
}
