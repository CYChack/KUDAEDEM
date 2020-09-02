#include <iostream>
void main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	std::cout << "lubish teplo? 1-da, 2-net";
	std::cin >> a;
    std::cout << "Hochesh na more? 1-da, 2-net";
	std::cin >> b;
	std::cout << "Hochesh v gorbI? 1-da, 2-net";
	std::cin >> c;
	std::cout << "za legalayz? 1-da, 2-net";
	std::cin >> d;
	std::cout << "mnogo deneg? 1-da, 2-net";
	std::cin >> e;
	if (a == 1 && b == 1 && c == 1 && d == 1 && e == 1)
		std::cout << "edb v KAZAHSTAN";
	else
		if (a == 2 && b == 2 && c == 2 && d == 2 && e == 2)
			std::cout << "vali v Koryajmu";
		else
			if (a == 1 && b == 2 && c == 2 && d == 1 && e == 1)
				std::cout << "doroga v Amsterdam)";
			else
				if (a == 1 && b == 1 && c == 2 && d == 2 && e == 1)
					std::cout << "cheshi na Bali";
				else
					if (a == 2 && b == 2 && c == 1 && d == 2 && e == 2)
						std::cout << "avtostopom do Norvegii";
					else
						std::cout << "ostavaysya doma";

}