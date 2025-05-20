# Nano-Trader: Low-Latency Cryptocurrency Trading Bot

A lightweight, modular crypto trading bot focused on speed and simplicity, built to demonstrate ultra-low latency execution and market data handling.

## Why Nano-Trader?

Nano-Trader processes live market data and executes trades with minimal delay. It’s designed to highlight core skills in handling asynchronous events, API communication, and efficient C++ coding.

## Tech Stack

- C++17 with focus on performance and minimal dependencies  
- WebSocket API for live market data feeds  
- REST API integration for order placement  
- Asynchronous event-driven architecture  
- Cross-platform build using CMake

## How to Build and Run

```bash
git clone https://github.com/tbradbury91/nano-trader.git
cd nano-trader
mkdir build && cd build
cmake ..
make
./nano-trader --config ../config.json

## Performance Highlights

- Real-time market data processing with sub-millisecond latency
- Efficient event loop minimizing CPU usage
- Modular code designed for easy extension and customization
