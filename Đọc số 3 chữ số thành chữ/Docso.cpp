#include<iostream>
using namespace std;
void docso(int n)
{
	int hangtram = n / 100;
	int hangchuc = (n / 10) % 10;
	int donvi = n % 10;
	switch (hangtram)
	{
	case 1:
		cout << "Mot tram ";
		break;
	case 2:
		cout << "Hai tram ";
		break;
	case 3:
		cout << "Ba tram ";
		break;
	case 4:
		cout << "Bon tram ";
		break;
	case 5:
		cout << "Nam tram";
		break;
	case 6:
		cout << "Sau tram ";
		break;
	case 7:
		cout << "Bay tram ";
		break;
	case 8:
		cout << "Tam tram ";
		break;
	case 9:
		cout << "Chin tram ";
		break;
	}
	switch (hangchuc)
	{
	case 0:
		if (donvi == 0) cout << "";
		else cout << "le ";
		break;
	case 1:
		cout << "muoi ";
		break;
	case 2:
		cout << "hai muoi ";
		break;
	case 3:
		cout << "ba muoi ";
		break;
	case 4:
		cout << "bon muoi ";
		break;
	case 5:
		cout << "nam muoi ";
		break;
	case 6:
		cout << "sau muoi ";
		break;
	case 7:
		cout << "bay muoi ";
		break;
	case 8:
		cout << "tam muoi ";
		break;
	case 9:
		cout << "chin muoi ";
		break;
	}
	switch (donvi)
	{
	case 0:
		cout << "";
		break;
	case 1:
		cout << "mot";
		break;
	case 2:
		cout << "hai";
		break;
	case 3:
		cout << "ba";
		break;
	case 4:
		cout << "bon";
		break;
	case 5:
		cout << "nam";
		break;
	case 6:
		cout << "sau";
		break;
	case 7:
		cout << "bay";
		break;
	case 8:
		cout << "tam";
		break;
	case 9:
		cout << "chin";
		break;
	}
}
int main()
{
	int n;
	cout << "Moi nhap vao: ";
	cin >> n;
	docso(n);
	return 0;
}