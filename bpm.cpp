#include <iostream>
#include <cmath> // floor, ceil

float bpm(int beats, float sec);
float abpm(int beats, float sec);

int main(){
    int cases;
    std::cin >> cases;

    for (int i=0; i<cases; ++i){
        int beats;
        float seconds, _minsec, _maxsec, BPM, minABPM, maxABPM;

        std::cin >> beats >> seconds; // get from user

        BPM = bpm(beats, seconds);
        _minsec = floor(seconds);
        _maxsec = ceil(seconds);
        minABPM = floor(abpm(beats, _maxsec));
        maxABPM = ceil(abpm(beats, _minsec));

        std::printf("%.4f %.4f %.4f\n", minABPM, BPM, maxABPM);
    }
    return 0;
}

float bpm(int beats, float sec){
    (float) beats;
    return 60.0 * beats / sec;
}

float abpm(int beats, float sec){
    // time between
    float t = sec / beats;
    return 60/t;
}
