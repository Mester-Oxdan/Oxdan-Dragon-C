#include <opencv2/opencv.hpp>
#include <windows.h>
#include "all_diclarations.h"

void screen_recorder_start()
{
    cv::VideoWriter writer;
    cv::Mat frame;
    HWND hwndScreen = GetDesktopWindow();
    HDC hdcScreen = GetDC(hwndScreen);
    HDC hdcMem = CreateCompatibleDC(hdcScreen);
    HBITMAP hbmScreen = CreateCompatibleBitmap(hdcScreen, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
    SelectObject(hdcMem, hbmScreen);

    int codec = cv::VideoWriter::fourcc('X', 'V', 'I', 'D');
    double fps = 25.0;
    std::string outputFilename = "screen_recording.avi";

    cv::namedWindow("Screen Recorder", cv::WINDOW_NORMAL);
    cv::resizeWindow("Screen Recorder", 640, 480);

    bool recording = true;
    bool paused = false;

    while (recording)
    {
        if (!paused)
        {
            BitBlt(hdcMem, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), hdcScreen, 0, 0, SRCCOPY);
            frame = cv::Mat(GetSystemMetrics(SM_CYSCREEN), GetSystemMetrics(SM_CXSCREEN), CV_8UC4);
            GetBitmapBits(hbmScreen, GetSystemMetrics(SM_CXSCREEN) * GetSystemMetrics(SM_CYSCREEN) * 4, frame.data);
            cv::cvtColor(frame, frame, cv::COLOR_BGRA2BGR);

            if (!writer.isOpened())
                writer.open(outputFilename, codec, fps, frame.size());

            writer.write(frame);
            cv::imshow("Screen Recorder", frame);
        }

        int key = cv::waitKey(1);

        switch (key)
        {
        case 27: // Esc key
            recording = false;
            writer.release();
            cv::destroyAllWindows();
            ReleaseDC(hwndScreen, hdcScreen);
            DeleteDC(hdcMem);
            DeleteObject(hbmScreen);
            check_start_start();
        case 32: // Space key to pause/resume
            paused = !paused;
            break;
        }
    }

    writer.release();
    cv::destroyAllWindows();
    ReleaseDC(hwndScreen, hdcScreen);
    DeleteDC(hdcMem);
    DeleteObject(hbmScreen);

}
