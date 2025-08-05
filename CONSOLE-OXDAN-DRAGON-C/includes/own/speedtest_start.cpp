#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <windows.h>
#include "all_diclarations.h"

// Spinner control
std::atomic<bool> spinner_running(true);

// Spinner function
void spinner(const std::string& label) {
    const char frames[] = { '|', '/', '-', '\\' };
    int i = 0;
    while (spinner_running) {
        std::cout << "\r" << label << " " << frames[i++ % 4] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    //std::cout << "\r" << label << " Done!    " << std::endl;
    //check_start_start();
}

// Simulated speed test function
void perform_speed_test(double& download_speed, double& upload_speed, double& ping_ms) {
    // Simulate network delay and processing
    std::this_thread::sleep_for(std::chrono::seconds(3));  // "download"
    download_speed = 92.5;

    std::this_thread::sleep_for(std::chrono::seconds(2));  // "upload"
    upload_speed = 9.3;

    ping_ms = 21.4;
}

void speedtest_start() {
    std::wcout << "🔍 Finding best server..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    double download = 0, upload = 0, ping = 0;

    // Start spinner
    std::thread spin_thread(spinner, "⬇️  Testing download/upload speed...");

    // Perform the "test"
    perform_speed_test(download, upload, ping);

    // Stop spinner
    spinner_running = false;
    spin_thread.join();

    // Output results
    string filePath = "start " + oxdan_dragon_c + "/includes/own/test_python_py_speedtest.py";
    system(filePath.c_str());
    check_start_start();
    //return 0;
}
