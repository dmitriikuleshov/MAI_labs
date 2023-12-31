# Отчет по лабораторной работе № 13
## по курсу "Основы информатики", "Алгоритмы и структуры данных"

Студент группы М80-108Б-23 Кулешов Дмитрий Андреевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Множества
2. **Цель работы**: реализовать функционал множеств на языке программирования Си, решить с их помощью поставленную задачу.
3. **Задание (вариант №7)**: Есть ли слова, начинающиеся и заканчивающиеся гласными?
4. **Идея, метод, алгоритм решения задачи**: 
    константа VOWELS содержит множество всех гласных букв латинского алфавита
    Создать функции:
   
     bool is_letter(char ch) проверяет, является ли знак буквой
   
     unsigned int char_to_set(char ch) - функция порождения множества, состоящего из заданной буквы
   
     bool is_vowel(char ch) - проверяет, является ли знак гласной буквой.
   
     char* get_input() - функция для записи ввода пользователя в переменную с использованием динамической памяти
   
     для удобства была написана функция get_input, чтобы можно было работать сразу со всей последовательностью знаков, а не принимать их по одному. Тогда с помощью strtok можно разделить текст на отдельные слова и работать уже с ними, проверяя первый и последний знак каждого слова.
    Если первый и последний знак слова являются гласными буквами, то выводим, что в последовательности есть слово, начинающееся заканчивающееся гласными. В противном случае переходим к следующему слову и так до конца. Если не найдено ни одного подходящего слова, выводим, что таких слов нет.

6. **Сценарий выполнения работы**:

| Входные данные | Выходные данные | 
|----------------|-----------------|
| a            | true               | 
| h b c w k          | false              | 
| apple           | true         | 
| baaaaaab apple           | true         | 

6. **Протокол**: Код программы: https://github.com/dmitriikuleshov/MAI_labs/blob/main/lab13/main.c
7. **Замечания автора** по существу работы: Работа выполнена в соответствии с поставленным заданием. Программа успешно выполняет анализ и обработку вводимого текста. 

8. **Выводы**: В ходе выполнения данной лабораторной работы я освоил принцип работы с множествами в языке программирования Си, сравнил его с реализацией множеств в других языках программирования, написал программу, использующую множества для обработки последовательности слов.
