#include "utility.h"

//Vrem sa vedem ce produse alimenare se afla in magazin, grupandu-le pe cele cu acelasi nume. (ex mere din Spania si din Polonia). 
///Mai mult, daca intalnim doua produse din aceeasi tara, vrem sa le sortam dupa pret. Astfel, sortati produsele alimentare dupa nume, 
//tara si pret si returnati lista obtinuta.

bool Utility::compare_alimentary_products(Product* a, Product* b){

    if(a->getName() < b->getName()){
        return true;
    }

    else if(a->getName() == b->getName())
    {
        if(dynamic_cast <FoodProduct*> (a)->getCountryOfOrigin() < dynamic_cast <FoodProduct*>(b)->getCountryOfOrigin())
            return true;
        
        else if(dynamic_cast <FoodProduct*> (a)->getCountryOfOrigin() == dynamic_cast <FoodProduct*>(b)->getCountryOfOrigin())
        {
            if(dynamic_cast <FoodProduct*> (a)->getLeiPerKg() < dynamic_cast <FoodProduct*>(b)->getLeiPerKg())
                return true;
            else return false;
        }
        else return false;
    }

    else return false;
    
}

bool Utility::compare_resealed_products(Product* a, Product* b){

    if(dynamic_cast <ResealedProduct*> (a)->getPrice() <= dynamic_cast <ResealedProduct*>(b)->getPrice()){
        return true;
    }
    else {
        return false;
    }
}

bool Utility::compare_id(User* a, User* b)
{
    if(a->getUserID() < b->getUserID())
        return true;
    else 
        return false;
}