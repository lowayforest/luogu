
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    const double pi =3.141593;
    switch (n)
    {
    case 1:
        cout << "I love Luogu!" << endl;
        break;
    case 2:
        cout << 6 << ' ' << 4 << endl;
        break;
    case 3:
        cout << '3' << endl;
        cout << "12" << endl;
        cout << '2' << endl;
        break;
    case 4:
        printf("%.3lf", 500.0/3.0);

        break;
    case 5:
        cout<<(220+260)/(20+12);
        break;

    case 6:
        cout<<sqrt(6*6+9*9);
        break;
    case 7:
        cout<<"110\n"<<"90\n"<<"0"<<endl;
        break;
    case 8:
        cout<<pi*10<<endl<<pi*25<<endl<<4.0/3.0*pi*125<<endl;
        break;
    case 9:
        cout<<(((((1+1)*2)+1)*2)+1)*2<<endl;
        break;
    case 10:
        cout<<9<<endl;
        break;
    case 11:
        cout<<1.0*100/3;
        break;
    case 12:
        cout<<13<<endl<<"R";
        break;
    case 13:
        cout<<(int)(pow(4.0/3.0*pi*(4*4*4+10*10*10),1.0*1/3));
        break;
    case 14:
        cout<<50<<endl;
        break;
    default:
        break;
    }
    return 0;
}