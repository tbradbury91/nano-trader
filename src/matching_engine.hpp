#ifndef MATCHING_ENGINE_HPP
#define MATCHING_ENGINE_HPP

#include "order.hpp"
#include <queue>

class MatchingEngine {
public:
    MatchingEngine();
    void process_order(const Order& order);

private:
    std::priority_queue<Order> order_book;
};

#endif
