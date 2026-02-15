# Contributing to Smith

Smith is a small, focused tool and contributions are welcome. Bug fixes, new features, better templates — open a PR.

## Getting started

Fork the repo and clone it:

```bash
git clone https://github.com/<your-username>/smith.git
cd smith
```

Build with CMake:

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

Or directly with g++:

```bash
g++ -std=c++17 -o smith src/main.cpp
```

## Making changes

1. Create a branch from `main`.
2. Make your changes.
3. Test manually — run `smith TestProject`, verify the generated structure builds and runs correctly.
4. Clean up any test directories you created.
5. Open a pull request against `main`.

## Code style

The codebase is a single file and intentionally simple. Keep it that way.

- C++17 standard library only, no external dependencies.
- Use `std::filesystem` for all path and directory operations.
- Templates are embedded as raw string literals. Keep them readable.
- Check file operations for errors — don't assume writes succeed.

## Ideas for contributions

- Add `--help` and `--version` flags
- Run `git init` in the generated project
- Support flags for C++ standard selection (`--std=20`)
- Add a `.clang-format` to generated projects
- Validate project name characters
- Add a LICENSE file to generated projects
- Support different project types (library vs executable)

## Reporting issues

Open an issue on GitHub. Include what you expected, what happened, and your OS/compiler version if relevant.

## License

By contributing, you agree that your contributions will be licensed under the MIT License.
