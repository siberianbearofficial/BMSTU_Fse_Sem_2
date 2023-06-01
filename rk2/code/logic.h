/**
 * @defgroup logic Логика
 * @brief Модуль, предназначенный для работы с данными.
 *
 * Модуль предоставляет необходимый функционал для получения данных из текстовых файлов,
 * а также последующей обработки и вывода результатов в текстовые файлы.
 */

#ifndef RK2_1_INPUT_H
#define RK2_1_INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include "string_array.h"

#define LINE_LEN 256
#define EMPTY_FILE 2

/**
 * Функция, выполняющая считывание слов из строки файла в массив с последующей обработкой.
 * @ingroup logic
 * @param fin файловая переменная на вход.
 * @param fout файловая переменная на выход.
 * @return EMPTY_FILE в случае, если входной файл пуст.
 * @return EXIT_SUCCESS в случае, если файл был обработан успешно.
 * @return EXIT_FAILURE в случае, если во время считывания или обработки возникла ошибка.
 */
int read_file(FILE *fin, FILE *fout);

#endif //RK2_1_INPUT_H
