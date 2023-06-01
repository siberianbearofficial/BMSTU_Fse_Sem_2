#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "constants.h"

/**
 * \defgroup input Ввод
 * Модуль предназначен для обработки входных данных. Поддерживает работу с текстовыми файлами - выделение чисел из них.
 */

/**
 * \brief Считывание в массив чисел из файла.
 *
 * Функция работает с файловой переменной, выполняя считывание целых чисел в массив. Иное содержимое файла игнорируется.
 * \ingroup input
 * \param[in] file Файловая переменная.
 * \param[out] arr Массив с числами из файла.
 * \param[out] n Количество чисел в массиве.
 * \return EXIT_SUCCESS в случае, если числа из файла были успешно записаны в массив.
 * \return LONG_FILE в случае, если количество чисел в файле превышает максимально допустимое.
 * \return EMPTY_FILE в случае, если файл не содержит чисел.
 */
char ReadFile(FILE *file, int *arr, int *n);

#endif //INPUT_H
