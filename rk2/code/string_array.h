/**
 * @defgroup string_array Массив слов
 * @brief Модуль, предназначенный для работы с массивами слов.
 *
 * Модуль предоставляет необходимый функционал для разбиения строк на слова, обработке слов и формированию строки из массива слов.
 * Также содержит функцию для сортировки массива слов в лексикографическом порядке.
 */

#ifndef RK2_1_STRING_ARRAY_H
#define RK2_1_STRING_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define W_LEN 16
#define MAX_W 16
#define LONG_LINE 1

typedef char string_array[MAX_W][W_LEN];

/**
 * Функция, которая сортирует массив слов в лексикографическом порядке.
 * @ingroup string_array
 * @param array массив слов.
 * @param n количество слов.
 * @return EXIT_SUCCESS в случае, если массив был отсортирован успешно.
 * @return EXIT_FAILURE в случае, если во время сортировки массива произошла ошибка.
 */
int sort_string_array(string_array array, int n);

/**
 * Функция, которая разбивает строку по разделителям, формируя массив слов.
 * @ingroup string_array
 * @param str строка для разбиения.
 * @param words массив слов.
 * @param words_count количество слов.
 * @return EXIT_SUCCESS в случае, если разбиение на слова было произведено успешно.
 * @return EXIT_FAILURE в случае, если во время разбиения возникла ошибка.
 */
int split_string(char *str, string_array words, int *words_count);

/**
 * Функция, которая из массива слов составляет строку, разделяя слова пробелами.
 * @ingroup string_array
 * @param result сформированная строка.
 * @param array массив слов.
 * @param n количество слов.
 * @return EXIT_SUCCESS в случае, если строка была сформирована успешно.
 * @return EXIT_FAILURE в случае, если при формировании строки возникла ошибка.
 */
int string_array_to_string(char *result, string_array array, int n);

#endif //RK2_1_STRING_ARRAY_H
