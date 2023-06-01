#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

"${SCRIPT_DIR}/build_debug.sh"
"${SCRIPT_DIR}/func_tests/scripts/func_tests.sh"
"${SCRIPT_DIR}/collect_coverage.sh"
"${SCRIPT_DIR}/clean.sh"
