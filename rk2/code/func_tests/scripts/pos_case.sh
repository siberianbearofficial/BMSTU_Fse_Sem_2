#!/bin/bash
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd)

file_stream_in=$1
file_stream_out=$2
file_stream_args=$3

if [ -f file_stream_args ]; then
	args="${SCRIPT_DIR}/../../$("cat" "$file_stream_args")"
else
	args=""
fi

"${SCRIPT_DIR}/../../app.exe" "$args"

if [ $? -eq 0 ]; then

	exit_code="$("${SCRIPT_DIR}/comparator.sh" "${tmp_stream}" "${file_stream_out}")"

	echo "$exit_code"
else
	echo "1"
fi

