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

int main()
{
    auto FB = [](int x) {
        for (int i = 1; i <= x; i++) {
            string output = "";
            if (i % 3 == 0) { output += "Fizz"; }
            if (i % 5 == 0) { output += "Buzz"; }

            if (output == "") {
                string str = to_string(i);
                output = str;
            }
            cout << output << endl;
        }
    };
    thread thr(FB, 15);
    thr.join();

    return 0;
}

