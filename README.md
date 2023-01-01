# Problem-Solving

Solutions of some Code forces problem i solved 


## Tips and tricks
#### Make priority queue of type vector and arrange based on specific element of the vector

```C++
// How to compare elements
struct my_comparator {
    // queue elements are vectors so we need to compare those
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const {
        // sanity checks
        assert(a.size() == 3);
        assert(b.size() == 3);

        // reverse sort puts the largest value at the top
        return a[1] < b[1];
    }
};
// for usability wrap this up in a type alias:
using my_priority_queue = std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, my_comparator>;
int main(){
    ...
    my_priority_queue q;
    q.push({1, 2, 3});
    ...
}
```
