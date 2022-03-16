#include <iostream>

//using namespace std;

void setup(void);
void loop(void);

int main()
{
    setup();
    while(true)
    {
        loop();
    }
    return 0;
}

void setup(void)
{
    // Tänne kaikki alustukset ennen ikiluuppia
}

void loop(void)
{
    int luku = 5;
    float koe = 1.2;
    //std::cout<<"Hello olio-ohjelmointi"<<std::endl;
    printf("Luku = %d ja flotari = %f\r\n",luku,koe);
    // Tänne sitten kaikki mitä jatkuvasti toistetaan maailman tappiin asti.
}
