# Binary to Decimal Converter

A simple C++ command-line program that converts binary numbers into their decimal equivalents.

## Features

- Converts binary numbers to decimal
- Validates user input
- Detects invalid binary numbers
- Simple command-line interface

## How It Works

The program reads each binary digit from left to right.

For every digit, the current decimal value is multiplied by 2 and the next binary digit is added.

For example:

1010₂ = 10₁₀

## Example

**Input:** `1010`

**Output:** `10`

**Input:** `11001`

**Output:** `25`

**Invalid Input:** `10201`

**Output:** `Invalid binary number!`
## Demo

![Program Demo](demo.jpeg)
## How to Run

### Compile

```bash
g++ main.cpp -o binary_converter
