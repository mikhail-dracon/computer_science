#include "products.h"
#include <iostream>

products::products() {
    quantity=10;
}
void products::buy() {
    quantity++;
}
void products::sell() {
    quantity--;
}
milk::milk() {
    lactoza = 10;
}
void milk::doit() {
    lactoza+=5;
}
void milk::skisnet() {
    std::cout << "ну и вонь";
}
water::water() {
    volume = 100;
}
void water::vipit() {
    volume-=10;
}
vegetables::vegetables() {
    hlorophil = 10;
}
void vegetables::uvyanut() {
    hlorophil= hlorophil-10 >= 0 ? hlorophil-10 : 0;
}
pepsi::pepsi() {
    gasi=100;
}
void pepsi::vzboltat() {
    gasi+=10;
}

