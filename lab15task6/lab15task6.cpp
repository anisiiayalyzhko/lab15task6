// lab15task6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main() {

	//масив на 10 елементів
	int array[10], i, equal = 1;
	//виводимо завдання користувачу
	printf("Enter 10 numbers:\n");
	//вводимо десяьи елементів 
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}
	//перевірка рівності
	for (i = 0; i < 9; i++) {
		if (array[i] != array[i + 1]) {
			equal = 0;
			break;
		}
	}
	//якщо всі 10 елементів рівні
	if (equal) {
		printf("Numbers are equal\n");
	}
	else {
		//типізація мінімальне і максимальне значення
		int max_array = array[0], min_array = array[0];
		//знаходження найбільшого і найменшого
		for (i = 0; i < 10; i++) {
			if (array[i] > max_array) {
				max_array = array[i];
			}
			else if (array[i] < min_array) {
				min_array = array[i];
			}
		}
		printf("Max:%d\nMin:%d", max_array, min_array);
	}
	return 0;
}

