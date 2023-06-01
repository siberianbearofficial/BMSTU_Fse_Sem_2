#!/bin/bash

get_digits_from_line() {
  local line=$1
  local -a digits
  local -i i=0
  for word in $line; do
    if [[ $word =~ ^[+-]?[0-9]+([.][0-9]+)?([e][+-]?[0-9]+)?$ ]]; then
      digits[$i]=$word
      ((i++))
    fi
  done
  echo "${digits[@]}"
}

if [[ $# -ne 2 ]]; then
  echo "Usage: $0 file1 file2 [-v]" >&2
  exit
fi

if [ ! -f "$1" ]; then
  echo 21
  exit
fi

if [ ! -f "$2" ]; then
  echo 22
  exit
fi

declare -a digits_1

while IFS= read -r line; do
  digits_cur_1=("$(get_digits_from_line "$line")")
  digits_1+=("${digits_cur_1[@]}")
done <"$1"

declare -a digits_2

while IFS= read -r line; do
  digits_cur_2=("$(get_digits_from_line "$line")")
  digits_2+=("${digits_cur_2[@]}")
done <"$2"

for ((i = 0; i < ${#digits_1[@]}; i++)); do
  if [ "${digits_1[$i]}" != "${digits_2[$i]}" ]; then
    echo "1"
    exit
  fi
done

echo "0"

