#!/bin/bash
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

pos_start="${SCRIPT_DIR}/../data/pos_"
in_end="_in.txt"
out_end="_out.txt"
args_end="_args.txt"
neg_start="${SCRIPT_DIR}/../data/neg_"

echo "Positive tests:"
i=1
while true; do
  if [[ i -lt 10 ]]; then
    pos_in_name="${pos_start}0${i}${in_end}"
    pos_out_name="${pos_start}0${i}${out_end}"
    pos_args_name="${pos_start}0${i}${args_end}"
  else
    pos_in_name="${pos_start}${i}${in_end}"
    pos_out_name="${pos_start}${i}${out_end}"
    pos_args_name="${pos_start}${i}${args_end}"
  fi

  if [[ -e $pos_in_name ]]; then
    exit_code=$("${SCRIPT_DIR}/pos_case.sh" "$pos_in_name" "$pos_out_name" "$pos_args_name")

    if [[ $exit_code -eq 0 ]]; then
      echo PASSED
    else
      echo FAILED
    fi
  else
    break
  fi

  i=$((i + 1))
done

echo "Negative tests:"
i=1
while true; do
  if [[ i -lt 10 ]]; then
    neg_in_name="${neg_start}0${i}${in_end}"
    neg_args_name="${neg_start}0${i}${args_end}"
  else
    neg_in_name="${neg_start}${i}${in_end}"
    neg_args_name="${neg_start}${i}${args_end}"
  fi

  if [[ -e $neg_in_name ]]; then
    exit_code=$("${SCRIPT_DIR}/neg_case.sh" "$neg_in_name" "$neg_args_name")

    if [[ $exit_code -gt 0 ]]; then
      echo PASSED
    else
      echo FAILED
    fi
  else
    break
  fi

  i=$((i + 1))
done
