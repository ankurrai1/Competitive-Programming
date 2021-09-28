
// here I have builded minmin heap

#include <queue>
#include <iostream>

using namespace std;

struct comparator {
 bool operator()(int i, int j) {
 return i > j;
 }
};

int main(int argc, char const *argv[])
{
 priority_queue<int, std::vector<int>, comparator> minHeap;

 minHeap.push(10);
 minHeap.push(5);
 minHeap.push(12);
 minHeap.push(3);
 minHeap.push(3);
 minHeap.push(4);

 while (!minHeap.empty()) {
 cout << minHeap.top() << " ";
 minHeap.pop();
 }
 return 0;
}

// In this default queue is in maxheap
int main ()
{
  std::priority_queue<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  std::cout << "2. size: " << myints.size() << '\n';

  return 0;
}
