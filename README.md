# Exercism Solutions

Personal solutions to [Exercism](https://exercism.org) exercises.

## Tracks

| Track | Folder |
|-------|--------|
| C     | `solutions/c/` |

## Folder structure

Each exercise lives directly inside its track folder:

```
solutions/
└── c/
    ├── hello-world/
    │   ├── hello_world.c
    │   └── hello_world.h
    ├── leap/
    │   ├── leap.c
    │   └── leap.h
    └── ...
```

## Building and running

There is no unified build system. Each exercise can be compiled individually with a C compiler. For example:

```sh
cd solutions/c/hello-world
gcc hello_world.c -o hello_world
```

Exercism's C track uses the [Unity](https://www.throwtheswitch.org/unity) test framework. To run the full test suite for an exercise, download the exercise via the Exercism CLI and follow the instructions in the exercise's README.

## Note

These solutions are shared for reference only. Try to solve each exercise on your own before looking here!
