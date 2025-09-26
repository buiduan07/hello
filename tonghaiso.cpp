#include <iostream>
#include <string>
using namespace std;
string daonguoc(string s)
{
    string kq = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        kq += s[i];
    }
    return kq;
}
int main()
{
    string a, b,c="",d="",tong="";
    cin >> a >> b;
    if (a.size() >= b.size()) {
		c = daonguoc(a);
		d = daonguoc(b);
    }
    else {
		c = daonguoc(b);
		d = daonguoc(a);
    }
    int nho = 0;
    while (d.size() > 0)
    {
        int x = int(c[0]-'0'), y = int(d[0]-'0'), z;
        string t;
        z = x + y+nho;
        nho = z / 10;
        int w= z%10;
        t = string(1,w+'0');
        tong += t;
        c.erase(0, 1);
		d.erase(0, 1);
    }
    for (char x : c) {
        if (nho != 0)
        {
            int z = int(x - '0') + nho;z
            nho = z / 10;
            int w = z % 10;
            tong += string(1, w + '0');
        }
		else tong += x;
    }
	if (nho != 0) tong += string(1, nho + '0');
	cout << daonguoc(tong);
}