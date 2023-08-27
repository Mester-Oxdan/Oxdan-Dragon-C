#include "opencv2\opencv.hpp"
#include "opencv2\highgui.hpp"
#include <iostream>
#include <vector>
#include <windows.h>
#include <string>
#include <conio.h>
#include <portaudio.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <malloc.h>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;
using namespace cv;

void webcam_recorder_start()
{
	printf("\n\033[0;31mPress 'Esc' for exit\033[0;37m\n");

	while (true)
	{
		//system("cls");
		// Create video capturing object
		// 0 opens default camera, otherwise filename as argument
		cv::VideoCapture video(0);

		// Check that video is opened
		if (!video.isOpened()) - 1;

		// For saving the frame
		cv::Mat frame;

		// Get video resolution
		int frameWidth = video.get(cv::CAP_PROP_FRAME_WIDTH);
		int frameHeigth = video.get(cv::CAP_PROP_FRAME_HEIGHT);

		// Create video writer object
		cv::VideoWriter output("output_recorded_video.avi", cv::VideoWriter::fourcc('M', 'J', 'P', 'G'), 30, cv::Size(frameWidth, frameHeigth));

		// Loop through available frames
		while (video.read(frame)) 
        {

			// Display the frame
			cv::imshow("Video: ", frame);

			// Write video frame to output
			output.write(frame);

			// For breaking the loop
			if (cv::waitKey(27) >= 0)
			{

                // Release video capture and writer
                output.release();
                video.release();

                // Destroy all windows
                cv::destroyAllWindows();

                check_start_start();

			}

		} // end while (video.read(frame))

        // Release video capture and writer
        output.release();
        video.release();

        // Destroy all windows
        cv::destroyAllWindows();

        check_start_start();

	}

    // Destroy all windows
    cv::destroyAllWindows();

    check_start_start();

}