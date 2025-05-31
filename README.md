# **C++ Delay Utility Header**

A simple, lightweight, header-only C++ utility for introducing precise delays and countdown timers into your projects. Perfect for controlling execution flow, simulations, and simple timed operations.

![C++](https://img.shields.io/badge/C++-11%2B-blue?logo=cplusplus)  
![License](https://img.shields.io/badge/License-MIT-green)  
![Header-only](https://img.shields.io/badge/Header--only-Yes-brightgreen)  
---
## **Author** ✍️
- **Abdelrahman ElBataouny**
- **GitHub:** [Batanounyy](https://github.com/Batanounyy/)
- **LinkedIn:** [Abdelrahman ElBataouny](https://www.linkedin.com/in/batanouny)
---
## **Documentation**  
- [`Notion Documentation for the Project`](https://www.notion.so/Documentation-delay-h-C-Delay-Utility-Header-204da1083c44808ba4f9ccd64b481393?pvs=4)
- [`Notion Docs. for all Projects`](https://www.notion.so/Batanouny-Codes-1f8da1083c4480e1b5e7c6632b54b259)
---

## **Features** ✨
✔️ **Easy Integration:** Just include one header file (`delay.h`)!
✔️ **Multiple Time Units:** Functions for delays in seconds, milliseconds, microseconds, and nanoseconds.
✔️ **Countdown Timers:** Display a countdown to `std::cout` or `std::cerr`.
✔️ **Modern C++:** Utilizes C++11 `<chrono>` and `<thread>` for reliable and cross-platform time management.
✔️ **Clear & Inline:** Functions are `inline` for potential performance benefits in a header-only context.
---

## **Installation** 📦

### **Method 1: Single-file include**
1.  Download [`delay.h`](delay.h) (or copy the content).
2.  Place `delay.h` in your project’s include directory or in the same directory as your source files.
3.  Include it in your C++ files:
    ```cpp
    #include "delay.h"
    ```
---

## **Usage** 🚀  

### **Basic Example**  
```cpp
#include "delay.h"
#include <iostream> // Make sure this is included for std::cout

int main() {
    std::cout << "Starting process..." << std::endl;

    Delay::delay_s(2); // Pause for 2 seconds
    std::cout << "2 seconds passed." << std::endl;

    Delay::delay_ms(500); // Pause for 500 milliseconds
    std::cout << "Another 500ms passed." << std::endl;

    return 0;
}
```
---

## **API Reference** 📖  

| Function Signature | Description | Example |
|--------|------------|---------|
| `void delay_s(long long seconds)` | Pauses execution for `seconds`. | `Delay::delay_s(1);` |
| `void delay_ms(long long milliseconds)` | Pauses execution for `milliseconds`. | `Delay::delay_ms(100);` |
| `void delay_us(long long microseconds)` | Pauses execution for `microseconds`. | `Delay::delay_us(1000);` |
| `void delay_ns(long long nanoseconds)` | Pauses execution for `nanoseconds`. | `Delay::delay_ns(500000);` |
| `void delay_s_counter(long long seconds)` | Counts down `seconds` to `std::cout`, pausing 1s each step. | `Delay::delay_s_counter(3);` |
| `void delay_s_counterErr(long long seconds)` | Counts down `seconds` to `std::cerr`, pausing 1s each step. | `Delay::delay_s_counterErr(3);` |

---

## **Important Notes** 
`#include <iostream>` Placement: For the countdown functions (`delay_s_counter` and `delay_s_counterErr`), `<iostream>` is included within the function body in `delay.h`. For larger projects and best practice, consider moving all general includes like `<iostream>` to the top of `delay.h` or ensure they are included in your `main.cpp` files.
Nanosecond Precision (`delay_ns`): While you can specify nanoseconds, the actual sleep precision is limited by the operating system's timer resolution. Don't expect true nanosecond accuracy for the sleep duration. 
---
## **Why Use this** 
While `std::this_thread::sleep_for` from `<thread>` and `<chrono>` is powerful, this `delay.h` header provides:
Convenience: Simple, direct function calls for common time units.
Readability: `Delay::delay_s(5)` can be more immediately clear than the full `std::this_thread::sleep_for(std::chrono::seconds(5))`.
Added Utilities: Built-in countdown timers for quick feedback or simple timed prompts.
Header-Only Simplicity: Easy to drop into any project.

---

## **License** 📜  
MIT © Abdelrahman ElBatanouny – Free for personal and commercial use.  

---

**Happy coding!** 💻  

--- 
