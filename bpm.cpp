#include <iostream>
#include <cmath> // floor, ceil

float bpm(int beats, float sec);
//float min_abpm(float bp15, int beats);
//float max_abpm(float bp15, int beats);
//float scale_bp15(int beats, float sec);
float min_abpm(int beats, float sec);
float max_abpm(int beats, float sec);

int main(){
    int cases, beats;
    float seconds, BPM, minABPM, maxABPM, scaleBP15;

    std::cin >> cases;

    for (int i=0; i<cases; ++i){

        std::cin >> beats >> seconds; // get from user

        BPM = bpm(beats, seconds);
        scaleBP15 = scale_bp15(beats, seconds);
        std::printf("scale: %f\n", scaleBP15);
        minABPM = min_abpm(scaleBP15, beats);
        maxABPM = max_abpm(scaleBP15, beats);

        //std::cout << minABPM << ' ' << BPM << ' ' << maxABPM << std::endl;
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

//float min_abpm(float bpm){
//    int bp15 = floor(bpm/4.0);
//    (float) bp15;
//    return bp15 * 4.0;
//}

//float min_abpm(float bp15, int beats){
//    return (float) floor(bp15 * beats * 4);
//}

//
//float max_abpm(float bpm){
//    int bp15 = ceil(bpm/4.0);
//    (float) bp15;
//    return bp15 * 4.0;
//}

//float max_abpm(float bp15, int beats){
//    return (float) ceil(bp15 * beats * 4);
//}
//
//float scale_bp15(int beats, float sec){
//    float _scale = 15.0 / sec;
//    return _scale;
//}
