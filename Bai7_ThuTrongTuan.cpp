#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << " nhap ngay:";
	cin >> so;
	switch (so)
	{
	case 2:
		cout << "thu hai\n";
		break;
	case 3:
		cout << "thu ba\n";
		break;
	case 4:
		cout << "thu bon\n";
		break;
	case 5:
		cout << "thu nam\n";
		break;
	case 6:
		cout << "thu sau\n";
		break;
	case 7:
		cout << "thu bay\n";
		break;
	case 8:
		cout << "chu nhat\n";
		break;
	default:cout << "khong thuoc cac ngay trong tuan\n";
		return 0;
}
