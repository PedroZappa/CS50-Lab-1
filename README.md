# CS50 Lab_1: Population Growth Calculator

This is a C program that calculates the number of years it takes for a population to reach a certain size, given a starting population size, and the end population size as inputs. The program uses the CS50 library for user input, and handles input validation to ensure correct input values.

## Table of Contents

- [Getting Started](#getting-started)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To use this program, you will need to clone the repository to your local machine and compile the code using a C compiler.

```sh
git clone https://github.com/PedroZappa/population.git
cd population
```

## Prerequisites

- You must have a C compiler installed on your system. You can use GCC or Clang.
- You will need the CS50 library installed on your system. You can find installation instructions [here](https://cs50.readthedocs.io/libraries/cs50/c/).

## Usage

Compile the program using your preferred C compiler:

```sh
gcc population.c -o population -lcs50
```

Run the compiled program:

```sh
./population
```

The program will prompt you for the starting population size and the end population size. It will then calculate the number of years needed for the population to reach the desired end size, considering a growth rate of 1/3 and a death rate of 1/4 of the current population per year.
