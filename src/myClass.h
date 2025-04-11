#pragma once

#include <random>

template <typename T>
class RandomNumberGenerator {
public:
    RandomNumberGenerator() : engine(std::random_device{}()) {}

    T generate() {
        return dist(engine);
    }

private:
    std::mt19937 engine;
    std::uniform_real_distribution<T> dist;
};

