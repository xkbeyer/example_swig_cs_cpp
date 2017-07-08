#ifndef __MAIN_H__
#define __MAIN_H__

// Add function prototypes here

#include <string>
#include <vector>
#include <map>
#include <memory>

typedef std::map<int,std::string> MyMap;
struct myPtr_s {
    int i;
    std::string s;
    struct myPtr_s* next;
};

class Otto {
public:
    Otto(int i, std::string s) : m_i(i), m_s(s) {}
    int i() {return m_i;}
    std::string s() {return m_s;}
    void s(std::string s) {m_s = s;}
private:
    int m_i;
    std::string m_s;
};

class Mock
{
    public:
    // Constructor
    Mock();
    
    void setName(const std::string& name);
    std::string getName();
    std::vector<int> getInts();
    MyMap getMap();
    void printMap(MyMap map);
    myPtr_s* getPtr();
    void printPtr(myPtr_s* ptr);
    std::shared_ptr<myPtr_s> getSharedPtr();
    std::shared_ptr<Otto> getOtto();
    protected:
    std::string name;
private:
    std::vector<int> testVectorOfInts;
};

#endif

