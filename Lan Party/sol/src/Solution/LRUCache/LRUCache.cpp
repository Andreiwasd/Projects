#include "LRUCache.h"
#include <algorithm>

using namespace std;

LRUCache::LRUCache(int capacity)
{
	this->capacity = capacity;
	//throw("undefined");
}

vector<int> LRUCache::processRequests(vector<int> requestsNo)
{
    int n = capacity;
    vector<int> lru;
    std::vector<int>::iterator it;
    int elementsAtOnePoint =0;
	for (unsigned i=0; i<requestsNo.size(); i++)
	{
	    if(elementsAtOnePoint < n){
           if(find(lru.begin(), lru.end(), requestsNo.at(i)) == lru.end())
           {
                it = lru.begin();
                it = lru.insert ( it , requestsNo.at(i) );
                elementsAtOnePoint++;
           }
           else{
            for(vector<int>::iterator k = find(lru.begin(), lru.end(), requestsNo.at(i)); k != lru.begin() + 1; k--)
            {
                for(vector<int>::iterator j = find(lru.begin(), lru.end(), requestsNo.at(i)) - 1; j != lru.begin(); j--)
                {
                    iter_swap(k,j);
                }
            }
            lru.at(1) = lru.at(0);
            lru.at(0) = requestsNo.at(i);
           }
        }
        else
        {

            if(find(lru.begin(), lru.end(), requestsNo.at(i)) == lru.end())
           {
                it = lru.begin();
                it = lru.insert ( it , requestsNo.at(i) );
                elementsAtOnePoint++;
                lru.erase(lru.begin() + n);
           }
           else{
            for(vector<int>::iterator k = find(lru.begin(), lru.end(), requestsNo.at(i)); k != lru.begin() + 1; k--)
            {
                for(vector<int>::iterator j = find(lru.begin(), lru.end(), requestsNo.at(i)) - 1; j != lru.begin(); j--)
                {
                    iter_swap(k,j);
                }
            }
            lru.at(1) = lru.at(0);
            lru.at(0) = requestsNo.at(i);
           }
        }
    }
    return lru;
	//throw("undefined");
}

int LRUCache::getCapacity()
{
	return capacity;
	//throw("undefined");
}

int LRUCache::getSize()
{
	return size;
	//throw("undefined");
}

vector<int> LRUCache::getLRU()
{
	return lru;
	//throw("undefined");
}

int LRUCache::getLRUCapacity()
{
	return lru.capacity();
	//throw("undefined");
}

void LRUCache::setCapacity(int capacity)
{
	this->capacity = capacity;
	//throw("undefined");
}

void LRUCache::setLRU(vector<int> aux)
{
	lru = aux;
	//throw("undefined");
}
