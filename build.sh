#!/usr/bin/env bash
# Fetch the latest version of the library
fetch() {
  echo "Nothing to fetch"
}

# Test the project
test() {
echo "Running 01-vec2-operations.cxx ..."
clang -I. -o 01.exe examples/01-vec2-operations.cxx    && ./01.exe && echo -e "\n"
echo "Running 02-vec3-operations.cxx ..."
clang -I. -o 02.exe examples/02-vec3-operations.cxx    && ./02.exe && echo -e "\n"
echo "Running 03-matrix-operations.cxx ..."
clang -I. -o 03.exe examples/03-matrix-operations.cxx  && ./03.exe && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test
elif [[ "$1" == "fetch" ]]; then fetch
else echo "Usage: $0 {fetch|test}"; fi
