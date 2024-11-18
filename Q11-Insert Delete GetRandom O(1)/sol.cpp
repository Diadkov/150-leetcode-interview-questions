#include <random>
#include <iostream>
#include <vector>
#include <unordered_map>

class RandomizedSet {
private:
    std::vector<int> elem;
    std::unordered_map<int, int> pos;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (pos.find(val) != pos.end()) {
            return false;
        }
        elem.push_back(val);
        pos[val] = elem.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (pos.find(val) == pos.end()) {
            return false;
        }
        int idx = pos[val];
        int lastElem = elem.back();
        elem[idx] = lastElem;
        pos[lastElem] = idx;
        elem.pop_back();
        pos.erase(val);
        return true;
    }

    int getRandom() {
        int randIndex = rand() % elem.size();
        return elem[randIndex];
    }
};