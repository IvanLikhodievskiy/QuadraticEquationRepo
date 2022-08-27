# QuadraticEquationRepo

## Brief

The project with implementation of several functions that solves quadratic equation

## Features

1. *Solves a quadratic equation with given coefficients*
2. *Can take flag `-test` during execution for making unit tests*
3. *Includes doxygen style documentation*

## Build
Type the following commands in the command line
```shell
git clone https://github.com/IvanLikhodievskiy/QuadraticEquationRepo.git
```
```shell
cd QuadraticEquationRepo
```
```
mkdir obj
```
```shell
cd QuadraticEquationRepo
```
```shell
make
```

## Usage

The program solves quadratic equations. It takes three coefficients (a, b and c) for
the equation a*x² + b*x + c = 0 and solves the equation with these coefficients.
To run the program type
```
solution
```
You will get the message that no tests were done, they can be turned on via special flag.
Then just follow the instructions of the program

### Modes

The program has a special mode with a flag `-test` that turns on running some tests before
the input of the coefficients

1. *Running the program with unit tests for the function that solves an equaion. These tests
check different whether program solves different types of equations correctly*
```shell
solution -test
```
