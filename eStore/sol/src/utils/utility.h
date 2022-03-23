#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "../Solution/Product/NonFoodProduct.h"
#include "../Solution/Product/FoodProduct.h"
#include "../Solution/Product/ResealedProduct.h"
#include "../Solution/User/User.h"
class Utility{

public:

static bool compare_id(User* a, User* b);
static bool compare_alimentary_products(Product* a, Product* b);
static bool compare_resealed_products(Product* a, Product* b);
};