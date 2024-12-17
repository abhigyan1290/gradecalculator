#include <iostream>
#include <iomanip>

inline double calculate_val(double curr_weight, double final_weight, int desired_grade) {
    return (desired_grade - curr_weight) / final_weight;
}

int main() {
    double curr_percentage, final_weight;
    std::cout << "Enter current percentage: ";
    std::cin >> curr_percentage;
    std::cout << "Enter the weight of the final (as a percentage): ";
    std::cin >> final_weight;

    final_weight /= 100.0;
    double curr_weight = (1.0 - final_weight) * curr_percentage;

    std::cout << std::fixed << std::setprecision(2)
              << "A: " << calculate_val(curr_weight, final_weight, 90) << "%\n"
              << "B: " << calculate_val(curr_weight, final_weight, 80) << "%\n"
              << "C: " << calculate_val(curr_weight, final_weight, 70) << "%\n";
    return 0;
}
