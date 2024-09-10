#define_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {
setvbuf(stdin, NULL, _IONBF, 0);
setvbuf(stdout, NULL, _IONBF, 0);
int i;
struct student {
char famil[20];
char name[20];
char facult[20];
int Nomzach;
} stud[3];
// Ввод данных о студентах
for (i = 0; i < 3; i++) {
printf("fam\n");
scanf("%19s", stud[i].famil);
}
for (i = 0; i < 3; i++) {
printf("imya %s\n", stud[i].famil);
scanf("%19s", stud[i].name);
}
for (i = 0; i < 3; i++) {
printf("fakult %s %s\n", stud[i].famil, stud[i].name);
scanf("%19s", stud[i].facult);
}
for (i = 0; i < 3; i++) {
printf("zachetka %s %s\n", stud[i].famil, stud[i].name);
scanf("%d", &stud[i].Nomzach);
}
// Вывод данных о студентах
for (i = 0; i < 3; i++) {
printf("student %s %s obuchaetsa na fak %s, nomer zachetki %d\n",
stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
}
// Задание 5: поиск студента по заданным параметрам
char search_famil[20], search_name[20];
printf("fam dlya poisk: ");
scanf("%19s", search_famil);
printf("imya: ");
scanf("%19s", search_name);
int found = 0; // Флаг для проверки, найден ли студент
for (i = 0; i < 3; i++) {
if (strcmp(stud[i].famil, search_famil) == 0 && strcmp(stud[i].name, search_name) == 0) {
printf("naiden student: %s %s, fak: %s, zach: %d\n",
stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
found = 1;
break;
}
}
if (!found) {
printf("stud s fam %s i name %s not naiden\n", search_famil, search_name);
}
return 0;
}