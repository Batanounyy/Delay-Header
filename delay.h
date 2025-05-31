//Header file made by Abdelrahman ElBataouny
//Github: https://github.com/Batanounyy/
//LinkedIn: https://www.linkedin.com/in/batanouny
#ifndef DELAY_H
#define DELAY_H
#include <chrono>
#include <thread>
namespace Delay {
	// Function to delay execution for given number of Seconds
	inline void delay_s(long long seconds) {
		if (seconds > 0) {
			std::this_thread::sleep_for(std::chrono::seconds(seconds));
		}
	}
	// Function to delay execution for given number of Milliseconds
	inline void delay_ms(long long milliseconds) {
		if (milliseconds > 0) {
			std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
		}
	}
	// Function to delay execution for given number of Microseconds
	inline void delay_us(long long microseconds) {
		if (microseconds > 0) {
			std::this_thread::sleep_for(std::chrono::microseconds(microseconds));
		}
	}
	// Function to delay execution for given number of Nanoseconds
	inline void delay_ns(long long nanoseconds) {
		if (nanoseconds > 0) {
			std::this_thread::sleep_for(std::chrono::nanoseconds(nanoseconds));
		}
	}
	// Function to delay execution for given number of Seconds with print on screen
	inline void delay_s_counter(long long seconds) {
	#include <iostream>
		if (seconds > 0) {
			for (int i = seconds; i > 0; --i) {
				std::cout << i << " seconds left" << std::endl;
				std::this_thread::sleep_for(std::chrono::seconds(1));
			}
		}
	}
	// Function to delay execution for given number of Seconds with print on screen Error Output
	inline void delay_s_counterErr(long long seconds) {
	#include <iostream>
		if (seconds > 0) {
			for (int i = seconds; i > 0; --i) {
				std::cerr << i << " seconds left" << std::endl;
				std::this_thread::sleep_for(std::chrono::seconds(1));
			}
		}
	}
}
#endif


