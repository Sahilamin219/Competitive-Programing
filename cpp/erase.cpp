
// CPP program to illustrate 
// difference b/w std::remove 
// and std::vector::erase algorithm 
#include <bits/stdc++.h> 
  
int main() 
{ 
    std::vector<int> vec{ 10, 20, 30, 30, 20, 10, 10, 20 }; 
    std::vector<int> ve{ 10, 20, 30, 30, 20, 10, 10, 20 }; 
  
    // Print original vector 
    std::cout << "Original vector :"; 
    for (int i = 0; i < vec.size(); i++) 
        std::cout << " " << vec[i]; 
    std::cout << "\n"; 
  
    // Iterator that store the position of last element 
    std::vector<int>::iterator pend; 
  
    // std :: remove function call 
    pend = std::remove(vec.begin(), vec.end(), 20); 
  
    // Print the vector after std :: remove 
    std::cout << "Range contains:"; 
    for (std::vector<int>::iterator p = vec.begin(); p != pend; ++p) 
        std::cout << ' ' << *p; std::cout << '\n'; 
  
            // Print original vector 
            std::cout << "Original Vector :"; 
    for (int i = 0; i < ve.size(); i++) 
        std::cout << " " << ve[i]; 
    std::cout << "\n"; 
  
    // std :: vector :: erase function call 
    // erase the first 3 elements of vector vector 
    ve.erase(ve.begin(), ve.begin() + 3); 
  
    // Print the vector 
    std::cout << "Vector contains :"; 
    for (int i = 0; i < ve.size(); i++) 
        std::cout << " " << ve[i]; 
    std::cout << "\n"; 
  
    return 0; 
} 

Output:

Original vector : 10 20 30 30 20 10 10 20
Range contains: 10 30 30 10 10

Original Vector : 10 20 30 30 20 10 10 20
Vector contains : 30 20 10 10 20

