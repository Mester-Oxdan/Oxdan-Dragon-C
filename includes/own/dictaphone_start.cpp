#include <portaudio.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <malloc.h>
#include <iostream>
#include "all_diclarations.h"

using namespace std;

#define SAMPLE_RATE  (44100)
#define FRAMES_PER_BUFFER (1024)
//#define NUM_SECONDS     (5)

#pragma warning(disable : 4996).

//define global variables
PaStream* stream;
int record_state;
int16_t* recorded_data;
int num_recorded_frames;

//callback functions
static int record_callback(const void* inputBuffer, void* outputBuffer,
    unsigned long framesPerBuffer,
    const PaStreamCallbackTimeInfo* timeInfo,
    PaStreamCallbackFlags statusFlags,
    void* userData)
{
    const int16_t* in_data = (int16_t*)inputBuffer;
    (void)outputBuffer; /* Prevent unused variable warning. */
    (void)timeInfo;
    (void)statusFlags;
    (void)userData;

    if (record_state) {
        memcpy(recorded_data + num_recorded_frames, in_data, framesPerBuffer * sizeof(int16_t));
        num_recorded_frames += framesPerBuffer;
    }

    return 0;
}

//function to start recording
int start_recording() {
    record_state = 1;
    return 0;
}

//function to stop recording
int stop_recording() {
    record_state = 0;
    return 0;
}

//function to save the recorded data to a wav file
int save_to_wav(const char* filename) {
    FILE* fp;
    int n;

    fp = fopen(filename, "wb");
    if (!fp) return -1;

    //write wav header
    fwrite("RIFF", 1, 4, fp);
    n = num_recorded_frames * 2 + 36;
    fwrite(&n, 4, 1, fp);
    fwrite("WAVEfmt ", 1, 8, fp);
    n = 16;
    fwrite(&n, 4, 1, fp);
    n = 1;
    fwrite(&n, 2, 1, fp);
    n = 1;
    fwrite(&n, 2, 1, fp);
    n = SAMPLE_RATE;
    fwrite(&n, 4, 1, fp);
    n = SAMPLE_RATE * 2;
    fwrite(&n, 4, 1, fp);
    n = 2;
    fwrite(&n, 2, 1, fp);
    n = 16;
    fwrite(&n, 2, 1, fp);
    fwrite("data", 1, 4, fp);
    n = num_recorded_frames * 2;
    fwrite(&n, 4, 1, fp);
    fwrite(recorded_data, 2, num_recorded_frames, fp);
    fclose(fp);

    return 0;
}

//main function
int dictaphone_start()
{
    int NUM_SECONDS;
    cout << "\n\033[0;33mEnter time to finish recording voice (in seconds): \033[0;37m";
    cin >> NUM_SECONDS; 

    PaStreamParameters inputParameters;
    PaError err;

    //allocate memory for recorded data
    recorded_data = (int16_t*)malloc(static_cast<size_t>(NUM_SECONDS) * SAMPLE_RATE * 2);
    if (!recorded_data) return -1;

    //initialize portaudio
    err = Pa_Initialize();
    if (err != paNoError) return -1;

    //open input stream
    inputParameters.device = Pa_GetDefaultInputDevice();
    inputParameters.channelCount = 1;
    inputParameters.sampleFormat = paInt16;
    inputParameters.suggestedLatency = Pa_GetDeviceInfo(inputParameters.device)->defaultLowInputLatency;
    inputParameters.hostApiSpecificStreamInfo = NULL;
    err = Pa_OpenStream(
        &stream,
        &inputParameters,
        NULL,
        SAMPLE_RATE,
        FRAMES_PER_BUFFER,
        paClipOff,
        record_callback,
        NULL
    );
    if (err != paNoError) return -1;

    //start recording
    err = Pa_StartStream(stream);
    if (err != paNoError) return -1;

    start_recording();
    cout << "\n\033[0;32m[!] Recording voice!\033[0;37m" << endl;
    Pa_Sleep(NUM_SECONDS * 1000);
    stop_recording();
    cout << "\n\033[0;31m[!] Recording voice Finished!\033[0;37m" << endl;

    //stop recording
    err = Pa_CloseStream(stream);
    if (err != paNoError) return -1;

    //terminate portaudio
    err = Pa_Terminate();
    if (err != paNoError) return -1;

    //save recorded data to a wav file
    save_to_wav("Output_recorded_voice.wav");

    //free allocated memory
    free(recorded_data);
    check_start_start();
}