#include "Functions.h"

#include <algorithm>

namespace func {
    size_t getProductsAmount(std::vector<unsigned int> productPrices, const int amountOfMoney) {
        std::sort(productPrices.begin(), productPrices.end());

        int sum = 0;
        for (size_t i = 0; i < productPrices.size(); ++i) {
            sum += productPrices[i];
            if (sum > amountOfMoney) {
                return i;
            }
        }

        return productPrices.size();
    }

    bool isLeapYear(const unsigned int year) {
        return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    }
};