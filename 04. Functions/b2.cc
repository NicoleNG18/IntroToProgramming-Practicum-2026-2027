#include <climits>
#include <cmath>
#include <iostream>
#include <ostream>

void print_ones(unsigned num, bool female) {
	switch (num) {
		case 1:
			if (female) std::cout << "една";
			else std::cout << "едно";
			break;
		case 2: std::cout << "две"; break;
		case 3: std::cout << "три"; break;
		case 4: std::cout << "четири"; break;
		case 5: std::cout << "пет"; break;
		case 6: std::cout << "шест"; break;
		case 7: std::cout << "седем"; break;
		case 8: std::cout << "осем"; break;
		case 9: std::cout << "девет"; break;
	}
}
void print_tens(unsigned num) {
	switch (num) {
		case 1: std::cout << "десет"; break;
		case 2: std::cout << "двайсет"; break;
		case 3: std::cout << "трийсет"; break;
		case 4: std::cout << "четиресет"; break;
		case 5: std::cout << "петдесет"; break;
		case 6: std::cout << "шейсет"; break;
		case 7: std::cout << "седемдесет"; break;
		case 8: std::cout << "осемдесет"; break;
		case 9: std::cout << "деветдесет"; break;
	}
}
void print_hundreds(unsigned num) {
	switch (num) {
		case 1: std::cout << "сто"; break;
		case 2: std::cout << "двеста"; break;
		case 3: std::cout << "триста"; break;
		case 4: std::cout << "четиристотин"; break;
		case 5: std::cout << "петстотин"; break;
		case 6: std::cout << "шестстотин"; break;
		case 7: std::cout << "седемстотин"; break;
		case 8: std::cout << "осемстотин"; break;
		case 9: std::cout << "деветстотин"; break;
	}
}

void print_basic(unsigned num, bool has_prev, bool female) {
	if (num >= 100) {
		if (has_prev) {
			if (num % 100 == 0) std::cout << " и ";
			else std::cout << " ";
		}
		has_prev = true;
		print_hundreds(num / 100);
	}

	if (num % 100 >= 11 && num % 100 <= 19) {
		if (has_prev) std::cout << " и ";
		switch (num % 100) {
			case 11: std::cout << "единайсет"; break;
			case 12: std::cout << "дванайсет"; break;
			case 13: std::cout << "тринайсет"; break;
			case 14: std::cout << "четиринайсет"; break;
			case 15: std::cout << "петнайсет"; break;
			case 16: std::cout << "шестнайсет"; break;
			case 17: std::cout << "седемнайсет"; break;
			case 18: std::cout << "осемнайсет"; break;
			case 19: std::cout << "деветнайсет"; break;
		}

		return;
	}
	else {
		unsigned tens = (num / 10) % 10;
		unsigned ones = num % 10;

		if (tens != 0) {
			if (has_prev) {
				if (ones == 0) std::cout << " и ";
				else std::cout << " ";
			}

			has_prev = true;
			print_tens(tens);
		}

		if (ones != 0) {
			if (has_prev) std::cout << " и ";
			print_ones(ones, female);
		}
	}
}

void print_full(unsigned long long num) {
	unsigned thousands = (num / 1000) % 1000;
	unsigned ones = num % 1000;
	bool has_prev = false;

	if (num == 0) {
		std::cout << "нула";
		return;
	}

	if (thousands != 0) {
		if (thousands == 1) {
			std::cout << "хиляда";
		}
		else {
			print_basic(thousands, has_prev, true);
			std::cout << " хиляди";
		}

		has_prev = true;
	}

	if (ones != 0) {
		print_basic(ones, has_prev, false);
	}
}

int main() {
	while (true) {
		unsigned long long num;
		std::cin >> num;
		print_full(num);
		std::cout << std::endl;
	}
	return 0;
}
