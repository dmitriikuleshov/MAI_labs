```
root@Home:~/MAI_labs# cd lab8
root@Home:~/MAI_labs/lab8# touch makefile
root@Home:~/MAI_labs/lab8# vim makefile
root@Home:~/MAI_labs/lab8# mkdir src
root@Home:~/MAI_labs/lab8# cd src
root@Home:~/MAI_labs/lab8/src# touch main.c
root@Home:~/MAI_labs/lab8/src# emacs main.c
root@Home:~/MAI_labs/lab8/src# cat main.c
/* Лабораторная работа 8
   Студента гр. M8O-108Б-23 Кулешова Д.А*/

#include <stdio.h>


int main() {
  printf("Hello, Charles!\n");
  return 0;
}
root@Home:~/MAI_labs/lab8/src# cd ..
root@Home:~/MAI_labs/lab8# cat makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

SRCDIR = src
OBJDIR = .
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))
EXECUTABLE = $(BINDIR)/main

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
        $(CC) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
        $(CC) $(CFLAGS) -c $< -o $@

clean:
        rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
        $(EXECUTABLE)

debug: CFLAGS += -g
debug: LDFLAGS += -g
debug: all

test: $(EXECUTABLE)
        ./$(EXECUTABLE) --test

coverage: CFLAGS += --coverage
coverage: LDFLAGS += --coverage
coverage: test



#В этом Makefile определены следующие цели:

# - all: собирает исполняемый файл myprogram
# - clean: удаляет все объектные файлы и исполняемый файл
# - run: запускает программу myprogram
# - debug: собирает исполняемый файл с отладочной информацией
# - test: запускает тесты программы
# - coverage: собирает исполняемый файл с опцией --coverage для измерения покрытия кода тестами

#Для сборки используется компилятор gcc с опциями -Wall -Wextra -Werror для строгой проверки кода на ошибки. Объектные файлы и исполняемый файл помещаются в директории obj и bin соответственно.

#Для определения исходных файлов используется функция wildcard, которая находит все файлы с расширением .c в директории src. Затем эти файлы преобразуются в объектные файлы в директории obj. Исполняемый файл myprogram собирается из всех объектных файлов.

#Цель debug добавляет опции -g для сборки с отладочной информацией.

#Цель test запускает программу с аргументом --test, чтобы запустить тесты.

#Цель coverage добавляет опции --coverage для измерения покрытия кода тестами.
root@Home:~/MAI_labs/lab8# mkdir bin
root@Home:~/MAI_labs/lab8# make
gcc  main.o -o bin/main
root@Home:~/MAI_labs/lab8# make run
bin/main
Hello, Charles!
root@Home:~/MAI_labs/lab8# make clean
```
