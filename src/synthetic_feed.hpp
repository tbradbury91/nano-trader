#ifndef SYNTHETIC_FEED_HPP
#define SYNTHETIC_FEED_HPP

#include "order.hpp"
#include <cstdlib>
#include <ctime>

class SyntheticFeed {
public:
    SyntheticFeed() { std::srand(std::time(0)); }

    Order generate_order() {
        int id = std::rand();
        double price = (std::rand() % 1000) + 100.0;  
        int quantity = (std::rand() % 100) + 1;      

        return Order(id, price, quantity);
    }
};

#endif
