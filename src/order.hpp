#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>

class Order {
public:
    int id;
    double price;
    int quantity;

    Order(int id, double price, int quantity)
        : id(id), price(price), quantity(quantity) {}

    bool operator<(const Order& other) const {
        return price < other.price;
    }
};

#endif
