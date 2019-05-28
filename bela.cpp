#include <iostream>

void updatePts(int *intPtr, char suit);

int main(){
    int num_hands;
    char suit;
    std::cin >> num_hands >> suit; // number of hands, dominant suit

    int pts = 0;
    int *p = &pts;
    for (int i=0; i<(4*num_hands); ++i){
        updatePts(p, suit);
    }

    std::cout << pts << std::endl;
    return 0;
}

void updatePts(int *intPtr, char suit){
    /* Incremement the value of `points` based on line-by-line
    user input, using `suit` to denote the dominant suit played.
    Points scheme:

    card    dom-suit    non-dom suit
    A       11          11
    K       4           4
    Q       3           3
    J       20          2
    T       10          10
    9       14          0
    8       0           0
    7       0           0

    @param int reference points: reference to points integer
    @param const char suit: dominant suit*/

    char card[2]; // will contain the suit and value
    std::cin >> card;

    if      (card[0] == 'A')  { *intPtr+=11; }
    else if (card[0] == 'K')  { *intPtr+=4; }
    else if (card[0] == 'Q')  { *intPtr+=3; }
    else if (card[0] == 'J')  {
        if  (card[1] == suit) { *intPtr+=20; }
        else                  { *intPtr+=2;}
    }
    else if (card[0] == 'T')  { *intPtr+=10; }
    else if (card[0] == '9')  {
        if  (card[1] == suit) { *intPtr+=14; }
    }
    // any other cards, don't need to modify points at all (all are 0)
}
