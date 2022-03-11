#include "Server.h"

using namespace std;

/* NU MODIFICATI */
Server::Server(){}

/* NU MODIFICATI */
Server *Server::GetInstance()
{
	if (!instance)
	{
		instance = new Server;
	}

	return instance;
}

/* NU MODIFICATI */
Server::~Server()
{
	if (instance != NULL)
		instance = NULL;

	if (!__UserID__ProductsCart__.empty())
		__UserID__ProductsCart__.clear();
}

void Server::set__UserID__ProductsCart__()
{
	for(auto const& it : usr) {
        ShoppingCart* cart = new ShoppingCart();
        this->__UserID__ProductsCart__.insert(make_pair(it->getUserID(), cart));
    }
	//throw("undefined");
}

list<Product *> &Server::getProductsList()
{
	return prod;
	//throw("undefined");
}

list<User *> &Server::getUsersList()
{
	return usr;
	//throw("undefined");
}

map<int, ShoppingCart *> Server::get__UserID__ProductsCart__()
{
	return __UserID__ProductsCart__;
	//throw("undefined");
}

bool Server::requestAddProduct(int userID, int productID, int quantity)
{
	list<Product*>::iterator itp;
	map<int, ShoppingCart*> :: iterator it;
	map<int, int> :: iterator it2;
	int gasit = 0;
	int gasitUser = 0;
	if(quantity <= 0)
		return false;
	for(it = __UserID__ProductsCart__.begin(); it != __UserID__ProductsCart__.end(); it++)
		if(userID == it->first)
		{
			gasitUser = 1;
			for(it2 = it->second->getShoppingCart().begin(); it2 != it->second->getShoppingCart().end(); it2++)
				if(it2->first == productID)
				{
					for(itp = prod.begin(); itp != prod.end(); itp++)
						if((*itp)->getId() == productID && (*itp)->checkQuantity(quantity))
						{
							it->second->raiseQuantity(productID, quantity);
							(*itp)->decreaseQuantity(quantity);
							gasit = 1;
							return true;
						}
				}
			if(gasit == 0)
			{
					for(itp = prod.begin(); itp != prod.end(); itp++)
						if((*itp)->getId() == productID && (*itp)->checkQuantity(quantity))
						{
							it->second->addProduct(productID, quantity);
							(*itp)->decreaseQuantity(quantity);
							return true;
						}
			}		
		}
	if(gasitUser == 0)
		return false;
	return false;
	//throw("undefined");
}

, 
{
	list<Product*>::iterator itp;
	map<int, ShoppingCart*> :: iterator it;
	map<int, int> :: iterator it2;
	if(quantity <= 0)
		return false;
	for(it = __UserID__ProductsCart__.begin(); it != __UserID__ProductsCart__.end(); it++)
		if(userID == it->first)
		{
			for(it2 = it->second->getShoppingCart().begin(); it2 != it->second->getShoppingCart().end(); it2++)
			{
				if(it2->first == productID)
				{
					if(quantity <= it->second->getQuantity(productID))
					{
						for(itp = prod.begin(); itp != prod.end(); itp++)
							if((*itp)->getId() == productID)
								(*itp)->increaseQuantity(it->second->getQuantity(productID));
						it->second->lowerQuantity(productID, quantity);
						return true;
					}
					else
					{	
						for(itp = prod.begin(); itp != prod.end(); itp++)
							if((*itp)->getId() == productID)
								(*itp)->increaseQuantity(it->second->getQuantity(productID));
						it->second->deleteProduct(productID);
						return true;
					}
				}
			}
		}
	return false;
	//throw("undefined");
}

/* NU MODIFICATI */
void Server::populateProducts(const json &input)
{
	prod = ObjectFactory::getProductList(input["shoppingCart"]);
}

/* NU MODIFICATI */
void Server::populateUsers(const json &input)
{
	usr = ObjectFactory::getUserList(input["useri"]);
}