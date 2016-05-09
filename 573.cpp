#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
double h, u, d, f;
int day;
bool c() {
	double dis=0;
	bool first=true;
	f /= 100;
	double fat=u;
	while (1) {
		day++;
		if (first) {first = false; u += fat*f;}
		dis += (u-=fat*f);
		if (dis > h) return true;
		dis -= d;
		if (dis <0) return false;
	}
}
int main() {
	while (cin >> h >> u >> d >> f&&h) {
		day = 0;
		bool ans=c();
		cout << (ans ? "success" : "failure") << " on day " << day<<endl;
	}
	//system("PAUSE");
	return 0;
}