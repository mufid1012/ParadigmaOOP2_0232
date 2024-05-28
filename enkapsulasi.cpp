#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarNo[10];

public:
	void setsaklarNo(int i, string value)
	{
		saklarNo[i] = value;
	}
	string getsaklarNo(int i)
	{
		return saklarNo[i];
	}
};

int main()
{
	remotelampu lampuRumah;

	lampuRumah.setsaklarNo(0, "Lampu Teras Rummah");
	lampuRumah.setsaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setsaklarNo(2, "Lampu kamar Tidur");
	lampuRumah.setsaklarNo(3, "Lampu dapur ");

	cout << lampuRumah.getsaklarNo(0) << endl;
	cout << lampuRumah.getsaklarNo(1) << endl;
	cout << lampuRumah.getsaklarNo(2) << endl;
	cout << lampuRumah.getsaklarNo(3) << endl;

	return 0;

}