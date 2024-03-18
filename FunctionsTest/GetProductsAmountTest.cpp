#include "pch.h"
#include "Functions.h"

TEST(GetProductsAmountTest, EmptyProductPrices) {
  ASSERT_EQ(func::getProductsAmount(std::vector<unsigned int> {}, 123321), size_t(0));
}

TEST(GetProductsAmountTest, ZeroAmountOfMoney) {
	ASSERT_EQ(func::getProductsAmount(std::vector<unsigned int> { 500000 }, 0), size_t(0));
}

TEST(GetProductsAmountTest, SomeProductsCanBeBought) {
	std::vector<unsigned int> productPrices{ 
		999, 15, 79, 869, 475, 8, 5000, 29999 
	};

	ASSERT_EQ(func::getProductsAmount(productPrices, 2000), size_t(5));
}

TEST(GetProductsAmountTest, AllProductsCanBeBought) {
	std::vector<unsigned int> productPrices{ 
		3000, 400, 20, 1000, 500, 7000, 100000, 15000, 800, 1 
	};

	ASSERT_EQ(func::getProductsAmount(productPrices, 200000), size_t(10));
}