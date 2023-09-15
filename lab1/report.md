# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Кулешов Дмитрий Андреевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Основы Git, Github, Gitlab etc
2. **Цель работы**: потыкать git
3. **Задание**:
завести репозиторий (общий под все лабораторные работы с отдельной папкой под каждую лр!)
отчет с листингом в Markdown (листинг - ctrl+c -> ctrl+v из терминала с форматированием в markdown)
создать отдельную ветку в репозитории под задание
создать коммит с листингом и отчетом
смержить ветку в мейн

4. **Идея, метод, алгоритм решения задачи**: ...
5. **Сценарий выполнения работы**: ...
6. **Протокол**:
```

@Home:~# mkdir MAI_labs
root@Home:~# cd MAI_labs
root@Home:~/MAI_labs# git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /root/MAI_labs/.git/
root@Home:~/MAI_labs# git remote add origin https://github.com/dmitriikuleshov/MAI_labs.git
root@Home:~/MAI_labs# git remote -v
origin  https://github.com/dmitriikuleshov/MAI_labs.git (fetch)
origin  https://github.com/dmitriikuleshov/MAI_labs.git (push)
root@Home:~/MAI_labs# mkdir lab1
root@Home:~/MAI_labs# cd lab1
root@Home:~/MAI_labs/lab1# rm -r lab1
rm: cannot remove 'lab1': No such file or directory
root@Home:~/MAI_labs/lab1# cd ..
root@Home:~/MAI_labs# rm -r lab1
root@Home:~/MAI_labs# git checkout -b dev
Switched to a new branch 'dev'
root@Home:~/MAI_labs# mkdir lab1
root@Home:~/MAI_labs# cd lab1
root@Home:~/MAI_labs/lab1# touch listing.txt
root@Home:~/MAI_labs/lab1# touch report.txt

```
7. **Замечания автора** по существу работы: ...
8. **Выводы**: изучены базовые команды git и получен потрясающий опыт установки ubuntu)
