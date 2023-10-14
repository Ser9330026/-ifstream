#include <iostream>
#include <fstream>
#include <string>

int main() {
	setlocale(LC_ALL, "rus");
	std::string path = "test.txt";
	// Для считывания используем класс ifstream
	std::ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		std::cout << "Файл не открылся" << std::endl;
	}
	else {
		std::cout << "Файл открылся" << std::endl;
		//char ch;// Посимольное считывание из файла
		//while (fin.get(ch)) {
		//	std::cout << ch;
		//}

		std::string str;// Построковое считывание файлов
		while (!fin.eof()) { // eof() отлавливает конец файла
			//fin >> str; // каждое слов на новой строке
			std::getline(fin, str); //строки считываются целиком
			std::cout << str << std::endl;
		}

	}

	fin.close();




	return 0;
}