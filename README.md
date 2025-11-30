# Connect4 — Connect Four (C)

Simple Connect Four implementation written in C.

## Status

- Language: C
- Build system: `Makefile` included

## Purpose

Terminal-based Connect Four game for two players. The program builds a game grid, accepts column choices from players, drops tokens, and checks for a winner or a draw.

## Build

The repository includes a `Makefile`. To compile the project, run:

```bash
make
```

This produces an executable named `connect4`.

## Usage

Run the program with two arguments: number of rows and number of columns.

```bash
./connect4 <rows> <columns>

# Example:
./connect4 6 7
```

Notes:

- The current implementation converts `argv[1]` and `argv[2]` with `atoi` and expects exactly two arguments (`argc == 3`) before starting the game loop.
- There is limited input validation in this version. Invalid or missing arguments or malformed user input may lead to undefined behavior. Consider adding robust validation for production use.

## Clean

```bash
make clean       # remove object files and executable
make clean_objs  # remove only object files
```

## Project structure

- `main.c`       : main entry point, game loop and turn handling.
- `matrice.c`    : functions to initialize, free and display the grid.
- `token.c`      : logic to insert a token into the chosen column.
- `veriff.c`     : functions to check for win conditions and end of game.
- `ft_putstr.c`, `ft_putchar.c`, `ft_putnbr.c` : small output helper functions.
- `header.h`     : shared includes and function prototypes.
- `Makefile`     : build and clean rules.