#include <iostream>

class Stove {
    private:
        int temperature = 0;
    
    public:
        Stove(int temperature) {
            std::cout << "Stove created" << std::endl;
            setTemperature(temperature);
        }
        void setTemperature(int temp) {
            if (temp < 0) {
                std::cout << "Temperature cannot be negative" << std::endl;
            } else {
                temperature = temp;
            }
        }

        int getTemperature() {
            return temperature;
        }
};

int main() {
    Stove stove1(100);
    std::cout << "Stove temperature: " << stove1.getTemperature() << std::endl;

    Stove stove2(-10);
    std::cout << "Stove temperature: " << stove1.getTemperature() << std::endl;

    return 0;
}