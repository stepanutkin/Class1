#include <iostream>
#include <string>


class Counter {

private:
	int counter;

public:
	int add() {
		return ++this->counter;
	}
	int substr() {
		return --this->counter;
	}
	void print() {
		std::cout << counter << std::endl;
	}

	Counter() {
		this->counter = 1;
	}

	Counter(int num) {
		this->counter = num;
	}

};


void work(Counter& counter) {
	while (true == true) {
		char command;
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		std::cin >> command;

		if (command == 'x') {
			std::cout << "До свидания!";
			break;

		}

		switch (command)
		{
		case '+':counter.add(); break;
		case '-':counter.substr(); break;
		case '=':counter.print(); break;
		default:
			break;
		}
	}

}

int main() {

	setlocale(LC_ALL, "russian");
	

	std::string answer;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
	std::cin >> answer;

	if (answer == "yes") {
		int x;
		std::cout << "Введите начальное значение счётчика :";
		std::cin >> x;
		Counter counter(x);
		work(counter);
	}

	else {
		Counter counter;
		work(counter);
	}

	
	
	return 0;
}