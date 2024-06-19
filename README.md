# Seconds to Days Converter

This C++ program converts a given number of seconds into days, hours, minutes, and remaining seconds. It provides a simple command-line interface to input the number of seconds and displays the corresponding values for days, hours, minutes, and seconds.

## Usage

1. Compile the `main.cpp` file using a C++ compiler.
2. Run the compiled executable.
3. When prompted, enter the number of seconds you want to convert.
4. The program will output the equivalent values for days, hours, minutes, and remaining seconds.

## Example

```c
Enter number of seconds:
123456

123456 seconds has: 1 days, 10 hours, 17 minutes and 36 seconds
```

In the above example, the user entered 123456 seconds, and the program converted it to 1 day, 10 hours, 17 minutes, and 36 seconds.

## Implementation Details

The program uses the following formula to convert seconds to days, hours, minutes, and remaining seconds:

```cpp
days = init_seconds / 86400
hours = (days - (int)days) * 24
minutes = (hours - (int)hours) * 60
seconds = (minutes - (int)minutes) * 60
```

Here's a breakdown of the calculations:

- `days` is calculated by dividing the initial number of seconds by the number of seconds in a day (86400).
- `hours` is calculated by taking the fractional part of `days` and multiplying it by 24.
- `minutes` is calculated by taking the fractional part of `hours` and multiplying it by 60.
- `seconds` is calculated by taking the fractional part of `minutes` and multiplying it by 60.

The program uses integer casting `((int))` to extract the integer part of the calculated values for `days`, `hours`, and `minutes`, and displays the remaining fractional part as `seconds`.

## Note

This program assumes that the input is a valid positive number of seconds. It does not handle negative values or non-numeric inputs.
