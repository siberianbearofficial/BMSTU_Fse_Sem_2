#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

"${SCRIPT_DIR}/build_release.sh"
"${SCRIPT_DIR}/app.exe"
"${SCRIPT_DIR}/clean.sh"
