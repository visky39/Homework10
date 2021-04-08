#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void calprice(float price[5][3]);
void display(string name[5], float price[5][3]);
int main() {
	float price[5][3];
	string name[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name : ";
		cin >> name[i];
		cout << "Enter price : ";
		cin >> price[i][0];
	}
	calprice(price);
	display(name, price);


	return 0;
}
void calprice(float price[5][3]) {
	float vat=0;
	int net=0;
	for (int i = 0; i < 5 ; i++)
	{
		vat = price[i][0] * 0.07;
		net = price[i][0] + vat;
		for (int j = 1; j < 3; j++)
		{
			if (j == 1) {
				price[i][j] = vat;

			}
			else if (j == 2) {
				price[i][j] = net;
			}
		}
	}

}
void display(string name[5], float price[5][3]) {
	cout << "No.\tproduct\t price\tvat\tNet"<< endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "\t" << name[i]<<"\t ";
		for (int j = 0; j < 3 ; j++)
		{
			cout << fixed << setprecision(2) << price[i][j] << "\t";
		}
		cout << endl;
	}


}