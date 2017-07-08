#include "Mock.h"
#include <algorithm>
#include <iostream>
#include <map>

// Add function definitions here

Mock::Mock()
{
    // default Constructor
    this->name = "default";
}
    
void Mock::setName(const std::string& name)
{
    this->name = name;
}


std::string Mock::getName()
{
    return this->name;
}

std::vector<int> Mock::getInts()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    return v;
}

MyMap Mock::getMap()
{
    std::map<int,std::string> v;
    v[1] = "karl";
    v[2] = "otto";
    v[3] = "meyer";
    return v;
}

void Mock::printMap(MyMap map)
{
    std::for_each( std::begin(map), std::end(map), [] (std::pair<int,std::string> m) {
        std::cout << "v["<< m.first << "]=" << m.second << "\n";
    });

}

myPtr_s* Mock::getPtr()
{
    myPtr_s* root = new myPtr_s();
    root->i = 1;
    root->s = "root node";
    myPtr_s* leaf = new myPtr_s();
    root->next = leaf;
    leaf->i = 2;
    leaf->s = "leaf node";
    leaf->next = nullptr;
    return root;
}

void Mock::printPtr(myPtr_s* ptr)
{
    myPtr_s* node = ptr;
    while(node) {
        std::cout << "[C++]ptr->i=" << node->i << "\n";
        std::cout << "[C++]ptr->s=" << node->s << "\n";
        node = node->next;
    }
}

std::shared_ptr<myPtr_s> Mock::getSharedPtr()
{
    std::shared_ptr<myPtr_s> node = std::make_shared<myPtr_s>(); 
    node->i = 25;
    node->s = "shared";
    node->next = nullptr;
    return node;
}
std::shared_ptr<Otto> Mock::getOtto()
{
    std::shared_ptr<Otto> otto = std::make_shared<Otto>(33, std::string("otto"));
    return otto;
}

