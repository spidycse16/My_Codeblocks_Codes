//skeleton


// Unique elements in a vector

sort(v.begin(), v.end());
vector<int>::iterator it = unique(v.begin(), v.end());
v.resize(distance(v.begin(), it));
