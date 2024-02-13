#include <iostream>

class Rope {
private:
    int length;

public:
    Rope(int length) : length(length) {}

    void set_length(int length) {
        this->length = length;
    }

    int get_length() const {
        return length;
    }

    // Join two ropes together
    Rope join(const Rope& other) const {
        return Rope(length + other.length);
    }

};

// Function template for joining ropes
template<typename T>
T joinRopes(const T& rope1, const T& rope2) {
    return rope1.join(rope2);
}

int main() {
    Rope rope1(5);
    Rope rope2(7);

    Rope joinedRopes = joinRopes(rope1, rope2);

    std::cout << "The combined length of the ropes is: " << joinedRopes.get_length() << std::endl;

    return 0;
}


// full copy chat gpt 
