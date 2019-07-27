#include <stdlib.h>

int main(){
    system("g++ -std=c++11 src/main.cpp src/matrix.cpp src/layer.cpp src/network.cpp src/random_engine.cpp src/bat_swarm.cpp src/bat.cpp -o main");
}