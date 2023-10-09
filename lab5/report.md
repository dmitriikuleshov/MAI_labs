# Отчет по лабораторной работе № 5
## по курсу "Фундаментальная информатика"

Студент группы М80-108Б-23 Кулешов Дмитрий Андреевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование машин Тьюринга.
2. **Цель работы**: составить программу машины Тьюринга в четверках, выполняющую заданное действие над словами, записанными на ленте.
3. **Задание (вариант №23)**: умножение двух числе в кардинальной системе счисления {|}.
4. **Идея, метод, алгоритм решения задачи**: составить вложенный цикл: внешний цикл отвечает за то, сколько раз надо скопировать второе введенное число, внутренний цикл копирует второе введенное число.
5. **Сценарий выполнения работы**: ...

| Входные данные | Выходные данные | 
|----------------|------------------------------------------------------------------|
| \|\|\| \|\|\|            | \|\|\| \|\|\| \|\|\|\|\|\               | 
| \|\| \|\|\|\|           | \|\| \|\|\|\| \|\|\|\|              |
| \| \|\|\|\|           | \| \|\|\|\| \|             |
| \| \|          | \| \| \|              | 

6. **Протокол**: 
```
00, , ,start

# проверка на 0 правого
start, ,<,check_0
check_0,|,<,is_it_0

is_it_0, ,>,move_right
is_it_0,|,=,move_left_to_check2 # если правое не 0

move_right,|,>,move_right
move_right, ,>,print_0
print_0, ,|,move_right1

# конец
move_right1,|,>,move_right1
move_right1, ,=,end
end, ,#,end

# проверка на 0 левого
move_left_to_check2,|,<,move_left_to_check2
move_left_to_check2, ,<,check2_0
check2_0,|,<,is_it2_0
is_it2_0,|,=,bump_left_space # если левое не 0

is_it2_0, ,>,skip_zero
skip_zero,|,>,skip_space
skip_space, ,>,skip_num
skip_num,|,>,skip_num
skip_num, ,>,print1_0
print1_0, ,|,move_right1

# если оба числа не 0:
bump_left_space,|,<,bump_left_space
bump_left_space, ,>,take_left_extra
take_left_extra,|, ,skip_space1
skip_space1, ,>,skip_left
skip_left,|,>,skip_left
skip_left, ,>,take_right_extra
take_right_extra,|, ,skip_space2
skip_space2, ,>,skip_right
skip_right,|,>,skip_right
skip_right, ,=,move_left_to_takeI

# начало умножения
move_left_to_takeI, ,<,skip_left1
skip_left1,|,<,skip_left1
skip_left1, ,=,skip_space3
skip_space3, ,<,skip_space4
skip_space4, ,<,bump_left_space1
bump_left_space1,|,<,bump_left_space1
bump_left_space1, ,<,check_space1
check_space1, ,=,skip_two_spaces
skip_two_spaces, ,>,skip_two_spaces
skip_two_spaces,|,=,take_leftI
skip_tow_spaces, ,=,take_leftI
take_leftI, ,#,take_leftI #######
take_leftI,|, ,next
next, ,>,check_if_next_isI
next,|,>,check_if_next_isI
check_if_next_isI, ,>,skip_space5 # если последняя
skip_space5, ,>,skip_space5
skip_space5,|,=,skip_right2
skip_right2,|,>,skip_right2
skip_right2, ,=,start_copy

check_if_next_isI,|,=,skip_leftI
skip_leftI,|,>,skip_leftI
skip_leftI, ,=,skip_two_spaces1

skip_two_spaces1, ,>,skip_two_spaces1
skip_two_spaces1,|,=,move_right2
move_right2,|,>,move_right2
move_right2, ,=,start_copy

start_copy, ,<,01
start_copy,|,<,01

01,|,<,01
01, , ,02
02,|,>,03
02, ,>,03
03,|,=,04
03, ,<,skip_right1
04,|, ,05

04, , ,05
05,|,>,06
05, ,>,06
06,|,>,06
06, , ,07
07,|,>,08
07, ,>,08
08,|,>,08
08, , ,09
09,|,|,10

09, ,|,10
10,|,<,11
10, ,<,11
11,|,<,11
11, , ,12
12,|,<,13
12, ,<,13
13,|,<,13
13, , ,14
14,|,|,15

14, ,|,15
15,|,>,03
15, ,>,03
16,|,>,17
16, ,>,17
17,|,>,17
17, , ,18
18, , ,18

skip_right1,|,<,skip_right1
skip_right1, ,=,check_central_spaces
check_central_spaces, ,<,check_central_spaces_
check_central_spaces_, ,<,check_if_it_is_last_to_write_back
check_if_it_is_last_to_write_back, ,|,go_to_start_writing_extra_back
check_if_it_is_last_to_write_back,|,=,find_space
find_space,|,<,find_space
find_space, ,|,move_one_right
move_one_right,|,>,take_leftI


go_to_start_writing_extra_back,|,<,go_to_start_writing_extra_back
go_to_start_writing_extra_back, ,|,skip_left2
skip_left2,|,>,skip_left2
skip_left2, ,>,write_right_extra_back
write_right_extra_back, ,|,skip_right3
skip_right3,|,>,skip_right3
skip_right3, ,>,skip_result
skip_result,|,>,skip_result
skip_result, ,|,go_one_right1
go_one_right1,|,>,end

```
1. **Замечания автора** по существу работы: очень трудно или невозможно внести изменения, если изначально не продумать какую-то деталь в алгоритме. Для понимания достаточно написать одну или несколько таких программ, поэтому в целом задание полезное и несложное.
2. **Выводы**: написал программу машины Тьюринга в четверках, идем дальше.

