#include "market.h"
#include <iostream>

using namespace std;

shop_worker::shop_worker() {
    money = 1000;
}
void shop_worker::work() {
    money += 100;
}
void shop_worker::fine() {
    money -= 100;
}
casier::casier() {
    kv_chekov = 50;
}
void casier::sell() {
    kv_chekov--;
}
void casier::open() {
    std::cout << "Cash register is open";
}

cleaner::cleaner() {
    mulo = 20;
}
void cleaner::clean() {
    mulo -= 2;
}
ectrician::ectrician() {
    lamp = 15;
}
void ectrician::replace_lamp() {
    lamp--;
}
guard::guard() {
    krossword = 10;
}
void guard::rehat_krossword() {
    krossword--;
}
hall_worker::hall_worker(){
    price_tag = 100;
    close_box = 100;
}
void hall_worker::replace_price(){
    price_tag -= 10;
}
void hall_worker::stavit_products(){
    close_box --;
}
