std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) {
 vec.push_back(i); 
 vec.erase(vec.begin()); 
 }
 // Expected size 0, but it is 9