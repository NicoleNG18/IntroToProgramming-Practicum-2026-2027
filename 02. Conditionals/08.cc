#include <iostream>

using namespace std;

int main() {
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Divison emainder" << endl;
	cout << "> ";

	long op, a, b;
	cin >> op >> a >> b;

	if ((op == 4 || op == 5) && b == 0) {
		cerr << "error: division by zero" << endl;
		return 0;
	}

	switch (op) {
		case 1: cout << a + b; break;
		case 2: cout << a - b; break;
		case 3: cout << a * b; break;
		case 4: cout << a / b; break;
		case 5: cout << a % b; break;
		default:
			cerr << "error: unknown operation " << op << endl;
			return 0;
	}

	cout << endl;
	return 0;
}
