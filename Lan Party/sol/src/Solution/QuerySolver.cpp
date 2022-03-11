#include "QuerySolver.h"

using namespace std;

/* NU MODIFICATI */
QuerySolver::QuerySolver() 
{
  server = Server::GetInstance();
}

/* NU MODIFICATI */
QuerySolver::~QuerySolver()
{
  if (server != nullptr) 
  {
    server = nullptr;
  }
}

list<Product*> QuerySolver::Query_3a(){
  list<Product*> listaEspressorD;
  for(auto const& lista : server->getProductsList())
  {
      if((lista->getCategory()=="espressor") && (lista->getProductType()=="DiscountedProduct")){
        listaEspressorD.push_back(lista);
      }
  }
  return listaEspressorD;
  //throw("undefined");
}

list<User*> QuerySolver::Query_3b(){
  list<User*> listaUseri;
  for(auto const& lista : server->getUsersList())
  {
      if((lista->getUserType()=="BasicUser") && (lista->getTransportCost()<=11.5)){
        listaUseri.push_back(lista);
      }
  }
  return listaUseri;
  //throw("undefined");
}

list<Product*> QuerySolver::Query_3c(){
  list<Product*> listaProdR;
  for(auto const& lista : server->getProductsList())
  {
    if((lista->getProductType() == "ResealedProduct") && dynamic_cast <ResealedProduct*>(lista)->getReason() == "lipsa_accesorii"){
      listaProdR.push_back(lista);
    }
  }
  listaProdR.sort(Utility::compare_resealed_products);
  return listaProdR;
  //throw("undefined");
}

list<Product*> QuerySolver::Query_3d(){
  list<Product*> listaAlimente;
  for(auto const& lista : server->getProductsList())
  {
      if(lista->getProductType()=="FoodProduct")
      {
        listaAlimente.push_back(lista);
      }
  }
  listaAlimente.sort(Utility::compare_alimentary_products);
  return listaAlimente;
  //throw("undefined");
}

list<User*> QuerySolver::Query_3e(){
  list<User*> listaUser;
  map<string, int> harta;
  for(auto const& lista : server->getUsersList())
  {
    string judet;
    judet = lista->getBillingData().getCounty();
    if(harta.find(judet) == harta.end())
    {
      harta.insert(pair<string, int>(judet, 1));
    }
    else
    {
      harta[judet]++;
    }
  }
  string judMax;
  int nrMax = 0;
  for(auto const& listJud : harta)
  {
    if(listJud.second > nrMax)
      {
        judMax = listJud.first;
        nrMax = listJud.second;
      }
  }

  for(auto const& lista : server->getUsersList())
  {
    if(lista->getBillingData().getCounty() == judMax && lista->getBillingData().getBlock() == "-" &&
     lista->getBillingData().getApartment() == 0 && lista->getDeliveryData().getBlock() == "-" &&
     lista->getDeliveryData().getApartment() == 0)
    {
      listaUser.push_back(lista);
    }
  }
  listaUser.sort(Utility::compare_id);
  return listaUser;
  //throw("undefined");
}

list<User*> QuerySolver::Query_3f()
{
  list<User*> listaUserP;
  list<Product*> listaProduse;

  for(auto const& listaP : server->getProductsList())
  {
    if(listaP->getCategory() == "telefon" || listaP->getCategory() == "imprimanta")
      listaProduse.push_back(listaP);
  }

  list <Product*> :: iterator it1;
  map<int, int> :: iterator it2;
  for(auto const& lista : server->getUsersList())
  {
    if(lista->getUserType()=="PremiumUser")
    {
      for(it1 = listaProduse.begin(); it1 != listaProduse.end(); it1++)
        for(it2 = dynamic_cast <PremiumUser*> (lista)->getDiscounts().begin(); it2 != dynamic_cast <PremiumUser*> (lista)->getDiscounts().end(); it2++) 
          if((*it1)->getId() == it2->first)
            listaUserP.push_back(lista);
    }
  }
  return listaUserP;
  //throw("undefined");
}
