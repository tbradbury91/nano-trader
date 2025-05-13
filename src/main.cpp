#include <iostream>
#include <chrono>
#include "matching_engine.hpp"
#include "synthetic_feed.hpp"

int main() {
    MatchingEngine engine;

    SyntheticFeed feed;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000000; ++i) {
        engine.process_order(feed.generate_order());
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    
    std::cout << "Processed 1 million orders in " << duration.count() << " seconds." << std::endl;
    
    return 0;
}