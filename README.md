# Smith

This project was created while I was looking for an easy way to start a minimal
project in C++, inspired by `cargo new`. Smith allows you to generate a ready-to-build
C++ project with a single command, including `src/`, `include/`, `tests/`,
`CMakeLists.txt`, and `README.md`.

## Features

- Generates a minimal C++ project structure.
- Automatically replaces placeholders with your project name.
- Includes a basic `main.cpp` and test file.
- Ready-to-build with CMake out of the box.
- Self-contained: no external templates required.

## Installation

Compile the smith executable:

```bash
g++ -std=c++17 -o smith src/main.cpp
```

(Optional) Move it to a location in your PATH to use globally:

```bash
sudo mv smith /usr/local/bin/
```

## Usage

Generate a new project:

```bash
smith MyProject
```

This will create:

```
MyProject/
 ├─ src/
 │   └─ main.cpp
 ├─ include/
 ├─ tests/
 │   └─ test.cpp
 ├─ CMakeLists.txt
 └─ README.md
```

Compile and run your project:

```bash
cd MyProject/build
cmake ..
cmake --build .
./MyProject
```

## Contributing

Smith is open source! Feel free to:

- Add new templates
- Improve the project structure
- Add optional flags (C++ standard, tests, README, etc.)

Please open an issue or pull request if you have ideas or improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.