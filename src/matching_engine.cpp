#include "matching_engine.hpp"
#include <iostream>

MatchingEngine::MatchingEngine() {}

void MatchingEngine::process_order(const Order& order) {
    // Simulate matching order: just print for now
    std::cout << "Processing order: " << order.id << std::endl;
    order_book.push(order);
}
