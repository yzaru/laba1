#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Задание 1: Вычисление разницы между максимальным и минимальным элементами массива
int findDifference(int*array, int size) {
int max = array[0];
int min = array[0];
for(int i = 1; i < size; i++) {
if(array[i] > max)
max = array[i];
if(array[i] < min)
min = array[i];
}
return max - min;
}
// Задание 2: Инициализация массива случайными числами
void initializeArray(int*array, int size) {
for(int i = 0; i < size; i++) {
array[i] = rand() % 101;
}
}
// Задание 4: Вычисление суммы значений в каждой строке двумерного массива
void sumRows(int **array, int rows, int cols) {
for(int i = 0; i < rows; i++) {
int sum = 0;
for(int j = 0; j < cols; j++) {
sum += array[i][j];
}
printf("Сумма строки %d: %d\n", i + 1, sum);
}
}
int main() {
srand(time(NULL));
// Задание 3: Создание массива произвольного размера
int size;
printf("Введите размер одномерного массива: ");
scanf("%d", &size);
int*array= (int*)malloc(size * sizeof(int));
int lower_bound, upper_bound;
// Инициализация и вывод одномерного массива
initializeArray(array, size);
printf("Одномерный массив: ");
for(int i = 0; i < size; i++) {
printf("%d ", array[i]);
}
printf("\n");
// Вычисление разницы между максимальным и минимальным элементами
int difference = findDifference(array, size);
printf("Разница между максимальным и минимальным элементами: %d\n", difference);
// Работа с двумерным массивом
int rows, cols;
printf("Введите количество строк двумерного массива: ");
scanf("%d", &rows);
printf("Введите количество столбцов двумерного массива: ");
scanf("%d", &cols);
int **array2D = (int**)malloc(rows * sizeof(int*));
for(int i = 0; i < rows; i++) {
array2D[i] = (int*)malloc(cols * sizeof(int));
initializeArray(array2D[i], cols);
}
// Вывод двумерного массива
printf("Двумерный массив:\n");
for(int i = 0; i < rows; i++) {
for(int j = 0; j < cols; j++) {
printf("%d ", array2D[i][j]);
}
printf("\n");
}
// Вычисление суммы значений в каждой строке двумерного массива
sumRows(array2D, rows, cols);
// Освобождение выделенной памяти
free(array);
for(int i = 0; i < rows; i++) {
free(array2D[i]);
}
free(array2D);
return 0;
}