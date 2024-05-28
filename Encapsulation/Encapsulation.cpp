#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarLampuNo[10]
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	} |
		string getSaklar(int i) {
			return saklarNo[i];
	}
};

	int main() {
		remoteLampu lampuRumah;

		lampuRumah.setSaklarLampuNo(0, "Lampu Teras Rumah");
		lampuRumah.setSaklarLampuNo(1, "Lampu Ruang Tamu");
		lampuRumah.setSaklarLampuNo(2, "Lampu Kamar Tidur");
		lampuRumah.setsaklarLampuNo(3, "Lampu Dapur");

		cout << lampuRumah.getSaklarNo(0) << endl;
		cout << lampuRumah.getSaklarNo(1) << endl;
		cout << lampuRumah.getSaklarNo(2) << endl;
		cout << lampuRumah.getSaklarNo(3) << endl;

		return 0;
	};