// Threading-Example.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>
#include <functional>
#include <string>

using namespace std;

string FizzBuzz(int number, int divider, string input) {
    if (number % divider == 0) {
        return input;
    }
    else {
        return "";
    }
}

inline string FizzBuzz(int number) {   
    return  to_string(number);
}

int main()
{
    auto FB = [](int x) {
        for (int i = 1; i <= x; i++) {
            string output = "";
            output += FizzBuzz(i, 3, "Fizz");
            output += FizzBuzz(i, 5, "Buzz");
            output += FizzBuzz(i, 7, "Gezz");
            if (output == "") { output += FizzBuzz(i); }
            cout << output << endl;
        }
    };
    thread thr(FB, 105);
    thr.join();

    return 0;
}

