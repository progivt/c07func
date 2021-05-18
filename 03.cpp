/*
Напишите функцию unsigned word_end(char* s, unsigned i), ко-
торая принимает строку s, состоящую из одних латинских букв и про-
белов, и индекс i в ней (0 ⩽ i < strlen(s)). Функция должна возвра-
щать индекс символа, следующего за последним символом слова, ко-
торому принадлежит символ s[i]. Напишите с помощью этой функции
программу, которая вводит число k, затем строку, состоящую из одних
латинских букв и пробелов, и выводит k-е слово строки (считая с 1).
Примеры. Для строки s = "This is fine" значение word_end(s, 0)
равно 4, значение word_end(s, 9) равно 12. Для k = 3 с таким s про-
грамма должна ответить fine.
*/

#include <iostream>

using namespace std;

unsigned word_end(char* s, unsigned i){
	return 0;
}


int main(){
	int k, i, pos, pos0, pos1;
	char s[100];
	cin >> k;
	cin.getline(s, 100);

	pos0 = 0;
	pos1 = word_end(s, 0);
	for (i=2; i<k; i++){
		// ...
	}

	// печатаем k-е слово
	for (pos = pos0; pos < pos1; pos++) {
		cout << s[pos];
	}
	cout << "\n";

	return 0;
}