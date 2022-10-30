# Tiny C++ Cookiecutter

Cookiecutter to generate tiny C++ projects.

## Usage

Run:
```bash
cookiecutter gh:npalladium/tiny-cpp-cookiecutter -o tiny-cpp-cookiecutter-example
```

Example fields:
```
project [mini-cpp]: A Tiny CPP Project
author_name [author_name]: npalladium
Select license:
1 - MIT license
2 - MPL 2.0
3 - BSD 2-Clause License
4 - BSD 3-Clause License
5 - ISC license
6 - Apache Software License 2.0
7 - GNU Lesser General Public License v3 or later (LGPLv3+)
8 - GNU Lesser General Public License v3 (LGPLv3)
9 - GNU Lesser General Public License v2.1 or later (LGPLv2+)
10 - GNU Lesser General Public License v2.1 (LGPLv2)
11 - No License
Choose from 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 [1]: 2
Select remove_license_file:
1 - no
2 - yes
Choose from 1, 2 [1]:
version [0.1]:
Select cpp_standard:
1 - 20
2 - 17
3 - 14
4 - 11
Choose from 1, 2, 3, 4 [1]: 2
executable [default.out]:
folder [default]: example
libraries [default]: {"Boost": {"components": ["program_options"], "version": "1.79"}}
```

## License

[MIT](https://choosealicense.com/licenses/mit/)
