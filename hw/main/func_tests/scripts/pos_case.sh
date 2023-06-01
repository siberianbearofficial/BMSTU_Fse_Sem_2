#!/bin/bash
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

file_stream_in=$1
file_stream_out=$2
file_stream_args=$3
tmp_stream="${SCRIPT_DIR}/../../tmp.txt"

args="${SCRIPT_DIR}/../../$("cat" "$file_stream_args")"

$("${SCRIPT_DIR}/../../app.exe" "$args" < "$file_stream_in" > "$tmp_stream")

printf "\n" >> "$tmp_stream"

exit_code="$("${SCRIPT_DIR}/comparator.sh" ${tmp_stream} ${file_stream_out})"

echo $exit_code

