#include <iostream>
#include <vector>

std::vector<int> func(){
    std::vector<int> x;
    return x;
}

int main() {
    std::vector<int> nums = {-10,10,-20,20,-30,30,-40,40};
    std::vector<int> res;
    for(int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            res.push_back(nums[i]);
        }
    }
    for(int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 0) {
            res.push_back(nums[i]);
        }
    }
    nums = res;
    for(int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << std::endl;
    }
    nums = func();
}
