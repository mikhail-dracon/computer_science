#include "products.hpp"
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
    std::cout << "Smells like ...";
}
curd::curd(){
    lactoza +=20;
    fat_percentage = 25;
}
void curd::degrease(){
    lactoza -= 25;
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
fruits::fruits(){
    fructose = 100;
    juiciness = 100;
}
void fruits::squeeze_juice(){
    fructose*=0.1;
    juiciness*=0.1;
}
void fruits::dry(){
    juiciness = 0;
}
apple::apple(){
    color = 'r';
}
